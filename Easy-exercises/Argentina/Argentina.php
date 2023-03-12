<?php
    echo ("enter value for Pesos: \n");
    $pesos = (int)readline('');
    echo ("enter value for Dollar: \n");
    $dollar = (int)readline('');
   //convert dollar to pesos
    $rate = (50 * $dollar);
    if($rate > $pesos)
    echo ("Pesos");
    else
    echo("Dollars");
?>