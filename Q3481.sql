select distinct node_id, (
  case
    when pointer is null then 'LEAF'
    when node_id in (select pointer from nodes) then 'INNER'
    else 'ROOT'
  end
) from nodes
order by node_id asc;