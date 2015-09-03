#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 222U;
volatile uint32_t t0 = 51475U;
int16_t x12 = INT16_MIN;
uint8_t x13 = 1U;
static int64_t x16 = -315109689LL;
int64_t x21 = -1LL;
uint64_t t5 = 754201737LLU;
static uint32_t x25 = UINT32_MAX;
int64_t x40 = INT64_MIN;
volatile int64_t t9 = -6590052LL;
int64_t t10 = -20561LL;
int32_t x50 = INT32_MIN;
volatile uint16_t x52 = 1U;
int32_t x53 = -3;
int32_t x57 = INT32_MIN;
volatile uint64_t t13 = 31073712955779LLU;
volatile int8_t x64 = INT8_MIN;
static volatile int64_t t14 = -1LL;
volatile int16_t x67 = -1;
static volatile int16_t x72 = INT16_MIN;
volatile int32_t t16 = 32569789;
int64_t x92 = 85643777870393793LL;
volatile int64_t t21 = 16148LL;
int16_t x96 = -1909;
volatile int64_t x99 = INT64_MIN;
volatile uint64_t x100 = UINT64_MAX;
static uint16_t x102 = 1U;
uint64_t t24 = 4162LLU;
static int32_t x106 = INT32_MIN;
static int8_t x112 = INT8_MIN;
int32_t t26 = 2883146;
int32_t x119 = 11060;
volatile uint64_t t30 = 16978677333LLU;
volatile uint32_t t32 = 5227088U;
int8_t x138 = 1;
volatile int64_t x139 = INT64_MAX;
uint16_t x142 = UINT16_MAX;
uint64_t x144 = UINT64_MAX;
uint64_t t35 = 1841LLU;
int64_t t36 = 2054349291523LL;
uint64_t x154 = 1005LLU;
uint64_t t37 = 37950LLU;
int16_t x157 = -1253;
int8_t x164 = INT8_MIN;
static volatile uint64_t t39 = 13749573LLU;
volatile int32_t x166 = INT32_MAX;
int64_t x171 = -1LL;
volatile uint8_t x175 = 11U;
int8_t x176 = 1;
int32_t x182 = -1;
int64_t x183 = -29446695517LL;
int8_t x187 = -1;
static int32_t t45 = 56;
uint8_t x191 = 7U;
int32_t x192 = 5830;
int32_t t46 = 1701;
uint8_t x201 = 0U;
static uint32_t x202 = UINT32_MAX;
int64_t x209 = -1LL;
volatile int64_t t52 = 8031551LL;
int16_t x221 = -12;
int8_t x229 = -45;
volatile uint8_t x231 = 45U;
uint64_t x232 = UINT64_MAX;
static int16_t x238 = 141;
volatile int64_t x240 = INT64_MAX;
int16_t x243 = INT16_MIN;
volatile uint8_t x251 = UINT8_MAX;
int32_t x252 = INT32_MIN;
int8_t x272 = -1;
volatile int32_t t66 = 62;
static volatile int64_t t67 = 1LL;
static int64_t x279 = -17211314921635638LL;
int64_t x283 = INT64_MIN;
int8_t x284 = 28;
int64_t t69 = -85552LL;
uint16_t x292 = 12575U;
int8_t x298 = -1;
static int32_t x301 = 11113;
int32_t x302 = INT32_MIN;
volatile int32_t t74 = 3395;
uint8_t x313 = UINT8_MAX;
int8_t x315 = -1;
uint64_t x326 = 2621403LLU;
uint32_t x327 = UINT32_MAX;
uint64_t t80 = 1574283LLU;
volatile int32_t x333 = -1;
static uint8_t x334 = 63U;
volatile uint64_t x338 = UINT64_MAX;
int32_t x349 = -19;
uint8_t x360 = UINT8_MAX;
volatile int32_t t87 = 21563705;
static int16_t x365 = 1;
int64_t x367 = INT64_MAX;
uint64_t t89 = 96LLU;
int16_t x370 = -1;
static volatile int8_t x371 = INT8_MIN;
static uint64_t x375 = UINT64_MAX;
uint64_t t92 = 16852470343720LLU;
int64_t x384 = -1LL;
static uint64_t x389 = 191359393LLU;
int64_t x391 = -191233080689138493LL;
volatile uint64_t t95 = 74099587LLU;
int16_t x395 = -1;
int16_t x398 = INT16_MIN;
volatile int32_t x401 = INT32_MIN;
uint8_t x403 = 2U;
int64_t x404 = INT64_MAX;
int64_t t98 = -2LL;
int16_t x405 = -2026;
int64_t x406 = 2356523862LL;


