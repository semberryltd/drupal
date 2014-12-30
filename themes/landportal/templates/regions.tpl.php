<?php
// Show [...]/sites/all/themes/book/views/regions.mustache
?>

<div class="col-sm-9 graph-section">
  <h2 class="section section-name"><span class="indicator-name"></span></h2>
  <div id="map" class="map"></div>

  <h2 class="section section-name indicator-name"><?php echo t('For countries in the region'); ?></h2>
  <div id="chart-region-bar-comparison" class="graph-medium"></div>

   <h2 class="section section-name indicator-name"><?php echo t('Across time in'); ?></h2>
  <div class="row compare-bar">
   <div class="col-xs-4"><?php echo t('Compare with'); ?></div>
    <div class="col-xs-8">
      <select id="region-comparing-select" class="form-control">
<?php foreach ($data['selectors']['regions'] as $r): ?>
        <option value="<?php echo $r['un_code']; ?>"><?php echo $r['name']; ?></option>
<?php endforeach; ?>
      </select>
    </div>
  </div>
  <div class="row compare-legend">
    <div class="col-xs-6">
      <div id="compare-legend-circle-1" class="circle"></div>
      <span id="compare-legend-text-1"></span>
    </div>
    <div class="col-xs-6">
      <div id="compare-legend-circle-2" class="circle"></div>
      <span id="compare-legend-text-2"></span>
    </div>
  </div>
  <div id="chart-timeline-comparison" class="graph-large"></div>
</div>

<div class="col-sm-3">
   <h2 class="section"><span><?php echo t('World region'); ?></span></h2>
  <select id="region-select" multiple="multiple" class="form-control data-sources">
<?php foreach ($data['selectors']['regions'] as $r): ?>
    <option value="<?php echo $r['un_code']; ?>"><?php echo $r['name']; ?></option>
<?php endforeach; ?>
  </select>



<?php /* SAME SNIPET IN country & regions.tpl.php */ ?>
<h2 class="section"><span><?php echo t('Data sources'); ?></span></h2>
<select id="source-select" multiple="multiple" class="data-sources">
<?php foreach ($data['selectors']['data-sources'] as $d): ?>
    <option value="<?php echo $d['id']; ?>" title="<?php echo $d['name']; ?>"><?php echo $d['name']; ?></option>
<?php endforeach; ?>
  </select>



<?php /* SAME SNIPET IN country & regions.tpl.php */ ?>
<h2 class="section"><span><?php echo t('Indicators'); ?></span></h2>
<!-- all indicator selects -->
<div>
<?php foreach ($data['selectors']['data-sources'] as $d): ?>
  <select data-source="<?php echo $d['id']; ?>" class="form-control topic-indicator-select data-sources hidden" multiple="multiple">
<?php foreach ($d['indicators'] as $i): ?>
    <option value="<?php echo $i['id']; ?>"><?php echo $i['name']; ?></option>
<?php endforeach; ?>
  </select>
<?php endforeach; ?>
</div>
<select id="indicator-select" multiple="multiple" class="form-control data-sources"></select>





   <a href="/book/indicators" class="more-info"><?php echo t('More about the indicators'); ?></a>

   <h2 class="section"><span><?php echo t('Specific country'); ?></span></h2>
<select id="country-select" class="form-control">
   <option disabled="disabled" selected="true"><?php echo t('Select a country'); ?></option>
<?php foreach ($data['selectors']['countries'] as $i): ?>
  <option value="<?php echo $i['iso3']; ?>"><?php echo $i['name']; ?></option>
<?php endforeach; ?>
</select>
  <a href="/book/countries" class="more-info"><?php echo t('More about areas and countries'); ?></a>
  </div>
</div>
