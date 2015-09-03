#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t1 = 23584;
volatile int32_t t3 = -1;
int64_t x17 = INT64_MIN;
static uint32_t x19 = UINT32_MAX;
uint32_t x20 = 10U;
int32_t t4 = -4990;
uint8_t x24 = 50U;
int32_t x25 = INT32_MAX;
int16_t x30 = INT16_MIN;
volatile int16_t x34 = -1;
int16_t x36 = 3437;
static volatile uint32_t x59 = 229263U;
int16_t x61 = INT16_MAX;
volatile int64_t x63 = INT64_MIN;
int8_t x65 = INT8_MIN;
int16_t x78 = INT16_MAX;
int32_t x79 = INT32_MAX;
volatile int32_t t19 = -9;
volatile int8_t x81 = 1;
uint16_t x88 = 5526U;
int32_t t25 = 125104766;
uint64_t x105 = 1274264139790LLU;
volatile uint8_t x106 = UINT8_MAX;
volatile int32_t t26 = -3892032;
int32_t t27 = -2759754;
int32_t x114 = INT32_MAX;
uint64_t x118 = UINT64_MAX;
static volatile int16_t x120 = 1929;
static int32_t x121 = INT32_MAX;
int8_t x122 = INT8_MIN;
uint32_t x125 = 179832U;
static int8_t x128 = INT8_MAX;
int32_t t31 = -6;
int8_t x129 = 0;
static volatile int32_t t32 = -5149766;
int8_t x139 = -2;
uint8_t x149 = 12U;
static int16_t x156 = INT16_MAX;
uint32_t x161 = 120656U;
uint16_t x164 = UINT16_MAX;
static uint16_t x166 = UINT16_MAX;
static int16_t x171 = -1;
static int32_t x175 = INT32_MIN;
int32_t x176 = -1;
int8_t x180 = INT8_MAX;
int8_t x183 = -1;
int64_t x186 = INT64_MIN;
static int32_t x188 = INT32_MIN;
int8_t x191 = -1;
int32_t x198 = INT32_MIN;
uint32_t x200 = UINT32_MAX;
static uint16_t x204 = UINT16_MAX;
int8_t x205 = -1;
int8_t x207 = INT8_MIN;
volatile int32_t x211 = INT32_MIN;
int8_t x215 = INT8_MAX;
int32_t x221 = -1;
int32_t x230 = 8625860;
static uint16_t x231 = 112U;
int32_t x233 = INT32_MIN;
volatile int64_t x235 = INT64_MIN;
static int16_t x239 = -1;
int64_t x240 = -32292315653LL;
int32_t t59 = -2819;
int32_t x242 = INT32_MIN;
uint8_t x244 = UINT8_MAX;
uint8_t x247 = 31U;
int32_t x250 = INT32_MIN;
int32_t t63 = -5;
int8_t x259 = -2;
volatile uint64_t x261 = 75LLU;
int64_t x263 = -1563157LL;
volatile int8_t x266 = INT8_MIN;
volatile int32_t x267 = INT32_MIN;
static uint64_t x269 = UINT64_MAX;
static uint64_t x280 = UINT64_MAX;
int16_t x293 = -1;
static int64_t x297 = INT64_MIN;
static int8_t x299 = -56;
int64_t x300 = -1LL;
int32_t t74 = 2;
int32_t x304 = INT32_MIN;
volatile uint32_t x306 = 155U;
volatile int16_t x321 = INT16_MIN;
static int8_t x324 = 17;
static uint32_t x325 = 585U;
int64_t x330 = -251LL;
static int8_t x331 = -8;
volatile int32_t x334 = 29567;
static int32_t x335 = INT32_MAX;
int32_t t83 = -7;
int8_t x338 = INT8_MAX;
int64_t x346 = INT64_MIN;
volatile int32_t t86 = -323186;
int16_t x349 = INT16_MIN;
int64_t x351 = 7925569LL;
int32_t t87 = -4499;
static int64_t x357 = -956195997634174LL;
static int32_t x364 = -1;
int64_t x365 = INT64_MIN;
volatile uint64_t x372 = 0LLU;
volatile int32_t t92 = 0;
int8_t x373 = -1;
uint16_t x379 = 33U;
int64_t x380 = 1064888496317185LL;
int16_t x393 = INT16_MAX;
int8_t x394 = -1;
static int32_t x395 = -112706810;
int8_t x399 = INT8_MAX;
int32_t t99 = -252851031;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	volatile int64_t x2 = 955028215LL;
	static uint64_t x3 = UINT64_MAX;
	volatile uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = 367;

	t0 = (x1<=(x2<=(x3==x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -1;
	int16_t x6 = -1;
	int32_t x7 = 6713;
	static uint64_t x8 = UINT64_MAX;

	t1 = (x5<=(x6<=(x7==x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x9 = 4282U;
	uint16_t x10 = 1U;
	static volatile uint64_t x11 = UINT64_MAX;
	int32_t x12 = INT32_MAX;
	volatile int32_t t2 = -116943;

	t2 = (x9<=(x10<=(x11==x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int64_t x14 = -290130748081480LL;
	int64_t x15 = INT64_MIN;
	int32_t x16 = INT32_MIN;

	t3 = (x13<=(x14<=(x15==x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x18 = 1;

	t4 = (x17<=(x18<=(x19==x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	uint8_t x22 = 1U;
	int8_t x23 = INT8_MIN;
	int32_t t5 = 124933;

	t5 = (x21<=(x22<=(x23==x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = -1;
	volatile int8_t x27 = -1;
	static int32_t x28 = 1;
	static volatile int32_t t6 = 2;

	t6 = (x25<=(x26<=(x27==x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	uint16_t x31 = 2421U;
	int16_t x32 = -1;
	volatile int32_t t7 = -192328282;

	t7 = (x29<=(x30<=(x31==x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 926868076724LL;
	uint32_t x35 = 215U;
	int32_t t8 = 263058;

	t8 = (x33<=(x34<=(x35==x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint64_t x37 = 205749181249LLU;
	volatile int8_t x38 = INT8_MIN;
	int16_t x39 = INT16_MAX;
	uint64_t x40 = 8484054841LLU;
	int32_t t9 = -13;

	t9 = (x37<=(x38<=(x39==x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	uint32_t x42 = 6165647U;
	int64_t x43 = -9714720989589626LL;
	int64_t x44 = INT64_MIN;
	int32_t t10 = 177;

	t10 = (x41<=(x42<=(x43==x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = UINT16_MAX;
	int8_t x46 = INT8_MIN;
	int64_t x47 = -227338LL;
	volatile int64_t x48 = 34181LL;
	int32_t t11 = -6334364;

	t11 = (x45<=(x46<=(x47==x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MAX;
	uint8_t x50 = 0U;
	int64_t x51 = INT64_MAX;
	static uint32_t x52 = 106U;
	int32_t t12 = -118368;

	t12 = (x49<=(x50<=(x51==x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x53 = UINT16_MAX;
	int64_t x54 = INT64_MIN;
	volatile int32_t x55 = INT32_MIN;
	int8_t x56 = INT8_MAX;
	volatile int32_t t13 = 0;

	t13 = (x53<=(x54<=(x55==x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = 246;
	static uint16_t x58 = 9604U;
	static int8_t x60 = INT8_MAX;
	volatile int32_t t14 = -1;

	t14 = (x57<=(x58<=(x59==x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x62 = -1LL;
	static int32_t x64 = 24938;
	static volatile int32_t t15 = 16380;

	t15 = (x61<=(x62<=(x63==x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x66 = -1;
	int8_t x67 = INT8_MIN;
	int64_t x68 = -1LL;
	volatile int32_t t16 = 1;

	t16 = (x65<=(x66<=(x67==x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -1700052174613LL;
	uint64_t x70 = 8945817698250846096LLU;
	volatile int8_t x71 = 1;
	uint8_t x72 = 4U;
	int32_t t17 = 254;

	t17 = (x69<=(x70<=(x71==x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 5U;
	static int32_t x74 = -1;
	int32_t x75 = -1;
	uint64_t x76 = 1038537LLU;
	int32_t t18 = -111045811;

	t18 = (x73<=(x74<=(x75==x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -31;
	volatile uint16_t x80 = 1645U;

	t19 = (x77<=(x78<=(x79==x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x82 = -1;
	static uint32_t x83 = 9491U;
	uint16_t x84 = 11U;
	volatile int32_t t20 = -2278;

	t20 = (x81<=(x82<=(x83==x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -1;
	static uint32_t x86 = UINT32_MAX;
	static volatile uint16_t x87 = UINT16_MAX;
	volatile int32_t t21 = -207;

	t21 = (x85<=(x86<=(x87==x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MAX;
	uint64_t x90 = UINT64_MAX;
	static volatile uint16_t x91 = UINT16_MAX;
	volatile int32_t x92 = INT32_MAX;
	int32_t t22 = 1589;

	t22 = (x89<=(x90<=(x91==x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -5875;
	int64_t x94 = -789519024LL;
	uint16_t x95 = 76U;
	uint32_t x96 = 1517727U;
	int32_t t23 = 20633929;

	t23 = (x93<=(x94<=(x95==x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 178U;
	static int32_t x98 = INT32_MIN;
	uint16_t x99 = 13521U;
	int8_t x100 = INT8_MAX;
	int32_t t24 = 4;

	t24 = (x97<=(x98<=(x99==x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 2U;
	uint32_t x102 = 9789U;
	int8_t x103 = INT8_MIN;
	volatile int32_t x104 = INT32_MIN;

	t25 = (x101<=(x102<=(x103==x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x107 = 0;
	static int8_t x108 = INT8_MIN;

	t26 = (x105<=(x106<=(x107==x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x109 = -1;
	volatile uint64_t x110 = 1LLU;
	volatile int64_t x111 = INT64_MAX;
	volatile int16_t x112 = INT16_MIN;

	t27 = (x109<=(x110<=(x111==x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 1U;
	int16_t x115 = INT16_MAX;
	int8_t x116 = INT8_MAX;
	int32_t t28 = -22541107;

	t28 = (x113<=(x114<=(x115==x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	volatile int32_t x119 = 240;
	volatile int32_t t29 = -181;

	t29 = (x117<=(x118<=(x119==x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x123 = 2U;
	int8_t x124 = -34;
	int32_t t30 = -413;

	t30 = (x121<=(x122<=(x123==x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x126 = 19;
	int16_t x127 = 27;

	t31 = (x125<=(x126<=(x127==x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x130 = 10177;
	uint32_t x131 = 31379U;
	int32_t x132 = INT32_MIN;

	t32 = (x129<=(x130<=(x131==x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = UINT16_MAX;
	static int8_t x134 = INT8_MAX;
	uint64_t x135 = 15478849LLU;
	uint8_t x136 = 33U;
	int32_t t33 = -644485068;

	t33 = (x133<=(x134<=(x135==x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 325U;
	int8_t x138 = -1;
	int16_t x140 = 2;
	int32_t t34 = -128503179;

	t34 = (x137<=(x138<=(x139==x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	volatile int32_t x142 = INT32_MIN;
	uint32_t x143 = 19830132U;
	volatile int32_t x144 = INT32_MAX;
	int32_t t35 = 5270549;

	t35 = (x141<=(x142<=(x143==x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -1LL;
	volatile int64_t x146 = INT64_MIN;
	volatile uint32_t x147 = 5139291U;
	volatile int8_t x148 = 1;
	int32_t t36 = 2092476;

	t36 = (x145<=(x146<=(x147==x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x150 = 1781U;
	int8_t x151 = -8;
	uint64_t x152 = UINT64_MAX;
	volatile int32_t t37 = -12759814;

	t37 = (x149<=(x150<=(x151==x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = -783;
	static uint16_t x154 = 3484U;
	volatile int32_t x155 = INT32_MIN;
	static volatile int32_t t38 = -31167;

	t38 = (x153<=(x154<=(x155==x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -1937481593378LL;
	int32_t x158 = -16820;
	int8_t x159 = INT8_MIN;
	int64_t x160 = -2380332247228LL;
	static int32_t t39 = -1;

	t39 = (x157<=(x158<=(x159==x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x162 = 316280U;
	uint16_t x163 = 68U;
	int32_t t40 = 6766915;

	t40 = (x161<=(x162<=(x163==x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x165 = 224U;
	static int64_t x167 = -1LL;
	int8_t x168 = -9;
	int32_t t41 = -600;

	t41 = (x165<=(x166<=(x167==x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = 1;
	uint8_t x170 = 2U;
	int32_t x172 = 979202046;
	int32_t t42 = -1528986;

	t42 = (x169<=(x170<=(x171==x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x173 = UINT32_MAX;
	volatile int64_t x174 = INT64_MIN;
	volatile int32_t t43 = -114;

	t43 = (x173<=(x174<=(x175==x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x177 = 23U;
	int16_t x178 = -1;
	static int32_t x179 = -21950262;
	int32_t t44 = 201;

	t44 = (x177<=(x178<=(x179==x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -11099;
	int8_t x182 = INT8_MIN;
	static int64_t x184 = -2717LL;
	int32_t t45 = 48603491;

	t45 = (x181<=(x182<=(x183==x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 15U;
	static uint16_t x187 = UINT16_MAX;
	volatile int32_t t46 = -12431;

	t46 = (x185<=(x186<=(x187==x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x189 = 18352U;
	uint16_t x190 = 12123U;
	int32_t x192 = INT32_MIN;
	volatile int32_t t47 = 13;

	t47 = (x189<=(x190<=(x191==x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x193 = INT64_MAX;
	uint32_t x194 = 7913264U;
	int64_t x195 = INT64_MAX;
	int16_t x196 = 2;
	volatile int32_t t48 = 15232065;

	t48 = (x193<=(x194<=(x195==x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MAX;
	volatile int64_t x199 = INT64_MIN;
	static volatile int32_t t49 = -29508;

	t49 = (x197<=(x198<=(x199==x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x201 = UINT8_MAX;
	int64_t x202 = -2LL;
	uint32_t x203 = 2860U;
	static int32_t t50 = 1215537;

	t50 = (x201<=(x202<=(x203==x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x206 = UINT64_MAX;
	int8_t x208 = INT8_MIN;
	volatile int32_t t51 = 19353;

	t51 = (x205<=(x206<=(x207==x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 4U;
	volatile int16_t x210 = INT16_MAX;
	static int32_t x212 = 683299630;
	int32_t t52 = -1;

	t52 = (x209<=(x210<=(x211==x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	volatile uint8_t x214 = 0U;
	static volatile int16_t x216 = INT16_MAX;
	int32_t t53 = 135;

	t53 = (x213<=(x214<=(x215==x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -1;
	static int8_t x218 = -2;
	uint32_t x219 = 17469133U;
	int16_t x220 = INT16_MIN;
	static int32_t t54 = 16036389;

	t54 = (x217<=(x218<=(x219==x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x222 = 907896U;
	volatile int8_t x223 = -1;
	volatile int32_t x224 = 970365;
	volatile int32_t t55 = -20;

	t55 = (x221<=(x222<=(x223==x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 435636744174LLU;
	int8_t x226 = INT8_MIN;
	uint16_t x227 = 4028U;
	int64_t x228 = INT64_MIN;
	int32_t t56 = 23;

	t56 = (x225<=(x226<=(x227==x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	volatile int32_t x232 = -1;
	volatile int32_t t57 = -1687;

	t57 = (x229<=(x230<=(x231==x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x234 = 87797;
	uint32_t x236 = 99497U;
	volatile int32_t t58 = -603164612;

	t58 = (x233<=(x234<=(x235==x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = UINT8_MAX;
	uint16_t x238 = 1U;

	t59 = (x237<=(x238<=(x239==x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MAX;
	int32_t x243 = 25756;
	volatile int32_t t60 = 276;

	t60 = (x241<=(x242<=(x243==x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	static int8_t x246 = INT8_MAX;
	int64_t x248 = 108194006LL;
	int32_t t61 = -7;

	t61 = (x245<=(x246<=(x247==x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	int32_t x251 = -253151;
	volatile uint64_t x252 = 70655384404379217LLU;
	int32_t t62 = -184883;

	t62 = (x249<=(x250<=(x251==x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = INT64_MIN;
	int16_t x254 = 984;
	static volatile int32_t x255 = -9;
	int64_t x256 = 3635206LL;

	t63 = (x253<=(x254<=(x255==x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = -1275509;
	int64_t x258 = INT64_MAX;
	int8_t x260 = 6;
	int32_t t64 = 108;

	t64 = (x257<=(x258<=(x259==x260)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x262 = 0U;
	uint32_t x264 = 30U;
	volatile int32_t t65 = -7830184;

	t65 = (x261<=(x262<=(x263==x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MAX;
	uint32_t x268 = UINT32_MAX;
	int32_t t66 = 51329;

	t66 = (x265<=(x266<=(x267==x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x270 = INT16_MAX;
	int32_t x271 = -1;
	uint8_t x272 = UINT8_MAX;
	int32_t t67 = 2;

	t67 = (x269<=(x270<=(x271==x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x273 = -6253;
	int64_t x274 = INT64_MIN;
	volatile int16_t x275 = -1;
	static int16_t x276 = 1214;
	int32_t t68 = -3403;

	t68 = (x273<=(x274<=(x275==x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x277 = INT64_MIN;
	int8_t x278 = INT8_MAX;
	int32_t x279 = -50;
	volatile int32_t t69 = 22129364;

	t69 = (x277<=(x278<=(x279==x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x281 = INT64_MIN;
	static int64_t x282 = -5528638172667LL;
	static int8_t x283 = INT8_MIN;
	volatile int16_t x284 = INT16_MAX;
	static volatile int32_t t70 = 2;

	t70 = (x281<=(x282<=(x283==x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = -83;
	int8_t x286 = 0;
	static int32_t x287 = -1;
	int8_t x288 = INT8_MIN;
	volatile int32_t t71 = 74725070;

	t71 = (x285<=(x286<=(x287==x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MAX;
	int8_t x290 = INT8_MIN;
	int32_t x291 = INT32_MIN;
	static volatile uint16_t x292 = 6U;
	int32_t t72 = -354688020;

	t72 = (x289<=(x290<=(x291==x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x294 = -15;
	int16_t x295 = INT16_MAX;
	volatile uint64_t x296 = 13614LLU;
	int32_t t73 = 31;

	t73 = (x293<=(x294<=(x295==x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x298 = INT8_MAX;

	t74 = (x297<=(x298<=(x299==x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	int32_t x302 = 7705;
	volatile int8_t x303 = 1;
	volatile int32_t t75 = -515;

	t75 = (x301<=(x302<=(x303==x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -27;
	int32_t x307 = -2;
	uint64_t x308 = 2405941LLU;
	volatile int32_t t76 = 1;

	t76 = (x305<=(x306<=(x307==x308)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = UINT8_MAX;
	volatile uint64_t x310 = 15355704LLU;
	uint64_t x311 = UINT64_MAX;
	static uint8_t x312 = 7U;
	volatile int32_t t77 = 129;

	t77 = (x309<=(x310<=(x311==x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	uint8_t x314 = 3U;
	uint64_t x315 = UINT64_MAX;
	static int32_t x316 = INT32_MAX;
	static int32_t t78 = 8321175;

	t78 = (x313<=(x314<=(x315==x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x317 = -1;
	static int32_t x318 = 46;
	uint64_t x319 = 3467619LLU;
	int8_t x320 = INT8_MIN;
	int32_t t79 = -2748;

	t79 = (x317<=(x318<=(x319==x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x322 = INT64_MIN;
	int8_t x323 = -1;
	volatile int32_t t80 = 5;

	t80 = (x321<=(x322<=(x323==x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x326 = INT16_MAX;
	int64_t x327 = INT64_MAX;
	uint32_t x328 = 1698346U;
	volatile int32_t t81 = -1448956;

	t81 = (x325<=(x326<=(x327==x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = 8;
	volatile int8_t x332 = 1;
	volatile int32_t t82 = -25;

	t82 = (x329<=(x330<=(x331==x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x333 = INT16_MIN;
	int16_t x336 = INT16_MIN;

	t83 = (x333<=(x334<=(x335==x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MAX;
	uint64_t x339 = 266783877LLU;
	uint64_t x340 = 3907947417990942483LLU;
	int32_t t84 = -24;

	t84 = (x337<=(x338<=(x339==x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -1;
	int16_t x342 = INT16_MIN;
	int16_t x343 = INT16_MAX;
	int64_t x344 = INT64_MIN;
	int32_t t85 = -236086;

	t85 = (x341<=(x342<=(x343==x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -69;
	uint8_t x347 = 55U;
	int32_t x348 = -34236945;

	t86 = (x345<=(x346<=(x347==x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x350 = 3305699642827250776LL;
	uint16_t x352 = UINT16_MAX;

	t87 = (x349<=(x350<=(x351==x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x353 = 6U;
	static int64_t x354 = -1LL;
	volatile int64_t x355 = INT64_MIN;
	int32_t x356 = INT32_MIN;
	int32_t t88 = 64496;

	t88 = (x353<=(x354<=(x355==x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x358 = 18U;
	int64_t x359 = -1LL;
	static int64_t x360 = -1LL;
	volatile int32_t t89 = -22;

	t89 = (x357<=(x358<=(x359==x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 9956949499LLU;
	static uint64_t x362 = 2LLU;
	volatile int8_t x363 = -53;
	int32_t t90 = -354706751;

	t90 = (x361<=(x362<=(x363==x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x366 = -23;
	volatile int64_t x367 = -1LL;
	volatile int32_t x368 = -3;
	int32_t t91 = 0;

	t91 = (x365<=(x366<=(x367==x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x369 = 1;
	volatile int8_t x370 = -1;
	int64_t x371 = 7057521LL;

	t92 = (x369<=(x370<=(x371==x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x374 = UINT64_MAX;
	volatile uint64_t x375 = 164029748647835068LLU;
	volatile int8_t x376 = -1;
	static int32_t t93 = 1;

	t93 = (x373<=(x374<=(x375==x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 14U;
	uint64_t x378 = 3222015730760695387LLU;
	volatile int32_t t94 = -1;

	t94 = (x377<=(x378<=(x379==x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -1449;
	int8_t x382 = INT8_MIN;
	volatile int64_t x383 = 2167046347233305143LL;
	static int8_t x384 = INT8_MAX;
	int32_t t95 = 1613453;

	t95 = (x381<=(x382<=(x383==x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = 1944LL;
	int64_t x386 = INT64_MIN;
	volatile int64_t x387 = -90LL;
	int8_t x388 = 0;
	static volatile int32_t t96 = 399199;

	t96 = (x385<=(x386<=(x387==x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = 0;
	static volatile int8_t x390 = INT8_MIN;
	int16_t x391 = -673;
	uint16_t x392 = 28422U;
	volatile int32_t t97 = 1;

	t97 = (x389<=(x390<=(x391==x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x396 = 923387599272LLU;
	int32_t t98 = 1220;

	t98 = (x393<=(x394<=(x395==x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 10097LLU;
	uint32_t x398 = 9U;
	uint8_t x400 = UINT8_MAX;

	t99 = (x397<=(x398<=(x399==x400)));

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

