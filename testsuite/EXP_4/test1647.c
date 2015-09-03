#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t0 = 5;
static uint64_t x9 = 1680227101726LLU;
static int64_t x15 = INT64_MIN;
int32_t t3 = 476;
int32_t x19 = INT32_MIN;
static int8_t x20 = INT8_MAX;
int8_t x22 = -1;
static volatile uint64_t x24 = 2605105463380LLU;
volatile int16_t x26 = INT16_MIN;
int32_t x27 = INT32_MIN;
uint8_t x35 = 34U;
int16_t x36 = -1;
static int16_t x48 = INT16_MIN;
volatile int8_t x58 = 1;
int64_t x64 = 157916810011001LL;
int32_t t16 = 376803;
int16_t x69 = -1;
uint16_t x71 = 8945U;
static int32_t x76 = INT32_MIN;
volatile uint16_t x83 = 11U;
volatile uint32_t x85 = 268087822U;
int32_t x90 = INT32_MIN;
int64_t x99 = -1LL;
uint16_t x101 = 0U;
uint32_t x105 = 34U;
volatile int32_t t26 = -19251;
int64_t x111 = 12894667431895LL;
int16_t x117 = INT16_MIN;
static int64_t x124 = 0LL;
int8_t x133 = -2;
int32_t x148 = INT32_MIN;
volatile uint8_t x151 = 6U;
static volatile int16_t x152 = 1326;
int32_t t38 = -138;
static uint64_t x160 = 2265469216876799170LLU;
int8_t x161 = INT8_MAX;
volatile int32_t x169 = INT32_MAX;
volatile int32_t t43 = 15207;
uint64_t x182 = 1386LLU;
int32_t t47 = -10431;
int64_t x196 = INT64_MIN;
volatile int32_t t50 = -60;
static volatile uint32_t x207 = 36U;
uint8_t x212 = 13U;
int32_t x216 = -1;
volatile int32_t t53 = 6;
int16_t x217 = INT16_MIN;
uint16_t x219 = 5918U;
uint32_t x229 = 9U;
int64_t x231 = -1LL;
static volatile int32_t t58 = -489;
static volatile uint32_t x237 = 52080996U;
int32_t x240 = INT32_MAX;
int16_t x243 = 68;
volatile uint64_t x244 = 3774895044310517LLU;
int32_t t60 = -2;
int32_t t61 = -6264;
static int8_t x255 = INT8_MIN;
static int64_t x257 = INT64_MAX;
volatile int32_t t65 = -1301;
static int32_t x270 = -187;
int8_t x274 = INT8_MIN;
uint64_t x275 = UINT64_MAX;
int16_t x281 = -1;
volatile int16_t x301 = INT16_MIN;
int32_t x303 = INT32_MAX;
uint64_t x304 = 139516159854LLU;
int8_t x305 = INT8_MIN;
static uint32_t x306 = 19304904U;
volatile int32_t t79 = 1;
int64_t x323 = 159082195878LL;
uint32_t x324 = 0U;
volatile int64_t x330 = -1LL;
int32_t t83 = -8226290;
uint32_t x337 = UINT32_MAX;
int8_t x346 = -1;
int16_t x348 = INT16_MIN;
int32_t t86 = 1;
volatile int32_t t87 = 79;
volatile uint8_t x353 = UINT8_MAX;
static uint32_t x360 = 2526U;
volatile int32_t t89 = 999;
int32_t x363 = 90082;
static int64_t x364 = INT64_MIN;
int8_t x371 = INT8_MIN;
static volatile int32_t t92 = -1;
static uint64_t x379 = UINT64_MAX;
volatile int64_t x383 = -1LL;
int64_t x386 = INT64_MAX;
uint64_t x391 = 888574497LLU;
volatile uint8_t x393 = 91U;
int16_t x395 = INT16_MIN;


