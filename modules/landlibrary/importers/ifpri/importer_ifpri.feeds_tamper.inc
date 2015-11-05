<?php
/**
 * IFPRI importer
 *
 * Author: Jules Clement <jules@ker.bz>
 * Date: Oct. 2015
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function importer_ifpri_feeds_tamper_default() {
    $all_tamper = array();

    include 'importer_ifpri_creator.tamper.inc';
    // Is PHP really that smart?
    $all_tamper += $export;
    //$all_tamper[$feeds_tamper->id] = $feeds_tamper;

    include 'importer_ifpri.tamper.inc';
    $all_tamper += $export;
    //$all_tamper[$feeds_tamper->id] = $feeds_tamper;

    return $all_tamper;
}
