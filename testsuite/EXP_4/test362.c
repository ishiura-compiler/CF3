#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x15 = 8;
int8_t x16 = -1;
volatile int8_t x18 = -1;
volatile int16_t x20 = -15;
int32_t t3 = INT32_MIN;
int64_t x28 = 1416407402LL;
int64_t t4 = 2113528LL;
int64_t x40 = 472727285470LL;
uint8_t x42 = 79U;
uint32_t x43 = 31986U;
volatile uint16_t x44 = 16090U;
uint64_t t8 = 2959586539888424LLU;
int16_t x50 = -1;
int32_t x52 = INT32_MAX;
volatile uint32_t t10 = 427U;
int64_t x61 = -8030075270983710LL;
volatile uint32_t x75 = 2496663U;
int8_t x76 = -1;
uint32_t t14 = 233U;
volatile int16_t x80 = 18;
static int64_t x86 = 1767389474654LL;
uint64_t x93 = UINT64_MAX;
int32_t x94 = -1;
volatile uint32_t x95 = 7198U;
volatile int16_t x105 = 1;
volatile int32_t x109 = 21646;
volatile int32_t x111 = INT32_MIN;
uint64_t x117 = UINT64_MAX;
volatile int8_t x118 = INT8_MAX;
int8_t x123 = INT8_MIN;
uint64_t x125 = UINT64_MAX;
volatile uint64_t t24 = 17643297723720295LLU;
uint32_t x137 = 599857386U;
static int16_t x138 = INT16_MIN;
uint8_t x140 = 13U;
volatile uint8_t x150 = 6U;
volatile int16_t x157 = INT16_MIN;
int16_t x168 = -1;
volatile int32_t t29 = -1155506;
static int16_t x169 = -1;
int8_t x170 = -26;
volatile uint64_t t30 = 27954689LLU;
static int8_t x179 = -22;
volatile int64_t t31 = -1194277363LL;
static int32_t x183 = 2522;
uint8_t x184 = 1U;
int32_t t32 = -1824430;
volatile int64_t t33 = 23236LL;
int8_t x190 = 0;
int64_t x196 = -1LL;
volatile uint64_t t36 = 711009594158137106LLU;
uint16_t x208 = 56U;
int16_t x217 = INT16_MIN;
int16_t x219 = -1;
volatile int8_t x224 = INT8_MIN;
uint32_t x228 = UINT32_MAX;
volatile int32_t x247 = -3;
int8_t x257 = -1;
int16_t x259 = INT16_MIN;
int16_t x267 = -855;
volatile int32_t t46 = -46;
int16_t x269 = INT16_MIN;
int32_t x274 = -6914754;
uint16_t x288 = 0U;
static uint64_t t50 = 1LLU;
int8_t x290 = INT8_MIN;
uint16_t x291 = 0U;
int16_t x292 = INT16_MAX;
static volatile int32_t t51 = 757629110;
int32_t x295 = -1;
int64_t x297 = INT64_MIN;
uint64_t x298 = 14441954924362LLU;
volatile int16_t x299 = INT16_MAX;
uint16_t x305 = 0U;
uint16_t x316 = 3822U;
volatile uint16_t x317 = 31668U;
static uint32_t x336 = 11521004U;
uint16_t x337 = 397U;
int32_t x342 = INT32_MIN;
int32_t x343 = -1;
volatile uint16_t x344 = 43U;
uint8_t x349 = 4U;
uint64_t x352 = UINT64_MAX;
uint64_t t66 = 23LLU;
int8_t x387 = INT8_MIN;
uint32_t x409 = 124915U;
static uint8_t x416 = 7U;
static int64_t t73 = 385284LL;
uint16_t x419 = UINT16_MAX;
int8_t x420 = 37;
uint64_t x423 = 75369LLU;
static int32_t x424 = -16;
uint64_t x432 = UINT64_MAX;
uint64_t t77 = 4709000692LLU;
int64_t x434 = INT64_MAX;
int8_t x435 = INT8_MIN;
static int64_t x438 = 1495746323043426LL;
static int32_t x442 = -7438196;
volatile int16_t x444 = -80;
uint16_t x449 = UINT16_MAX;
int16_t x450 = INT16_MIN;
uint32_t x451 = 88808U;
volatile uint32_t t81 = 1054320457U;
volatile int32_t x458 = INT32_MIN;
static volatile uint64_t t82 = 8510283420375649787LLU;
static int8_t x464 = -15;
volatile int16_t x465 = INT16_MIN;
int64_t x468 = INT64_MIN;
int16_t x479 = INT16_MIN;
int64_t x480 = -1LL;
static volatile uint8_t x483 = UINT8_MAX;
int64_t x485 = 619497079LL;
static uint64_t x487 = UINT64_MAX;
volatile int64_t t90 = 715570LL;
static uint16_t x505 = 1U;
volatile int64_t x508 = -433519761LL;
int64_t x515 = INT64_MAX;
uint32_t x532 = 57256U;
volatile int32_t t97 = 1496799;
volatile uint32_t t98 = 1U;
uint64_t x550 = 20616624LLU;