void f0(void) {
	int16_t x1 = 8;
	static int8_t x2 = INT8_MIN;
	uint64_t x3 = UINT64_MAX;
	static int32_t x4 = -1;

	t0 = (x1<(x2<=(x3<=x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 2486U;
	uint32_t x6 = 1431722U;
	static volatile int8_t x7 = 14;
	int8_t x8 = INT8_MIN;
	int32_t t1 = -185701728;

	t1 = (x5<(x6<=(x7<=x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = 160U;
	static uint16_t x11 = UINT16_MAX;
	volatile uint64_t x12 = 10989LLU;
	int32_t t2 = 0;

	t2 = (x9<(x10<=(x11<=x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 128;
	uint16_t x14 = UINT16_MAX;
	int8_t x16 = INT8_MIN;

	t3 = (x13<(x14<=(x15<=x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int32_t x18 = INT32_MIN;
	volatile int32_t t4 = 133059980;

	t4 = (x17<(x18<=(x19<=x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = UINT32_MAX;
	uint8_t x23 = 60U;
	volatile int32_t t5 = 27181;

	t5 = (x21<(x22<=(x23<=x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -1LL;
	int32_t x28 = -1;
	static volatile int32_t t6 = -126;

	t6 = (x25<(x26<=(x27<=x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	volatile uint32_t x30 = 229U;
	volatile int64_t x31 = -107902899245457LL;
	volatile int32_t x32 = -666921;
	volatile int32_t t7 = -350062028;

	t7 = (x29<(x30<=(x31<=x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = INT8_MIN;
	int32_t x34 = INT32_MIN;
	static volatile int32_t t8 = 287;

	t8 = (x33<(x34<=(x35<=x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = 11U;
	int8_t x38 = INT8_MAX;
	volatile uint32_t x39 = UINT32_MAX;
	uint16_t x40 = 2102U;
	int32_t t9 = -107596;

	t9 = (x37<(x38<=(x39<=x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int32_t x42 = -149;
	int64_t x43 = INT64_MIN;
	uint64_t x44 = 16711292555LLU;
	int32_t t10 = 22;

	t10 = (x41<(x42<=(x43<=x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	int64_t x46 = INT64_MIN;
	volatile uint8_t x47 = UINT8_MAX;
	static int32_t t11 = -1;

	t11 = (x45<(x46<=(x47<=x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = -1LL;
	int16_t x50 = INT16_MIN;
	int16_t x51 = INT16_MIN;
	int8_t x52 = -9;
	volatile int32_t t12 = -16981;

	t12 = (x49<(x50<=(x51<=x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	int8_t x54 = -2;
	static uint32_t x55 = 729U;
	int32_t x56 = INT32_MAX;
	volatile int32_t t13 = 1801;

	t13 = (x53<(x54<=(x55<=x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 2352LLU;
	int32_t x59 = 38;
	static int8_t x60 = -1;
	volatile int32_t t14 = -3875840;

	t14 = (x57<(x58<=(x59<=x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	int16_t x62 = INT16_MIN;
	int64_t x63 = INT64_MIN;
	static volatile int32_t t15 = 3143217;

	t15 = (x61<(x62<=(x63<=x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x65 = 53U;
	int64_t x66 = -1LL;
	uint16_t x67 = 40U;
	uint16_t x68 = 12U;

	t16 = (x65<(x66<=(x67<=x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = INT32_MIN;
	int32_t x72 = INT32_MIN;
	int32_t t17 = 246644006;

	t17 = (x69<(x70<=(x71<=x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 178U;
	int8_t x74 = -1;
	uint64_t x75 = UINT64_MAX;
	static int32_t t18 = -948388;

	t18 = (x73<(x74<=(x75<=x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = 2266;
	static volatile int8_t x78 = INT8_MIN;
	volatile uint16_t x79 = UINT16_MAX;
	uint32_t x80 = 6U;
	int32_t t19 = 1999;

	t19 = (x77<(x78<=(x79<=x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 5U;
	static volatile int8_t x82 = -1;
	uint8_t x84 = UINT8_MAX;
	int32_t t20 = 83;

	t20 = (x81<(x82<=(x83<=x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x86 = 48U;
	int8_t x87 = -1;
	static uint64_t x88 = 93783240803222LLU;
	volatile int32_t t21 = 72464710;

	t21 = (x85<(x86<=(x87<=x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	uint32_t x91 = 56654198U;
	int32_t x92 = INT32_MAX;
	int32_t t22 = 82067;

	t22 = (x89<(x90<=(x91<=x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	uint8_t x94 = 35U;
	int8_t x95 = INT8_MIN;
	static int64_t x96 = 368LL;
	static int32_t t23 = -2143;

	t23 = (x93<(x94<=(x95<=x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -6;
	int64_t x98 = INT64_MIN;
	volatile int64_t x100 = 16401400LL;
	volatile int32_t t24 = 12;

	t24 = (x97<(x98<=(x99<=x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x102 = UINT16_MAX;
	uint64_t x103 = 30400LLU;
	int64_t x104 = INT64_MAX;
	volatile int32_t t25 = 5849914;

	t25 = (x101<(x102<=(x103<=x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x106 = INT8_MAX;
	int16_t x107 = INT16_MAX;
	int8_t x108 = INT8_MIN;

	t26 = (x105<(x106<=(x107<=x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = -1;
	int16_t x110 = 1;
	static int16_t x112 = -1;
	volatile int32_t t27 = -80177591;

	t27 = (x109<(x110<=(x111<=x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = UINT16_MAX;
	static volatile uint32_t x114 = UINT32_MAX;
	static int32_t x115 = INT32_MIN;
	static int16_t x116 = 15;
	int32_t t28 = 1;

	t28 = (x113<(x114<=(x115<=x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x118 = INT16_MIN;
	int16_t x119 = -1;
	static int64_t x120 = 4597777021407675299LL;
	static volatile int32_t t29 = 152;

	t29 = (x117<(x118<=(x119<=x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	static int64_t x122 = INT64_MIN;
	int8_t x123 = INT8_MAX;
	int32_t t30 = -69136;

	t30 = (x121<(x122<=(x123<=x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x125 = 4U;
	int16_t x126 = -1;
	static int64_t x127 = INT64_MAX;
	int16_t x128 = INT16_MIN;
	static volatile int32_t t31 = 1450893;

	t31 = (x125<(x126<=(x127<=x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = INT8_MAX;
	static volatile uint16_t x130 = 576U;
	int32_t x131 = -1268;
	int8_t x132 = -5;
	int32_t t32 = 198092;

	t32 = (x129<(x130<=(x131<=x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x134 = 1U;
	int64_t x135 = INT64_MIN;
	int32_t x136 = -1220;
	static volatile int32_t t33 = 3213215;

	t33 = (x133<(x134<=(x135<=x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MAX;
	volatile uint32_t x138 = 225812414U;
	int32_t x139 = 421;
	volatile uint8_t x140 = 1U;
	volatile int32_t t34 = -119932837;

	t34 = (x137<(x138<=(x139<=x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 976LLU;
	uint16_t x142 = 8610U;
	uint32_t x143 = UINT32_MAX;
	int8_t x144 = 19;
	int32_t t35 = -130806;

	t35 = (x141<(x142<=(x143<=x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 108U;
	static volatile int16_t x146 = INT16_MIN;
	uint64_t x147 = 1215948384020LLU;
	static volatile int32_t t36 = -107743;

	t36 = (x145<(x146<=(x147<=x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -1011635512;
	int16_t x150 = INT16_MIN;
	volatile int32_t t37 = -203;

	t37 = (x149<(x150<=(x151<=x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x153 = INT8_MAX;
	static int16_t x154 = 594;
	static uint16_t x155 = UINT16_MAX;
	int16_t x156 = 5054;

	t38 = (x153<(x154<=(x155<=x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = 6;
	volatile uint64_t x158 = UINT64_MAX;
	int32_t x159 = INT32_MAX;
	volatile int32_t t39 = 188020249;

	t39 = (x157<(x158<=(x159<=x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x162 = 3865;
	static volatile uint16_t x163 = UINT16_MAX;
	static int16_t x164 = INT16_MAX;
	int32_t t40 = 975373;

	t40 = (x161<(x162<=(x163<=x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x165 = 68836LLU;
	static int8_t x166 = INT8_MAX;
	static int64_t x167 = INT64_MIN;
	static int64_t x168 = INT64_MIN;
	int32_t t41 = 75;

	t41 = (x165<(x166<=(x167<=x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x170 = -11054370LL;
	int32_t x171 = 387697;
	int8_t x172 = 1;
	int32_t t42 = 67468452;

	t42 = (x169<(x170<=(x171<=x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x173 = INT8_MIN;
	volatile int64_t x174 = 244LL;
	uint8_t x175 = 7U;
	volatile uint64_t x176 = UINT64_MAX;

	t43 = (x173<(x174<=(x175<=x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint32_t x177 = 3513122U;
	static volatile uint64_t x178 = UINT64_MAX;
	int16_t x179 = -1;
	uint16_t x180 = UINT16_MAX;
	volatile int32_t t44 = -3876142;

	t44 = (x177<(x178<=(x179<=x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = -63;
	static uint32_t x183 = 44204U;
	volatile uint16_t x184 = 403U;
	volatile int32_t t45 = 12;

	t45 = (x181<(x182<=(x183<=x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -1;
	static uint32_t x186 = 1109840U;
	volatile int16_t x187 = 3;
	int8_t x188 = INT8_MIN;
	volatile int32_t t46 = 261663;

	t46 = (x185<(x186<=(x187<=x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MAX;
	uint32_t x190 = 9U;
	uint32_t x191 = 6000U;
	volatile int32_t x192 = 39;

	t47 = (x189<(x190<=(x191<=x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = 9;
	uint64_t x194 = 208534LLU;
	volatile int32_t x195 = INT32_MIN;
	int32_t t48 = -1908341;

	t48 = (x193<(x194<=(x195<=x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = INT32_MAX;
	volatile int16_t x198 = INT16_MAX;
	int32_t x199 = 101;
	int64_t x200 = INT64_MAX;
	static int32_t t49 = 67033737;

	t49 = (x197<(x198<=(x199<=x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 42480423LLU;
	static volatile uint64_t x202 = 16433618605770LLU;
	uint64_t x203 = 441983865643520701LLU;
	volatile int16_t x204 = 2322;

	t50 = (x201<(x202<=(x203<=x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 1015116782404696LLU;
	uint32_t x206 = 1783406530U;
	int16_t x208 = -1;
	static volatile int32_t t51 = 15928758;

	t51 = (x205<(x206<=(x207<=x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = INT8_MIN;
	static int16_t x210 = INT16_MIN;
	int16_t x211 = INT16_MIN;
	volatile int32_t t52 = -1187286;

	t52 = (x209<(x210<=(x211<=x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = UINT64_MAX;
	static uint16_t x214 = 8479U;
	int16_t x215 = INT16_MAX;

	t53 = (x213<(x214<=(x215<=x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x218 = -1;
	int16_t x220 = INT16_MIN;
	int32_t t54 = -706620;

	t54 = (x217<(x218<=(x219<=x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x221 = 36U;
	int16_t x222 = INT16_MIN;
	static int8_t x223 = -16;
	volatile int32_t x224 = INT32_MAX;
	int32_t t55 = -1;

	t55 = (x221<(x222<=(x223<=x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = 1U;
	static uint64_t x226 = 15LLU;
	static uint64_t x227 = 1853584LLU;
	int64_t x228 = INT64_MAX;
	int32_t t56 = 2116;

	t56 = (x225<(x226<=(x227<=x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x230 = 208221215170282205LL;
	int64_t x232 = -1LL;
	static volatile int32_t t57 = 216540501;

	t57 = (x229<(x230<=(x231<=x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	int32_t x234 = INT32_MIN;
	int8_t x235 = -2;
	uint32_t x236 = 30608999U;

	t58 = (x233<(x234<=(x235<=x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x238 = 14526011496LLU;
	int32_t x239 = 6611643;
	volatile int32_t t59 = 1068324;

	t59 = (x237<(x238<=(x239<=x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = -4;
	volatile uint64_t x242 = 246063554LLU;

	t60 = (x241<(x242<=(x243<=x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = 2;
	volatile int8_t x246 = INT8_MIN;
	uint32_t x247 = 0U;
	volatile int8_t x248 = 2;

	t61 = (x245<(x246<=(x247<=x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = 2099;
	int64_t x250 = -1LL;
	static uint8_t x251 = 6U;
	static uint8_t x252 = 1U;
	volatile int32_t t62 = 5330652;

	t62 = (x249<(x250<=(x251<=x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = INT16_MIN;
	int16_t x254 = INT16_MIN;
	int8_t x256 = 11;
	int32_t t63 = -43;

	t63 = (x253<(x254<=(x255<=x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x258 = 31LLU;
	int16_t x259 = -1;
	int32_t x260 = INT32_MIN;
	int32_t t64 = 179039121;

	t64 = (x257<(x258<=(x259<=x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -1;
	volatile uint16_t x262 = UINT16_MAX;
	int64_t x263 = -1672710LL;
	uint8_t x264 = 17U;

	t65 = (x261<(x262<=(x263<=x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x265 = -1;
	int32_t x266 = INT32_MAX;
	static uint16_t x267 = 2U;
	int32_t x268 = INT32_MIN;
	volatile int32_t t66 = -13024;

	t66 = (x265<(x266<=(x267<=x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MAX;
	int64_t x271 = INT64_MAX;
	int64_t x272 = -1LL;
	int32_t t67 = -44;

	t67 = (x269<(x270<=(x271<=x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	int8_t x276 = -1;
	volatile int32_t t68 = 6;

	t68 = (x273<(x274<=(x275<=x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MAX;
	int32_t x278 = INT32_MIN;
	uint16_t x279 = UINT16_MAX;
	int32_t x280 = -1;
	int32_t t69 = -3;

	t69 = (x277<(x278<=(x279<=x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x282 = 11U;
	int8_t x283 = 28;
	static int64_t x284 = INT64_MIN;
	static int32_t t70 = -751129;

	t70 = (x281<(x282<=(x283<=x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = 58264LL;
	static int16_t x286 = INT16_MIN;
	int16_t x287 = INT16_MIN;
	uint16_t x288 = 28U;
	volatile int32_t t71 = -989;

	t71 = (x285<(x286<=(x287<=x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x289 = UINT32_MAX;
	volatile int8_t x290 = INT8_MIN;
	uint16_t x291 = 752U;
	int16_t x292 = 1;
	volatile int32_t t72 = 1;

	t72 = (x289<(x290<=(x291<=x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = UINT16_MAX;
	int32_t x294 = 315973;
	volatile int8_t x295 = 40;
	uint8_t x296 = UINT8_MAX;
	int32_t t73 = 1;

	t73 = (x293<(x294<=(x295<=x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 15549U;
	volatile uint8_t x298 = 8U;
	volatile int32_t x299 = -11743549;
	static volatile int8_t x300 = INT8_MAX;
	volatile int32_t t74 = 974;

	t74 = (x297<(x298<=(x299<=x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x302 = 31;
	volatile int32_t t75 = -6;

	t75 = (x301<(x302<=(x303<=x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x307 = UINT64_MAX;
	uint64_t x308 = 101LLU;
	volatile int32_t t76 = 2944387;

	t76 = (x305<(x306<=(x307<=x308)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x309 = 55800377U;
	static int16_t x310 = INT16_MIN;
	int64_t x311 = INT64_MAX;
	uint16_t x312 = 8U;
	int32_t t77 = 1;

	t77 = (x309<(x310<=(x311<=x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MAX;
	uint8_t x314 = 3U;
	int64_t x315 = INT64_MIN;
	static int64_t x316 = INT64_MIN;
	volatile int32_t t78 = 7;

	t78 = (x313<(x314<=(x315<=x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = UINT32_MAX;
	volatile uint64_t x318 = 2781059LLU;
	static uint16_t x319 = 3919U;
	uint8_t x320 = UINT8_MAX;

	t79 = (x317<(x318<=(x319<=x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = 1783;
	int8_t x322 = INT8_MIN;
	volatile int32_t t80 = 79213;

	t80 = (x321<(x322<=(x323<=x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = -1;
	static int64_t x326 = 607912729160575687LL;
	volatile int16_t x327 = INT16_MAX;
	uint8_t x328 = UINT8_MAX;
	int32_t t81 = 3931;

	t81 = (x325<(x326<=(x327<=x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -9;
	int64_t x331 = INT64_MIN;
	uint16_t x332 = 1732U;
	volatile int32_t t82 = 32558;

	t82 = (x329<(x330<=(x331<=x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x333 = 1833;
	int32_t x334 = INT32_MIN;
	int64_t x335 = INT64_MAX;
	volatile int16_t x336 = 0;

	t83 = (x333<(x334<=(x335<=x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x338 = INT32_MIN;
	static int64_t x339 = -1LL;
	uint16_t x340 = 3760U;
	volatile int32_t t84 = 338;

	t84 = (x337<(x338<=(x339<=x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x341 = UINT16_MAX;
	int32_t x342 = 0;
	int8_t x343 = INT8_MAX;
	static int32_t x344 = INT32_MAX;
	volatile int32_t t85 = 253309023;

	t85 = (x341<(x342<=(x343<=x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	int16_t x347 = INT16_MIN;

	t86 = (x345<(x346<=(x347<=x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -4102253414LL;
	int64_t x350 = INT64_MIN;
	volatile uint32_t x351 = 0U;
	uint16_t x352 = 253U;

	t87 = (x349<(x350<=(x351<=x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x354 = 47;
	uint32_t x355 = 1812061417U;
	uint32_t x356 = 96U;
	volatile int32_t t88 = 1297157;

	t88 = (x353<(x354<=(x355<=x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x357 = 909422249779350LLU;
	int8_t x358 = -1;
	static int64_t x359 = 26207657612587616LL;

	t89 = (x357<(x358<=(x359<=x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 2087245767607233LLU;
	uint32_t x362 = UINT32_MAX;
	int32_t t90 = -331465;

	t90 = (x361<(x362<=(x363<=x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	int64_t x366 = -1LL;
	static int16_t x367 = -1;
	int16_t x368 = INT16_MAX;
	static int32_t t91 = 4;

	t91 = (x365<(x366<=(x367<=x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -1LL;
	int16_t x370 = INT16_MAX;
	volatile int16_t x372 = INT16_MAX;

	t92 = (x369<(x370<=(x371<=x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = -54278410707748013LL;
	uint64_t x374 = UINT64_MAX;
	int8_t x375 = -19;
	int8_t x376 = -1;
	int32_t t93 = -7;

	t93 = (x373<(x374<=(x375<=x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x377 = 820472287273798596LLU;
	static int16_t x378 = INT16_MIN;
	int8_t x380 = 60;
	int32_t t94 = 13;

	t94 = (x377<(x378<=(x379<=x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = UINT32_MAX;
	uint16_t x382 = 5196U;
	int32_t x384 = -1;
	static int32_t t95 = 37;

	t95 = (x381<(x382<=(x383<=x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	static uint8_t x387 = 43U;
	int8_t x388 = -1;
	static volatile int32_t t96 = -3305;

	t96 = (x385<(x386<=(x387<=x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x389 = UINT8_MAX;
	uint32_t x390 = UINT32_MAX;
	uint32_t x392 = 1084836U;
	volatile int32_t t97 = -77;

	t97 = (x389<(x390<=(x391<=x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x394 = INT32_MIN;
	uint32_t x396 = 855415283U;
	volatile int32_t t98 = -135296;

	t98 = (x393<(x394<=(x395<=x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x397 = INT16_MAX;
	int64_t x398 = 14236023638490LL;
	static int64_t x399 = INT64_MIN;
	int8_t x400 = 52;
	volatile int32_t t99 = -223;

	t99 = (x397<(x398<=(x399<=x400)));

	if (t99 != 0) { NG(); } else { ; }
	
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

