#ifndef PROCESSOR_LINE_HPP
#define PROCESSOR_LINE_HPP

#include "geometry-processor.hpp"

class processor_line : public geometry_processor
{
public:
    processor_line(std::shared_ptr<reprojection> const &proj);

    wkb_t process_way(osmium::Way const &way) override;
    wkbs_t process_relation(osmium::Relation const &rel,
                            osmium::memory::Buffer const &ways) override;

private:
    geom::osmium_builder_t m_builder;
};

#endif /* PROCESSOR_LINE_HPP */
