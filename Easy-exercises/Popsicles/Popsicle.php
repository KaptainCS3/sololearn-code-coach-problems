<?php
// done by Leonard Appelgryn(KAPTAINCS3)
    echo ("Enter number of siblings: \n");
    $siblings = (int)readline("");
    echo ("Enter number of Popsicles: \n");
    $popsicles = (int)readline("");
    if($popsicles % $siblings != 0)
    echo ("eat them yourself\n");
    else
    echo ("give away\n");
?>