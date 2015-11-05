<?php
/**
 * IFPRI importer feeds
 *
 * Author: Jules Clement <jules@ker.bz>
 * Date: Oct. 2015
 */

function importer_ifpri_feeds_importer_default() {
    $export = array();

    // Those files should only contain the code given by
    // feeds -> export module functionnality
    
    include 'importer_ifpri_creator.importer.inc';
    $export[$feeds_importer->id] = $feeds_importer;

    include 'importer_ifpri.importer.inc';
    $export[$feeds_importer->id] = $feeds_importer;

    return $export;
}