void f0(void) {
	int32_t x1 = -1;
	static int8_t x3 = INT8_MIN;
	uint32_t x4 = 2U;

	t0 = (((x1|x2)|x3)/x4);

	if (t0 != 2147483647U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	static int8_t x6 = 1;
	static volatile uint16_t x7 = 11983U;
	volatile int16_t x8 = 251;
	volatile int32_t t1 = 0;

	t1 = (((x5|x6)|x7)/x8);

	if (t1 != -82) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x9 = INT16_MIN;
	int32_t x10 = 0;
	static uint8_t x11 = 4U;
	volatile int32_t t2 = -694131;

	t2 = (((x9|x10)|x11)/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = UINT32_MAX;
	int64_t x15 = INT64_MIN;
	int64_t t3 = 1670986LL;

	t3 = (((x13|x14)|x15)/x16);

	if (t3 != 29270353640LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 244780033417633LL;
	int8_t x18 = -1;
	int32_t x19 = -1;
	int32_t x20 = -1;
	static int64_t t4 = 23267LL;

	t4 = (((x17|x18)|x19)/x20);

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = INT8_MIN;
	uint32_t x23 = UINT32_MAX;
	uint64_t x24 = 5005468141LLU;

	t5 = (((x21|x22)|x23)/x24);

	if (t5 != 3685318446LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x26 = 4LLU;
	uint8_t x27 = UINT8_MAX;
	volatile uint16_t x28 = 4U;
	uint64_t t6 = 27303LLU;

	t6 = (((x25|x26)|x27)/x28);

	if (t6 != 1073741823LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = UINT8_MAX;
	volatile int64_t x34 = 713522361566928LL;
	volatile uint64_t x35 = 7LLU;
	int8_t x36 = 1;
	uint64_t t7 = 1098194062916609LLU;

	t7 = (((x33|x34)|x35)/x36);

	if (t7 != 713522361566975LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x37 = INT16_MIN;
	volatile int16_t x38 = 1163;
	int8_t x39 = INT8_MAX;
	volatile int64_t t8 = 3832286400459LL;

	t8 = (((x37|x38)|x39)/x40);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = -6;
	volatile int32_t x42 = INT32_MAX;
	int64_t x43 = 0LL;
	static int64_t x44 = -1LL;

	t9 = (((x41|x42)|x43)/x44);

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x45 = INT64_MIN;
	int16_t x46 = -1;
	uint32_t x47 = 1884804U;
	uint16_t x48 = 4U;

	t10 = (((x45|x46)|x47)/x48);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x49 = INT8_MAX;
	uint32_t x51 = 1359825U;
	volatile uint32_t t11 = 16259272U;

	t11 = (((x49|x50)|x51)/x52);

	if (t11 != 2148843519U) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x54 = 2282244U;
	uint32_t x55 = 387852863U;
	static uint32_t x56 = 23U;
	uint32_t t12 = 2005U;

	t12 = (((x53|x54)|x55)/x56);

	if (t12 != 186737708U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x58 = UINT64_MAX;
	uint64_t x59 = UINT64_MAX;
	static int64_t x60 = INT64_MAX;

	t13 = (((x57|x58)|x59)/x60);

	if (t13 != 2LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	uint16_t x62 = 1U;
	uint16_t x63 = UINT16_MAX;

	t14 = (((x61|x62)|x63)/x64);

	if (t14 != 72057594037927424LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = -1895943535LL;
	int16_t x66 = -5038;
	uint16_t x68 = 11724U;
	volatile int64_t t15 = -14LL;

	t15 = (((x65|x66)|x67)/x68);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MAX;
	int16_t x70 = INT16_MIN;
	int8_t x71 = INT8_MIN;

	t16 = (((x69|x70)|x71)/x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = INT64_MIN;
	volatile int64_t x74 = INT64_MAX;
	int32_t x75 = INT32_MIN;
	int8_t x76 = INT8_MAX;
	int64_t t17 = 1659518356311LL;

	t17 = (((x73|x74)|x75)/x76);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x77 = 0U;
	uint32_t x78 = UINT32_MAX;
	static volatile int16_t x79 = INT16_MAX;
	uint64_t x80 = UINT64_MAX;
	volatile uint64_t t18 = 3LLU;

	t18 = (((x77|x78)|x79)/x80);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = INT32_MIN;
	static uint64_t x82 = 7304275LLU;
	int64_t x83 = 12544863LL;
	static int32_t x84 = INT32_MAX;
	uint64_t t19 = 372844635LLU;

	t19 = (((x81|x82)|x83)/x84);

	if (t19 != 8589934595LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = UINT64_MAX;
	volatile int64_t x86 = INT64_MIN;
	uint8_t x87 = UINT8_MAX;
	int16_t x88 = -236;
	volatile uint64_t t20 = 429700046LLU;

	t20 = (((x85|x86)|x87)/x88);

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x89 = INT8_MIN;
	static uint16_t x90 = UINT16_MAX;
	volatile uint16_t x91 = 0U;

	t21 = (((x89|x90)|x91)/x92);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint32_t x93 = 8792U;
	volatile uint8_t x94 = 4U;
	uint64_t x95 = 846381663LLU;
	static uint64_t t22 = 338LLU;

	t22 = (((x93|x94)|x95)/x96);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = 89LL;
	static int64_t x98 = INT64_MAX;
	volatile uint64_t t23 = 6577497LLU;

	t23 = (((x97|x98)|x99)/x100);

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MIN;
	volatile uint64_t x103 = 11LLU;
	volatile uint8_t x104 = 16U;

	t24 = (((x101|x102)|x103)/x104);

	if (t24 != 576460752303423488LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 11LLU;
	uint32_t x107 = 36964716U;
	volatile int8_t x108 = INT8_MIN;
	uint64_t t25 = 237613691373522845LLU;

	t25 = (((x105|x106)|x107)/x108);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = INT32_MAX;
	volatile uint8_t x110 = 1U;
	static int8_t x111 = INT8_MIN;

	t26 = (((x109|x110)|x111)/x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = UINT16_MAX;
	int16_t x114 = INT16_MAX;
	volatile int64_t x115 = INT64_MAX;
	int32_t x116 = INT32_MAX;
	volatile int64_t t27 = 163461188521LL;

	t27 = (((x113|x114)|x115)/x116);

	if (t27 != 4294967298LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x117 = 3217461702004613124LLU;
	int8_t x118 = INT8_MIN;
	uint32_t x120 = 7940167U;
	uint64_t t28 = 416714LLU;

	t28 = (((x117|x118)|x119)/x120);

	if (t28 != 2323218651913LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x121 = 794686215LLU;
	uint32_t x122 = 14U;
	int8_t x123 = 3;
	int32_t x124 = INT32_MIN;
	static uint64_t t29 = 1743979LLU;

	t29 = (((x121|x122)|x123)/x124);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = 2060628032437973LL;
	volatile uint64_t x126 = 107786734340286LLU;
	volatile int64_t x127 = -1LL;
	uint32_t x128 = 2389653U;

	t30 = (((x125|x126)|x127)/x128);

	if (t30 != 7719423729599LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x129 = 25U;
	int16_t x130 = -1;
	volatile uint64_t x131 = 55251253329581LLU;
	int64_t x132 = INT64_MIN;
	volatile uint64_t t31 = 2534527570043LLU;

	t31 = (((x129|x130)|x131)/x132);

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x133 = 2417;
	int32_t x134 = -6;
	int32_t x135 = 11019962;
	uint32_t x136 = 126U;

	t32 = (((x133|x134)|x135)/x136);

	if (t32 != 34087041U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = INT32_MAX;
	uint16_t x140 = UINT16_MAX;
	volatile int64_t t33 = 58688LL;

	t33 = (((x137|x138)|x139)/x140);

	if (t33 != 140739635871744LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x141 = 1021U;
	volatile int16_t x143 = -1406;
	uint64_t t34 = 26935LLU;

	t34 = (((x141|x142)|x143)/x144);

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = 25;
	uint64_t x146 = 2LLU;
	static int8_t x147 = 48;
	uint32_t x148 = UINT32_MAX;

	t35 = (((x145|x146)|x147)/x148);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x149 = INT32_MIN;
	int32_t x150 = -232316754;
	static int64_t x151 = INT64_MIN;
	uint32_t x152 = UINT32_MAX;

	t36 = (((x149|x150)|x151)/x152);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x153 = -1;
	static int8_t x155 = INT8_MIN;
	int8_t x156 = -2;

	t37 = (((x153|x154)|x155)/x156);

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x158 = UINT32_MAX;
	static int64_t x159 = INT64_MAX;
	static volatile uint32_t x160 = 31773643U;
	volatile int64_t t38 = 3676995788079480461LL;

	t38 = (((x157|x158)|x159)/x160);

	if (t38 != 290283743568LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x161 = UINT64_MAX;
	int8_t x162 = INT8_MAX;
	int8_t x163 = -1;

	t39 = (((x161|x162)|x163)/x164);

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x165 = 834LLU;
	int64_t x167 = 1984LL;
	volatile int32_t x168 = 2457;
	uint64_t t40 = 1401789LLU;

	t40 = (((x165|x166)|x167)/x168);

	if (t40 != 874026LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x169 = 851U;
	volatile int16_t x170 = INT16_MAX;
	int16_t x172 = INT16_MIN;
	volatile int64_t t41 = -121406094LL;

	t41 = (((x169|x170)|x171)/x172);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x173 = -1;
	int64_t x174 = -1LL;
	static volatile int64_t t42 = 62720957101220LL;

	t42 = (((x173|x174)|x175)/x176);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x177 = 10U;
	int16_t x178 = -1;
	int8_t x179 = 31;
	int16_t x180 = INT16_MAX;
	int32_t t43 = -68926;

	t43 = (((x177|x178)|x179)/x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x181 = UINT8_MAX;
	int32_t x184 = INT32_MIN;
	int64_t t44 = 769636847LL;

	t44 = (((x181|x182)|x183)/x184);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x185 = -1;
	volatile uint8_t x186 = 61U;
	int16_t x188 = INT16_MIN;

	t45 = (((x185|x186)|x187)/x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x189 = UINT16_MAX;
	int16_t x190 = INT16_MIN;

	t46 = (((x189|x190)|x191)/x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = INT64_MIN;
	int32_t x194 = 7191;
	int64_t x195 = INT64_MAX;
	int64_t x196 = -136357042390212722LL;
	static volatile int64_t t47 = 28938197927339LL;

	t47 = (((x193|x194)|x195)/x196);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = -1;
	static int16_t x198 = 0;
	uint64_t x199 = UINT64_MAX;
	int16_t x200 = 10;
	static uint64_t t48 = 10897285LLU;

	t48 = (((x197|x198)|x199)/x200);

	if (t48 != 1844674407370955161LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x203 = 3;
	static int64_t x204 = -153LL;
	static int64_t t49 = -266LL;

	t49 = (((x201|x202)|x203)/x204);

	if (t49 != -28071681LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x205 = -1;
	volatile int32_t x206 = INT32_MIN;
	int8_t x207 = INT8_MIN;
	int8_t x208 = -33;
	volatile int32_t t50 = -12;

	t50 = (((x205|x206)|x207)/x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x210 = 263543879325519613LL;
	int8_t x211 = INT8_MIN;
	static volatile int64_t x212 = 224873017648808LL;
	int64_t t51 = 6LL;

	t51 = (((x209|x210)|x211)/x212);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = INT32_MAX;
	uint8_t x214 = 65U;
	static int64_t x215 = -6880004347130923LL;
	static volatile uint8_t x216 = 1U;

	t52 = (((x213|x214)|x215)/x216);

	if (t52 != -6880002884763649LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x217 = 3U;
	static int32_t x218 = 761315;
	volatile int16_t x219 = INT16_MIN;
	int32_t x220 = -1;
	int32_t t53 = -13683;

	t53 = (((x217|x218)|x219)/x220);

	if (t53 != 25117) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x222 = INT32_MAX;
	volatile int8_t x223 = -23;
	static volatile uint8_t x224 = 111U;
	int32_t t54 = -339;

	t54 = (((x221|x222)|x223)/x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x225 = UINT64_MAX;
	int16_t x226 = -1;
	volatile int64_t x227 = INT64_MIN;
	static volatile uint64_t x228 = UINT64_MAX;
	uint64_t t55 = 101727LLU;

	t55 = (((x225|x226)|x227)/x228);

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x230 = INT64_MIN;
	volatile uint64_t t56 = 390949349020LLU;

	t56 = (((x229|x230)|x231)/x232);

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = -1;
	static volatile uint64_t x234 = 10521011090955LLU;
	uint32_t x235 = 348138U;
	static int8_t x236 = -1;
	volatile uint64_t t57 = 2798916LLU;

	t57 = (((x233|x234)|x235)/x236);

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x237 = INT32_MAX;
	static uint8_t x239 = 5U;
	int64_t t58 = 118850406LL;

	t58 = (((x237|x238)|x239)/x240);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = INT16_MIN;
	int8_t x242 = INT8_MIN;
	int32_t x244 = INT32_MAX;
	volatile int32_t t59 = 166072;

	t59 = (((x241|x242)|x243)/x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x245 = 1407;
	uint32_t x246 = UINT32_MAX;
	int16_t x247 = -2;
	static uint16_t x248 = 20634U;
	volatile uint32_t t60 = 801U;

	t60 = (((x245|x246)|x247)/x248);

	if (t60 != 208150U) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x249 = -2067707LL;
	int16_t x250 = 0;
	volatile int64_t t61 = -588336049500LL;

	t61 = (((x249|x250)|x251)/x252);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x253 = INT32_MAX;
	volatile int8_t x254 = INT8_MIN;
	static volatile uint32_t x255 = 1692805U;
	static int16_t x256 = INT16_MAX;
	static uint32_t t62 = 178U;

	t62 = (((x253|x254)|x255)/x256);

	if (t62 != 131076U) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x257 = INT32_MAX;
	int8_t x258 = INT8_MIN;
	volatile int16_t x259 = -1;
	static int8_t x260 = -5;
	volatile int32_t t63 = 26;

	t63 = (((x257|x258)|x259)/x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x261 = -1;
	uint32_t x262 = 959U;
	int32_t x263 = INT32_MIN;
	int64_t x264 = INT64_MAX;
	int64_t t64 = 4938725030576834LL;

	t64 = (((x261|x262)|x263)/x264);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = INT32_MIN;
	uint64_t x266 = 195584634676LLU;
	int16_t x267 = INT16_MAX;
	static int8_t x268 = INT8_MAX;
	uint64_t t65 = 3135826111292643287LLU;

	t65 = (((x265|x266)|x267)/x268);

	if (t65 != 145249953320674892LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x269 = 22U;
	int16_t x270 = INT16_MAX;
	int16_t x271 = INT16_MIN;

	t66 = (((x269|x270)|x271)/x272);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x273 = -343756626LL;
	int16_t x274 = INT16_MIN;
	int8_t x275 = INT8_MIN;
	uint32_t x276 = 14173899U;

	t67 = (((x273|x274)|x275)/x276);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x277 = 1U;
	int64_t x278 = INT64_MAX;
	uint64_t x280 = 60LLU;
	volatile uint64_t t68 = 36362888709811LLU;

	t68 = (((x277|x278)|x279)/x280);

	if (t68 != 307445734561825860LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x281 = -1;
	uint32_t x282 = UINT32_MAX;

	t69 = (((x281|x282)|x283)/x284);

	if (t69 != -329406144019993161LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x285 = INT64_MIN;
	int32_t x286 = INT32_MIN;
	volatile int8_t x287 = INT8_MIN;
	volatile uint32_t x288 = UINT32_MAX;
	int64_t t70 = 1149912392776LL;

	t70 = (((x285|x286)|x287)/x288);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x289 = INT16_MAX;
	uint64_t x290 = 203957413LLU;
	volatile int8_t x291 = INT8_MAX;
	uint64_t t71 = 28LLU;

	t71 = (((x289|x290)|x291)/x292);

	if (t71 != 16221LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x293 = UINT16_MAX;
	int32_t x294 = INT32_MIN;
	int64_t x295 = INT64_MIN;
	uint16_t x296 = 1U;
	int64_t t72 = 1939263LL;

	t72 = (((x293|x294)|x295)/x296);

	if (t72 != -2147418113LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x297 = 9353U;
	volatile int8_t x299 = INT8_MIN;
	int8_t x300 = -1;
	int32_t t73 = 7;

	t73 = (((x297|x298)|x299)/x300);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x303 = INT16_MIN;
	volatile uint8_t x304 = UINT8_MAX;

	t74 = (((x301|x302)|x303)/x304);

	if (t74 != -84) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x305 = INT64_MIN;
	uint16_t x306 = 4U;
	int64_t x307 = 460374066LL;
	static volatile int32_t x308 = -325029123;
	int64_t t75 = 7000265748136635LL;

	t75 = (((x305|x306)|x307)/x308);

	if (t75 != 28377063419LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x309 = INT32_MIN;
	static int64_t x310 = -4043881LL;
	static volatile uint16_t x311 = 13U;
	static volatile int32_t x312 = INT32_MAX;
	int64_t t76 = -10958020861LL;

	t76 = (((x309|x310)|x311)/x312);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x314 = INT16_MIN;
	int64_t x316 = INT64_MIN;
	volatile int64_t t77 = 1LL;

	t77 = (((x313|x314)|x315)/x316);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x321 = INT64_MAX;
	static uint8_t x322 = 3U;
	static uint8_t x323 = UINT8_MAX;
	int16_t x324 = -68;
	int64_t t78 = -13992925175819LL;

	t78 = (((x321|x322)|x323)/x324);

	if (t78 != -135637824071393761LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x325 = INT64_MIN;
	int64_t x328 = -1LL;
	volatile uint64_t t79 = 374LLU;

	t79 = (((x325|x326)|x327)/x328);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x329 = -3623738LL;
	static int16_t x330 = INT16_MIN;
	uint32_t x331 = 430171770U;
	uint64_t x332 = UINT64_MAX;

	t80 = (((x329|x330)|x331)/x332);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x335 = -10;
	int32_t x336 = 351;
	int32_t t81 = 98502747;

	t81 = (((x333|x334)|x335)/x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x337 = INT32_MIN;
	static int32_t x339 = 46;
	int8_t x340 = -8;
	volatile uint64_t t82 = 4LLU;

	t82 = (((x337|x338)|x339)/x340);

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x341 = 1216780;
	static int32_t x342 = 0;
	int64_t x343 = -365426LL;
	int32_t x344 = 26846636;
	volatile int64_t t83 = -455736293LL;

	t83 = (((x341|x342)|x343)/x344);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x345 = -12899;
	int32_t x346 = 45;
	int64_t x347 = INT64_MIN;
	int8_t x348 = -1;
	static volatile int64_t t84 = 249229449LL;

	t84 = (((x345|x346)|x347)/x348);

	if (t84 != 12867LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x350 = INT32_MIN;
	int16_t x351 = INT16_MIN;
	uint64_t x352 = 560457772298539467LLU;
	static uint64_t t85 = 957LLU;

	t85 = (((x349|x350)|x351)/x352);

	if (t85 != 32LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x353 = INT8_MIN;
	int64_t x354 = -6478542433539022LL;
	int8_t x355 = 1;
	uint16_t x356 = UINT16_MAX;
	int64_t t86 = -10429608106LL;

	t86 = (((x353|x354)|x355)/x356);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x357 = -1;
	uint8_t x358 = 7U;
	static int32_t x359 = -1;

	t87 = (((x357|x358)|x359)/x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x361 = INT32_MIN;
	volatile int16_t x362 = -2031;
	uint16_t x363 = UINT16_MAX;
	volatile int8_t x364 = -7;
	int32_t t88 = -315549228;

	t88 = (((x361|x362)|x363)/x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x366 = -3;
	static uint64_t x368 = UINT64_MAX;

	t89 = (((x365|x366)|x367)/x368);

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x369 = INT16_MIN;
	static volatile uint16_t x372 = 11910U;
	static volatile int32_t t90 = 1;

	t90 = (((x369|x370)|x371)/x372);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x373 = 98897617048LLU;
	volatile int64_t x374 = INT64_MIN;
	int8_t x376 = INT8_MIN;
	volatile uint64_t t91 = 19401915684974879LLU;

	t91 = (((x373|x374)|x375)/x376);

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x377 = 0;
	uint64_t x378 = 8277936110951045LLU;
	int64_t x379 = -1LL;
	volatile uint32_t x380 = 128047975U;

	t92 = (((x377|x378)|x379)/x380);

	if (t92 != 144061193265LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x381 = INT8_MAX;
	volatile uint16_t x382 = 0U;
	uint16_t x383 = 22U;
	volatile int64_t t93 = 818040967LL;

	t93 = (((x381|x382)|x383)/x384);

	if (t93 != -127LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x385 = 1012846494LLU;
	int64_t x386 = -1LL;
	uint8_t x387 = 103U;
	static int32_t x388 = INT32_MIN;
	uint64_t t94 = 238332LLU;

	t94 = (((x385|x386)|x387)/x388);

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x390 = UINT16_MAX;
	int16_t x392 = -7;

	t95 = (((x389|x390)|x391)/x392);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x393 = 18U;
	static int64_t x394 = INT64_MIN;
	uint16_t x396 = UINT16_MAX;
	static volatile int64_t t96 = 796290417847227LL;

	t96 = (((x393|x394)|x395)/x396);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x397 = INT8_MIN;
	int32_t x399 = INT32_MIN;
	int32_t x400 = -1;
	volatile int32_t t97 = 2566;

	t97 = (((x397|x398)|x399)/x400);

	if (t97 != 128) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x402 = -1;

	t98 = (((x401|x402)|x403)/x404);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x407 = INT8_MIN;
	int32_t x408 = INT32_MIN;
	int64_t t99 = -2231LL;

	t99 = (((x405|x406)|x407)/x408);

	if (t99 != 0LL) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

