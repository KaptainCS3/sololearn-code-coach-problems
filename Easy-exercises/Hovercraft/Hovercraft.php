<?php
// done by Leonard Appelgryn(KAPTAINCS3)
define("AMT_IN" ,21000000);
    echo ("Enter number of Customers:\n");
    $customer = (int)readline("");
    $new_amt = 3000000 * $customer;
    if($new_amt > AMT_IN)
    echo ("Profit\n");
    else if($new_amt === AMT_IN)
    echo ("Broke Even\n");
    else
    echo ("Loss\n");
?>