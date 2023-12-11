bool aabb_vs_sbb(minx, miny, minz, maxx, maxy, maxz, c, r)

{
    for (int i = 0; i < 3; i++)
    {
        if (s.c[i] < a.min[i])
        {
            s = s.c[i] - a.min[i];
            d += s * s;
        }
        else if (s.c[i] > a.max[i])
        {
            s = s.c[i] - a.max[i];
            d + = s * s;
        }
    }

    if (d <= c.r * c.r)
    {
        return true;
    }
}