void f0(void) {
	static uint64_t x1 = UINT64_MAX;
	uint64_t x2 = 76743703396LLU;
	uint8_t x3 = 5U;
	static uint8_t x4 = 99U;
	volatile uint64_t t0 = 25463LLU;

	t0 = (x1&(x2-(x3*x4)));

	if (t0 != 76743702901LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 1;
	int16_t x6 = INT16_MIN;
	uint16_t x7 = 0U;
	int64_t x8 = -97506456741882949LL;
	int64_t t1 = 1LL;

	t1 = (x5&(x6-(x7*x8)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MIN;
	static uint16_t x14 = 59U;
	volatile int32_t t2 = 1;

	t2 = (x13&(x14-(x15*x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MIN;
	int8_t x19 = -1;

	t3 = (x17&(x18-(x19*x20)));

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x25 = -1213975LL;
	static int16_t x26 = INT16_MIN;
	volatile uint16_t x27 = UINT16_MAX;

	t4 = (x25&(x26-(x27*x28)));

	if (t4 != -92824259253912LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x29 = UINT8_MAX;
	int8_t x30 = -2;
	int32_t x31 = 2;
	int16_t x32 = 211;
	int32_t t5 = -45200161;

	t5 = (x29&(x30-(x31*x32)));

	if (t5 != 88) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x33 = INT8_MIN;
	uint32_t x34 = 1259U;
	volatile uint16_t x35 = 662U;
	volatile int8_t x36 = INT8_MIN;
	uint32_t t6 = 7257507U;

	t6 = (x33&(x34-(x35*x36)));

	if (t6 != 85888U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = 636U;
	int16_t x38 = INT16_MAX;
	uint16_t x39 = UINT16_MAX;
	volatile int64_t t7 = -11724233653385LL;

	t7 = (x37&(x38-(x39*x40)));

	if (t7 != 604LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x41 = 128045235143284LLU;

	t8 = (x41&(x42-(x43*x44)));

	if (t8 != 3225453104LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x45 = 6508U;
	volatile int32_t x46 = INT32_MIN;
	int64_t x47 = 1598653720LL;
	int8_t x48 = INT8_MIN;
	static int64_t t9 = -121728938869213357LL;

	t9 = (x45&(x46-(x47*x48)));

	if (t9 != 2048LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x49 = 23268750U;
	int32_t x51 = -1;

	t10 = (x49&(x50-(x51*x52)));

	if (t10 != 23268750U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x57 = UINT32_MAX;
	int8_t x58 = -1;
	int8_t x59 = -1;
	volatile int16_t x60 = INT16_MAX;
	uint32_t t11 = 9381745U;

	t11 = (x57&(x58-(x59*x60)));

	if (t11 != 32766U) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x62 = 1;
	volatile uint8_t x63 = 11U;
	int8_t x64 = -14;
	int64_t t12 = 437174943587534614LL;

	t12 = (x61&(x62-(x63*x64)));

	if (t12 != 130LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x65 = -1;
	uint64_t x66 = 643591LLU;
	volatile int32_t x67 = 47;
	int8_t x68 = INT8_MIN;
	uint64_t t13 = 14602LLU;

	t13 = (x65&(x66-(x67*x68)));

	if (t13 != 649607LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x73 = 122;
	static int32_t x74 = -4;

	t14 = (x73&(x74-(x75*x76)));

	if (t14 != 18U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x77 = -3;
	int8_t x78 = 21;
	uint64_t x79 = 32LLU;
	volatile uint64_t t15 = 425105674421652284LLU;

	t15 = (x77&(x78-(x79*x80)));

	if (t15 != 18446744073709551061LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x85 = 62880U;
	int32_t x87 = INT32_MAX;
	int8_t x88 = -1;
	static int64_t t16 = 7079818536LL;

	t16 = (x85&(x86-(x87*x88)));

	if (t16 != 9472LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x96 = UINT16_MAX;
	uint64_t t17 = 299894118LLU;

	t17 = (x93&(x94-(x95*x96)));

	if (t17 != 3823246365LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x97 = INT16_MIN;
	uint64_t x98 = UINT64_MAX;
	volatile uint8_t x99 = 0U;
	uint32_t x100 = 448U;
	uint64_t t18 = 7560552896983LLU;

	t18 = (x97&(x98-(x99*x100)));

	if (t18 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x106 = UINT16_MAX;
	int64_t x107 = INT64_MIN;
	int32_t x108 = 0;
	int64_t t19 = 15307742LL;

	t19 = (x105&(x106-(x107*x108)));

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x110 = 0LLU;
	static uint32_t x112 = 156749123U;
	volatile uint64_t t20 = 223874LLU;

	t20 = (x109&(x110-(x111*x112)));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x113 = 95937258453LL;
	static volatile int16_t x114 = -1;
	static int8_t x115 = INT8_MIN;
	uint16_t x116 = 1429U;
	static int64_t t21 = 18712074706527LL;

	t21 = (x113&(x114-(x115*x116)));

	if (t21 != 148053LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x119 = INT8_MAX;
	int32_t x120 = 1;
	volatile uint64_t t22 = 1LLU;

	t22 = (x117&(x118-(x119*x120)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x121 = -1;
	uint32_t x122 = 1U;
	int8_t x124 = INT8_MIN;
	uint32_t t23 = 2927U;

	t23 = (x121&(x122-(x123*x124)));

	if (t23 != 4294950913U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x126 = 0;
	int16_t x127 = 14;
	volatile uint64_t x128 = UINT64_MAX;

	t24 = (x125&(x126-(x127*x128)));

	if (t24 != 14LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x139 = UINT64_MAX;
	volatile uint64_t t25 = 1418LLU;

	t25 = (x137&(x138-(x139*x140)));

	if (t25 != 599851016LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x149 = INT16_MIN;
	uint8_t x151 = 7U;
	int16_t x152 = INT16_MIN;
	static int32_t t26 = 15057;

	t26 = (x149&(x150-(x151*x152)));

	if (t26 != 229376) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x153 = -1;
	static int64_t x154 = 1514848243227376LL;
	uint32_t x155 = 1515246997U;
	volatile uint16_t x156 = 167U;
	volatile int64_t t27 = 4LL;

	t27 = (x153&(x154-(x155*x156)));

	if (t27 != 1514844305082045LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x158 = 493167922615438817LLU;
	int64_t x159 = INT64_MAX;
	int16_t x160 = -1;
	volatile uint64_t t28 = 1780125LLU;

	t28 = (x157&(x158-(x159*x160)));

	if (t28 != 9716539959470194688LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x165 = -1330;
	static int8_t x166 = INT8_MIN;
	int16_t x167 = INT16_MIN;

	t29 = (x165&(x166-(x167*x168)));

	if (t29 != -34176) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x171 = -1;
	uint64_t x172 = UINT64_MAX;

	t30 = (x169&(x170-(x171*x172)));

	if (t30 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x177 = -1;
	static int64_t x178 = -72697732670LL;
	uint32_t x180 = 22805433U;

	t31 = (x177&(x178-(x179*x180)));

	if (t31 != -76490980440LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x181 = 25;
	volatile int32_t x182 = -5;

	t32 = (x181&(x182-(x183*x184)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x185 = 257U;
	static uint16_t x186 = 124U;
	static uint8_t x187 = UINT8_MAX;
	static int64_t x188 = 184LL;

	t33 = (x185&(x186-(x187*x188)));

	if (t33 != 256LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x189 = 13LLU;
	int64_t x191 = 15978006474LL;
	volatile int64_t x192 = -1LL;
	static uint64_t t34 = 2390050LLU;

	t34 = (x189&(x190-(x191*x192)));

	if (t34 != 8LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x193 = 6;
	int16_t x194 = INT16_MIN;
	int32_t x195 = -437039174;
	static volatile int64_t t35 = 1322502635140083100LL;

	t35 = (x193&(x194-(x195*x196)));

	if (t35 != 2LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x197 = INT64_MIN;
	static int64_t x198 = -1LL;
	uint64_t x199 = UINT64_MAX;
	int8_t x200 = INT8_MAX;

	t36 = (x197&(x198-(x199*x200)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x205 = 1;
	volatile int32_t x206 = -1;
	int64_t x207 = -1LL;
	volatile int64_t t37 = -13402176237LL;

	t37 = (x205&(x206-(x207*x208)));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x209 = INT8_MAX;
	uint64_t x210 = UINT64_MAX;
	int16_t x211 = -123;
	uint64_t x212 = 21LLU;
	uint64_t t38 = 58354493930578LLU;

	t38 = (x209&(x210-(x211*x212)));

	if (t38 != 22LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x218 = INT32_MIN;
	uint64_t x220 = UINT64_MAX;
	static uint64_t t39 = 28022719LLU;

	t39 = (x217&(x218-(x219*x220)));

	if (t39 != 18446744071562035200LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x221 = -8;
	volatile uint32_t x222 = 897032U;
	static volatile int32_t x223 = 1013;
	volatile uint32_t t40 = 6532074U;

	t40 = (x221&(x222-(x223*x224)));

	if (t40 != 1026696U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x225 = INT64_MIN;
	static int8_t x226 = -1;
	volatile int32_t x227 = -1;
	int64_t t41 = 3042046495872827590LL;

	t41 = (x225&(x226-(x227*x228)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x245 = -1;
	int8_t x246 = INT8_MAX;
	uint8_t x248 = UINT8_MAX;
	static int32_t t42 = 109;

	t42 = (x245&(x246-(x247*x248)));

	if (t42 != 892) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x249 = UINT64_MAX;
	uint32_t x250 = 65300662U;
	static volatile int8_t x251 = -1;
	int16_t x252 = 0;
	uint64_t t43 = 103749073433LLU;

	t43 = (x249&(x250-(x251*x252)));

	if (t43 != 65300662LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x253 = INT8_MIN;
	static volatile int8_t x254 = INT8_MIN;
	int16_t x255 = INT16_MIN;
	int8_t x256 = 5;
	int32_t t44 = -350694;

	t44 = (x253&(x254-(x255*x256)));

	if (t44 != 163712) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x258 = -191838;
	volatile int16_t x260 = -250;
	volatile int32_t t45 = 1676479;

	t45 = (x257&(x258-(x259*x260)));

	if (t45 != -8383838) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x265 = INT32_MAX;
	int16_t x266 = INT16_MIN;
	uint8_t x268 = 6U;

	t46 = (x265&(x266-(x267*x268)));

	if (t46 != 2147456010) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x270 = 17083U;
	int8_t x271 = 4;
	static volatile uint64_t x272 = UINT64_MAX;
	static volatile uint64_t t47 = 171LLU;

	t47 = (x269&(x270-(x271*x272)));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x273 = 5U;
	uint32_t x275 = 88U;
	static uint32_t x276 = 1899532U;
	volatile uint32_t t48 = 1762626U;

	t48 = (x273&(x274-(x275*x276)));

	if (t48 != 4U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x277 = 7243620LLU;
	static uint64_t x278 = 1053716814220812729LLU;
	uint32_t x279 = 29034U;
	int32_t x280 = INT32_MAX;
	volatile uint64_t t49 = 224672166151604LLU;

	t49 = (x277&(x278-(x279*x280)));

	if (t49 != 7078688LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x285 = 6523U;
	uint8_t x286 = 115U;
	static volatile uint64_t x287 = 120743LLU;

	t50 = (x285&(x286-(x287*x288)));

	if (t50 != 115LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x289 = 1;

	t51 = (x289&(x290-(x291*x292)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x293 = -4;
	int16_t x294 = -1574;
	int16_t x296 = -41;
	static int32_t t52 = 12;

	t52 = (x293&(x294-(x295*x296)));

	if (t52 != -1616) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x300 = UINT8_MAX;
	uint64_t t53 = 2LLU;

	t53 = (x297&(x298-(x299*x300)));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x301 = UINT8_MAX;
	int16_t x302 = -260;
	int8_t x303 = -2;
	uint64_t x304 = 1015031153LLU;
	uint64_t t54 = 71241081304028453LLU;

	t54 = (x301&(x302-(x303*x304)));

	if (t54 != 222LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x306 = UINT32_MAX;
	static int8_t x307 = 17;
	uint64_t x308 = 703790485853052LLU;
	volatile uint64_t t55 = 124413LLU;

	t55 = (x305&(x306-(x307*x308)));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x313 = INT16_MAX;
	uint32_t x314 = 58441U;
	volatile uint16_t x315 = 54U;
	uint32_t t56 = 1020U;

	t56 = (x313&(x314-(x315*x316)));

	if (t56 != 15893U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x318 = -1;
	uint32_t x319 = 129989U;
	int16_t x320 = 38;
	uint32_t t57 = 2662U;

	t57 = (x317&(x318-(x319*x320)));

	if (t57 != 8320U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x321 = -1487;
	static int32_t x322 = INT32_MIN;
	int32_t x323 = -1;
	int8_t x324 = 15;
	volatile int32_t t58 = 518805660;

	t58 = (x321&(x322-(x323*x324)));

	if (t58 != -2147483647) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x329 = 1050728100LLU;
	uint64_t x330 = UINT64_MAX;
	static uint64_t x331 = 513137LLU;
	volatile int32_t x332 = -1;
	volatile uint64_t t59 = 7635904919149684607LLU;

	t59 = (x329&(x330-(x331*x332)));

	if (t59 != 54304LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x333 = 0U;
	int64_t x334 = -1LL;
	int32_t x335 = INT32_MAX;
	static volatile int64_t t60 = -12958782722LL;

	t60 = (x333&(x334-(x335*x336)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x338 = -1;
	int8_t x339 = INT8_MIN;
	static uint32_t x340 = UINT32_MAX;
	uint32_t t61 = 2038U;

	t61 = (x337&(x338-(x339*x340)));

	if (t61 != 269U) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x341 = 0;
	volatile int32_t t62 = 45819;

	t62 = (x341&(x342-(x343*x344)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x350 = INT8_MIN;
	int16_t x351 = INT16_MIN;
	volatile uint64_t t63 = 8579781817808830LLU;

	t63 = (x349&(x350-(x351*x352)));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x353 = -1;
	uint8_t x354 = UINT8_MAX;
	uint16_t x355 = 1U;
	int8_t x356 = INT8_MIN;
	int32_t t64 = -53389423;

	t64 = (x353&(x354-(x355*x356)));

	if (t64 != 383) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x357 = -1LL;
	volatile int8_t x358 = INT8_MIN;
	static uint64_t x359 = 1338577513358LLU;
	int16_t x360 = 2;
	static volatile uint64_t t65 = 130822380002789LLU;

	t65 = (x357&(x358-(x359*x360)));

	if (t65 != 18446741396554524772LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x361 = 33970U;
	static uint32_t x362 = 1771891U;
	uint64_t x363 = 3018629618706LLU;
	int32_t x364 = 97;

	t66 = (x361&(x362-(x363*x364)));

	if (t66 != 33952LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x365 = INT16_MIN;
	uint8_t x366 = 66U;
	int8_t x367 = -6;
	int32_t x368 = -389832;
	int32_t t67 = 3136;

	t67 = (x365&(x366-(x367*x368)));

	if (t67 != -2359296) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x385 = INT8_MIN;
	volatile int32_t x386 = -1;
	volatile int64_t x388 = -1LL;
	int64_t t68 = 3LL;

	t68 = (x385&(x386-(x387*x388)));

	if (t68 != -256LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x393 = 31071641U;
	uint8_t x394 = 16U;
	uint16_t x395 = 0U;
	int64_t x396 = INT64_MAX;
	int64_t t69 = -3707928890205580LL;

	t69 = (x393&(x394-(x395*x396)));

	if (t69 != 16LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x397 = INT8_MIN;
	uint16_t x398 = 0U;
	volatile int16_t x399 = -1;
	int64_t x400 = 2653660178LL;
	volatile int64_t t70 = 31216739956692545LL;

	t70 = (x397&(x398-(x399*x400)));

	if (t70 != 2653660160LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x401 = 6;
	int8_t x402 = INT8_MIN;
	int16_t x403 = INT16_MAX;
	uint32_t x404 = 0U;
	volatile uint32_t t71 = 909201U;

	t71 = (x401&(x402-(x403*x404)));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x410 = 1951107U;
	int32_t x411 = 45265;
	int32_t x412 = -1;
	uint32_t t72 = 257735U;

	t72 = (x409&(x410-(x411*x412)));

	if (t72 != 26192U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x413 = INT16_MIN;
	int16_t x414 = -137;
	int64_t x415 = 86936034334981LL;

	t73 = (x413&(x414-(x415*x416)));

	if (t73 != -608552240349184LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x417 = -2846;
	uint16_t x418 = UINT16_MAX;
	int32_t t74 = -1010896030;

	t74 = (x417&(x418-(x419*x420)));

	if (t74 != -2359264) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x421 = 2797762U;
	uint8_t x422 = 6U;
	static volatile uint64_t t75 = 11558180552LLU;

	t75 = (x421&(x422-(x423*x424)));

	if (t75 != 139394LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x425 = 177LLU;
	static int16_t x426 = 1;
	uint8_t x427 = 103U;
	int64_t x428 = -1LL;
	volatile uint64_t t76 = 422124413393248087LLU;

	t76 = (x425&(x426-(x427*x428)));

	if (t76 != 32LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x429 = INT16_MIN;
	int64_t x430 = INT64_MIN;
	volatile uint64_t x431 = 6737323031836361865LLU;

	t77 = (x429&(x430-(x431*x432)));

	if (t77 != 15960695068691136512LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x433 = -1244;
	volatile int64_t x436 = -1LL;
	static volatile int64_t t78 = -93LL;

	t78 = (x433&(x434-(x435*x436)));

	if (t78 != 9223372036854774564LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x437 = -37;
	static int16_t x439 = INT16_MIN;
	int8_t x440 = INT8_MIN;
	volatile int64_t t79 = 21431307846725469LL;

	t79 = (x437&(x438-(x439*x440)));

	if (t79 != 1495746318849090LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x441 = INT64_MIN;
	int32_t x443 = -1;
	int64_t t80 = INT64_MIN;

	t80 = (x441&(x442-(x443*x444)));

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x452 = UINT32_MAX;

	t81 = (x449&(x450-(x451*x452)));

	if (t81 != 56040U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x457 = INT16_MIN;
	volatile int32_t x459 = INT32_MIN;
	uint64_t x460 = UINT64_MAX;

	t82 = (x457&(x458-(x459*x460)));

	if (t82 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x461 = INT16_MIN;
	int16_t x462 = -1;
	int8_t x463 = INT8_MIN;
	static int32_t t83 = -671;

	t83 = (x461&(x462-(x463*x464)));

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x466 = 1U;
	uint64_t x467 = 7495LLU;
	static uint64_t t84 = 63LLU;

	t84 = (x465&(x466-(x467*x468)));

	if (t84 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x473 = 914;
	int32_t x474 = -395483246;
	int32_t x475 = -1;
	int16_t x476 = 11447;
	int32_t t85 = 83950;

	t85 = (x473&(x474-(x475*x476)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x477 = INT8_MAX;
	int32_t x478 = INT32_MIN;
	volatile int64_t t86 = 30251258027459LL;

	t86 = (x477&(x478-(x479*x480)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x481 = INT8_MAX;
	volatile int32_t x482 = -46;
	static int8_t x484 = INT8_MIN;
	int32_t t87 = -763897877;

	t87 = (x481&(x482-(x483*x484)));

	if (t87 != 82) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x486 = INT8_MAX;
	uint64_t x488 = UINT64_MAX;
	static uint64_t t88 = 24791556LLU;

	t88 = (x485&(x486-(x487*x488)));

	if (t88 != 118LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x489 = 1;
	static volatile uint64_t x490 = UINT64_MAX;
	uint16_t x491 = 1U;
	int32_t x492 = INT32_MAX;
	volatile uint64_t t89 = 662137LLU;

	t89 = (x489&(x490-(x491*x492)));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x501 = -1;
	volatile int16_t x502 = -205;
	volatile int64_t x503 = -1LL;
	int16_t x504 = -1;

	t90 = (x501&(x502-(x503*x504)));

	if (t90 != -206LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x506 = INT16_MIN;
	int8_t x507 = INT8_MAX;
	volatile int64_t t91 = 15042882436LL;

	t91 = (x505&(x506-(x507*x508)));

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x513 = UINT16_MAX;
	static int64_t x514 = INT64_MIN;
	int32_t x516 = -1;
	volatile int64_t t92 = -6132LL;

	t92 = (x513&(x514-(x515*x516)));

	if (t92 != 65535LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x521 = INT32_MAX;
	int8_t x522 = 4;
	int8_t x523 = INT8_MAX;
	static uint32_t x524 = 71545U;
	volatile uint32_t t93 = 134437U;

	t93 = (x521&(x522-(x523*x524)));

	if (t93 != 2138397437U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x529 = -1;
	int32_t x530 = INT32_MIN;
	uint32_t x531 = 1188061273U;
	static volatile uint32_t t94 = 520668U;

	t94 = (x529&(x530-(x531*x532)));

	if (t94 != 2203270808U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x533 = 7646778719544LLU;
	uint32_t x534 = 6257U;
	int16_t x535 = -654;
	static volatile uint32_t x536 = UINT32_MAX;
	uint64_t t95 = 3205982152580LLU;

	t95 = (x533&(x534-(x535*x536)));

	if (t95 != 5408LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x537 = UINT32_MAX;
	uint8_t x538 = 2U;
	uint8_t x539 = 26U;
	uint16_t x540 = UINT16_MAX;
	volatile uint32_t t96 = 896771725U;

	t96 = (x537&(x538-(x539*x540)));

	if (t96 != 4293263388U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x541 = INT16_MAX;
	int32_t x542 = INT32_MIN;
	static int8_t x543 = 3;
	volatile int8_t x544 = -4;

	t97 = (x541&(x542-(x543*x544)));

	if (t97 != 12) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x545 = 7441U;
	static int8_t x546 = -2;
	uint32_t x547 = 87542U;
	static int8_t x548 = -55;

	t98 = (x545&(x546-(x547*x548)));

	if (t98 != 5392U) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x549 = -1;
	uint8_t x551 = 2U;
	int8_t x552 = 1;
	static volatile uint64_t t99 = 248031200LLU;

	t99 = (x549&(x550-(x551*x552)));

	if (t99 != 20616622LLU) { NG(); } else { ; }
	
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

