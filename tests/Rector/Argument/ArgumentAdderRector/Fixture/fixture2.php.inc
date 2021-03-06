<?php

namespace Rector\Core\Tests\Rector\Argument\ArgumentAdderRector\Fixture;

use Rector\Core\Tests\Rector\Argument\ArgumentAdderRector\Source\SomeContainerBuilder;

class SomeClass2
{
    public function create()
    {
        $containerBuilder = new SomeContainerBuilder();
        $containerBuilder->addCompilerPass('pass', 'type');
    }
}

?>
-----
<?php

namespace Rector\Core\Tests\Rector\Argument\ArgumentAdderRector\Fixture;

use Rector\Core\Tests\Rector\Argument\ArgumentAdderRector\Source\SomeContainerBuilder;

class SomeClass2
{
    public function create()
    {
        $containerBuilder = new SomeContainerBuilder();
        $containerBuilder->addCompilerPass('pass', 'type', 0);
    }
}

?>
