import math

mag_clas = {
    "fire":  [200, 20, 30, 50],
    "water": [300, 10, 25, 40], 
    "earth": [400, 25, 55, 70],
    "air":   [100, 18, 38, 60]
}

R = ""
for _ in range(int(input())):
    ret_w, ret_h, ret_x0, ret_y0 = map(int, input().split())
    mag_t, mag_n, mag_cx, mag_cy = input().split()
    mag_n  = int(mag_n)
    mag_cx = int(mag_cx)
    mag_cy = int(mag_cy)

    mag_d = mag_clas[mag_t][0]
    mag_r = mag_clas[mag_t][mag_n]

    if (mag_cx <= ret_x0 + ret_w and mag_cx >= ret_x0) and (mag_cy <= ret_y0 + ret_h and mag_cy >= ret_y0):
        R += f"{mag_d}\n"
    elif (mag_cx <= ret_x0 + ret_w and mag_cx >= ret_x0):
        dist_b = abs(mag_cy - ret_y0)
        dist_t = abs(mag_cy - (ret_y0 + ret_h))

        if mag_r >= dist_b or mag_r >= dist_t:
            R += f"{mag_d}\n"
        else:
            R += "0\n"
    elif (mag_cy <= ret_y0 + ret_h and mag_cy >= ret_y0):
        dist_e = abs(mag_cx - ret_x0)
        dist_d = abs(mag_cx - (ret_x0 + ret_w))

        if mag_r >= dist_e or mag_r >= dist_d:
            R += f"{mag_d}\n"
        else:
            R += "0\n"
    else:
        dist_sd = math.sqrt((mag_cx - (ret_x0 + ret_w))**2 + (mag_cy - (ret_y0 + ret_h))**2)
        dist_ie = math.sqrt((mag_cx - ret_x0)**2 + (mag_cy - ret_y0)**2)
        dist_se = math.sqrt((mag_cx - ret_x0)**2 + (mag_cy - (ret_y0 + ret_h))**2)
        dist_id = math.sqrt((mag_cx - (ret_x0 + ret_w))**2 + (mag_cy - ret_y0)**2)

        if mag_r >= dist_sd or mag_r >= dist_ie or mag_r >= dist_se or mag_r >= dist_id:
            R += f"{mag_d}\n"
        else:
            R += "0\n"
print(R.strip())