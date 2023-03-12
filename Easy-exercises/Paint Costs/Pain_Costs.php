<?php
define('CANVAS_BRUSHES', 40.00);
    echo ("Enter number of colors: \n");
    $paint = (float)readline("");
    $res = (($paint * 5.00) + CANVAS_BRUSHES);
    $tax = ceil(($res * 10) / 100);
    $total = ceil($tax + $res);
    echo ("Total cost for project is : ${total}");
?>