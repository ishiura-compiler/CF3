#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x7 = UINT32_MAX;
volatile int64_t x11 = -7357116845640626LL;
int32_t x12 = -5278;
int32_t x14 = INT32_MIN;
uint32_t x18 = 17091U;
volatile int8_t x22 = -61;
int8_t x24 = 0;
uint16_t x28 = UINT16_MAX;
volatile int32_t x30 = INT32_MIN;
static int64_t x32 = INT64_MIN;
static int8_t x50 = 13;
volatile int8_t x57 = INT8_MAX;
int64_t x58 = -16013573964466LL;
uint16_t x66 = UINT16_MAX;
int8_t x69 = INT8_MIN;
uint16_t x82 = 29666U;
int8_t x84 = INT8_MIN;
volatile int32_t t22 = -207948;
int64_t x100 = 118253461547124LL;
static volatile uint16_t x105 = UINT16_MAX;
volatile int16_t x108 = 15938;
volatile int32_t t25 = -10465082;
static int32_t t26 = -250;
uint64_t x130 = UINT64_MAX;
static volatile uint32_t x133 = 14064384U;
int8_t x135 = -1;
volatile int64_t x138 = INT64_MAX;
uint8_t x148 = 7U;
static int16_t x150 = INT16_MAX;
volatile int32_t t37 = -3987786;
uint64_t x162 = 1691604519LLU;
static volatile int8_t x164 = INT8_MIN;
volatile int32_t t39 = 474382;
int32_t t41 = -4;
volatile int8_t x175 = INT8_MIN;
int32_t t43 = 2163;
int32_t x182 = 37514;
static int64_t x184 = -1LL;
int32_t t44 = -830;
volatile uint16_t x186 = 6511U;
int8_t x190 = INT8_MIN;
uint32_t x191 = 1014776U;
int64_t x193 = INT64_MIN;
uint16_t x194 = UINT16_MAX;
volatile int32_t t48 = -856480445;
uint32_t x207 = 21526592U;
int64_t x208 = INT64_MIN;
int64_t x212 = 169358990746669LL;
static int32_t x213 = INT32_MAX;
int32_t t52 = -2319772;
uint32_t x218 = 9U;
int32_t x224 = INT32_MAX;
int8_t x230 = INT8_MIN;
uint64_t x234 = UINT64_MAX;
static int32_t t57 = 24791;
int32_t t58 = -509;
static int32_t x244 = INT32_MAX;
static int16_t x249 = 15388;
uint8_t x254 = UINT8_MAX;
static volatile int32_t t62 = 29920550;
static int16_t x259 = INT16_MAX;
uint32_t x275 = 1486U;
int32_t t66 = -5494;
static int32_t t68 = 7;
static int8_t x287 = -1;
int8_t x292 = -1;
volatile int32_t t70 = 52392;
volatile int32_t t72 = -110539543;
uint16_t x303 = 791U;
int32_t x307 = -366;
int32_t x311 = 2;
static volatile uint32_t x312 = 5U;
static int32_t t75 = -3;
static int32_t t77 = 12766630;
static volatile int64_t x325 = INT64_MAX;
static volatile int64_t x339 = INT64_MIN;
uint64_t x344 = 3636729384861021877LLU;
volatile uint32_t x346 = 61761111U;
int32_t x354 = -2100;
int16_t x367 = -2;
volatile uint16_t x369 = UINT16_MAX;
volatile int32_t x370 = 320661;
volatile int32_t t90 = -258669166;
int32_t x384 = -1399047;
uint32_t x388 = 688U;
static int32_t t94 = 24310709;
static int8_t x390 = INT8_MIN;
static int32_t t96 = 32579;


void f0(void) {
	volatile uint16_t x1 = UINT16_MAX;
	int8_t x2 = -29;
	uint16_t x3 = UINT16_MAX;
	uint64_t x4 = 496LLU;
	int32_t t0 = 141201;

	t0 = (x1<=(x2+(x3<=x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int16_t x6 = -1;
	uint16_t x8 = 31958U;
	int32_t t1 = -2368;

	t1 = (x5<=(x6+(x7<=x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 715878056U;
	uint16_t x10 = 24358U;
	int32_t t2 = -60449385;

	t2 = (x9<=(x10+(x11<=x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -12;
	int32_t x15 = INT32_MAX;
	static volatile int16_t x16 = -301;
	int32_t t3 = -2;

	t3 = (x13<=(x14+(x15<=x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	static uint32_t x19 = UINT32_MAX;
	int8_t x20 = INT8_MAX;
	volatile int32_t t4 = -20;

	t4 = (x17<=(x18+(x19<=x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int32_t x23 = -11491529;
	volatile int32_t t5 = 2943;

	t5 = (x21<=(x22+(x23<=x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	int64_t x26 = INT64_MIN;
	int8_t x27 = 0;
	volatile int32_t t6 = -60446;

	t6 = (x25<=(x26+(x27<=x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	int32_t x31 = 338254;
	volatile int32_t t7 = -3858;

	t7 = (x29<=(x30+(x31<=x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 0;
	volatile int64_t x34 = INT64_MAX;
	uint8_t x35 = UINT8_MAX;
	int16_t x36 = -1;
	int32_t t8 = 62412;

	t8 = (x33<=(x34+(x35<=x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	int64_t x38 = 527714132LL;
	int32_t x39 = 61267;
	int32_t x40 = -33570;
	int32_t t9 = -1910654;

	t9 = (x37<=(x38+(x39<=x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	int16_t x42 = INT16_MIN;
	int8_t x43 = -25;
	uint16_t x44 = 15825U;
	volatile int32_t t10 = -4;

	t10 = (x41<=(x42+(x43<=x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = 505U;
	int16_t x46 = -1;
	int32_t x47 = INT32_MIN;
	int64_t x48 = 42435032LL;
	volatile int32_t t11 = -2712181;

	t11 = (x45<=(x46+(x47<=x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 478945537U;
	uint32_t x51 = 1658449U;
	int32_t x52 = -3985;
	int32_t t12 = 19;

	t12 = (x49<=(x50+(x51<=x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = 11979091295LL;
	int64_t x54 = -1LL;
	static uint8_t x55 = 54U;
	static volatile int16_t x56 = INT16_MAX;
	volatile int32_t t13 = 1517;

	t13 = (x53<=(x54+(x55<=x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x59 = 450310U;
	int32_t x60 = -1;
	int32_t t14 = -10551;

	t14 = (x57<=(x58+(x59<=x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = -3;
	uint32_t x62 = 261547U;
	volatile uint16_t x63 = 13747U;
	volatile uint32_t x64 = 24U;
	int32_t t15 = 19;

	t15 = (x61<=(x62+(x63<=x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 47982050U;
	volatile int64_t x67 = -1LL;
	static uint32_t x68 = 1686510509U;
	static int32_t t16 = -901759;

	t16 = (x65<=(x66+(x67<=x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = -6614419748LL;
	volatile uint8_t x71 = 3U;
	volatile int16_t x72 = INT16_MIN;
	int32_t t17 = -61296586;

	t17 = (x69<=(x70+(x71<=x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MAX;
	uint32_t x74 = UINT32_MAX;
	uint64_t x75 = 60317LLU;
	int16_t x76 = INT16_MIN;
	static int32_t t18 = -161345;

	t18 = (x73<=(x74+(x75<=x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = INT32_MIN;
	static int16_t x83 = INT16_MAX;
	int32_t t19 = 93;

	t19 = (x81<=(x82+(x83<=x84)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = -2;
	volatile int64_t x86 = -10477297524332948LL;
	int32_t x87 = INT32_MAX;
	static uint32_t x88 = UINT32_MAX;
	static volatile int32_t t20 = -2310;

	t20 = (x85<=(x86+(x87<=x88)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x89 = INT16_MAX;
	volatile int32_t x90 = INT32_MIN;
	uint8_t x91 = 30U;
	int8_t x92 = INT8_MIN;
	static volatile int32_t t21 = 33656701;

	t21 = (x89<=(x90+(x91<=x92)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x93 = 6U;
	int64_t x94 = 3534LL;
	uint16_t x95 = 13U;
	uint64_t x96 = 171348403556LLU;

	t22 = (x93<=(x94+(x95<=x96)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = INT8_MIN;
	static int8_t x98 = -1;
	static volatile int16_t x99 = INT16_MAX;
	static int32_t t23 = 18505762;

	t23 = (x97<=(x98+(x99<=x100)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x101 = INT64_MIN;
	int64_t x102 = INT64_MIN;
	static int64_t x103 = INT64_MIN;
	static int16_t x104 = INT16_MAX;
	volatile int32_t t24 = -1;

	t24 = (x101<=(x102+(x103<=x104)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x106 = UINT64_MAX;
	int8_t x107 = INT8_MIN;

	t25 = (x105<=(x106+(x107<=x108)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = INT16_MIN;
	uint8_t x110 = 0U;
	static volatile uint64_t x111 = UINT64_MAX;
	int8_t x112 = INT8_MAX;

	t26 = (x109<=(x110+(x111<=x112)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = INT8_MAX;
	uint16_t x114 = UINT16_MAX;
	volatile int8_t x115 = 1;
	volatile int8_t x116 = INT8_MAX;
	volatile int32_t t27 = 9;

	t27 = (x113<=(x114+(x115<=x116)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x117 = UINT16_MAX;
	uint32_t x118 = 13677U;
	static uint8_t x119 = UINT8_MAX;
	int16_t x120 = -1;
	static volatile int32_t t28 = -746891;

	t28 = (x117<=(x118+(x119<=x120)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x121 = INT32_MAX;
	volatile int8_t x122 = -27;
	int64_t x123 = INT64_MIN;
	int64_t x124 = -203116LL;
	int32_t t29 = 3651764;

	t29 = (x121<=(x122+(x123<=x124)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MIN;
	volatile int64_t x126 = -1LL;
	uint8_t x127 = 46U;
	int64_t x128 = -114883856565687963LL;
	int32_t t30 = 14814453;

	t30 = (x125<=(x126+(x127<=x128)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = 63386847387446LL;
	int32_t x131 = 46786;
	int8_t x132 = INT8_MAX;
	volatile int32_t t31 = 33402188;

	t31 = (x129<=(x130+(x131<=x132)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x134 = INT8_MIN;
	volatile int64_t x136 = -1LL;
	int32_t t32 = 414862;

	t32 = (x133<=(x134+(x135<=x136)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x137 = -1;
	int16_t x139 = -1;
	uint32_t x140 = 3U;
	static int32_t t33 = 7396;

	t33 = (x137<=(x138+(x139<=x140)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = INT32_MIN;
	static int16_t x142 = 11065;
	static int16_t x143 = INT16_MIN;
	static volatile uint16_t x144 = UINT16_MAX;
	static int32_t t34 = 388778;

	t34 = (x141<=(x142+(x143<=x144)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x145 = -857;
	int8_t x146 = -1;
	volatile uint16_t x147 = 512U;
	static int32_t t35 = -89583493;

	t35 = (x145<=(x146+(x147<=x148)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x149 = UINT64_MAX;
	int16_t x151 = -1;
	static volatile int16_t x152 = INT16_MIN;
	int32_t t36 = 661143785;

	t36 = (x149<=(x150+(x151<=x152)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x153 = 110023LLU;
	static int64_t x154 = -902917486495LL;
	int32_t x155 = INT32_MAX;
	int16_t x156 = 44;

	t37 = (x153<=(x154+(x155<=x156)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x157 = 2U;
	volatile int64_t x158 = -1LL;
	uint64_t x159 = 296292758LLU;
	static uint16_t x160 = 260U;
	volatile int32_t t38 = -313;

	t38 = (x157<=(x158+(x159<=x160)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x161 = 3813U;
	int32_t x163 = INT32_MIN;

	t39 = (x161<=(x162+(x163<=x164)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = INT64_MIN;
	uint64_t x166 = UINT64_MAX;
	uint32_t x167 = 767U;
	int16_t x168 = -1;
	int32_t t40 = 272104;

	t40 = (x165<=(x166+(x167<=x168)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x169 = 8U;
	int8_t x170 = INT8_MIN;
	uint64_t x171 = 77780401510410LLU;
	volatile int8_t x172 = -1;

	t41 = (x169<=(x170+(x171<=x172)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x173 = INT8_MIN;
	int16_t x174 = INT16_MIN;
	static int32_t x176 = INT32_MIN;
	static int32_t t42 = 5288927;

	t42 = (x173<=(x174+(x175<=x176)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = 3822;
	static volatile int16_t x178 = INT16_MAX;
	static int8_t x179 = INT8_MIN;
	int16_t x180 = -3831;

	t43 = (x177<=(x178+(x179<=x180)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x181 = -1;
	volatile int32_t x183 = INT32_MIN;

	t44 = (x181<=(x182+(x183<=x184)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x185 = 23725U;
	uint8_t x187 = 27U;
	int16_t x188 = INT16_MAX;
	volatile int32_t t45 = 128158853;

	t45 = (x185<=(x186+(x187<=x188)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x189 = INT16_MAX;
	static int16_t x192 = INT16_MIN;
	volatile int32_t t46 = -11;

	t46 = (x189<=(x190+(x191<=x192)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x195 = INT8_MIN;
	int32_t x196 = INT32_MIN;
	int32_t t47 = 231;

	t47 = (x193<=(x194+(x195<=x196)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = INT64_MIN;
	int32_t x198 = -8;
	int32_t x199 = INT32_MIN;
	int8_t x200 = -7;

	t48 = (x197<=(x198+(x199<=x200)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x201 = 6954U;
	volatile uint32_t x202 = 1523589517U;
	int16_t x203 = -1;
	int32_t x204 = INT32_MIN;
	int32_t t49 = -31119;

	t49 = (x201<=(x202+(x203<=x204)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x205 = 3U;
	int8_t x206 = -30;
	volatile int32_t t50 = -25;

	t50 = (x205<=(x206+(x207<=x208)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = 1;
	int32_t x210 = -1;
	int32_t x211 = -1;
	static int32_t t51 = -6;

	t51 = (x209<=(x210+(x211<=x212)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint8_t x214 = 1U;
	uint16_t x215 = 31U;
	static int16_t x216 = -1;

	t52 = (x213<=(x214+(x215<=x216)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x217 = 53U;
	volatile int8_t x219 = INT8_MAX;
	uint8_t x220 = 97U;
	static volatile int32_t t53 = 16;

	t53 = (x217<=(x218+(x219<=x220)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x221 = UINT64_MAX;
	uint8_t x222 = UINT8_MAX;
	volatile int64_t x223 = INT64_MIN;
	int32_t t54 = -70;

	t54 = (x221<=(x222+(x223<=x224)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = INT16_MAX;
	volatile int16_t x226 = INT16_MIN;
	volatile uint16_t x227 = UINT16_MAX;
	volatile int32_t x228 = 1;
	int32_t t55 = -79;

	t55 = (x225<=(x226+(x227<=x228)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = INT64_MIN;
	int64_t x231 = INT64_MIN;
	int64_t x232 = -255LL;
	int32_t t56 = 132333597;

	t56 = (x229<=(x230+(x231<=x232)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x233 = INT32_MAX;
	int16_t x235 = -1;
	int8_t x236 = 0;

	t57 = (x233<=(x234+(x235<=x236)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x237 = -1;
	uint64_t x238 = 21021LLU;
	static uint64_t x239 = 20351959456567966LLU;
	static volatile int64_t x240 = INT64_MIN;

	t58 = (x237<=(x238+(x239<=x240)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x241 = 0LLU;
	uint8_t x242 = 33U;
	static uint64_t x243 = 44431337360LLU;
	volatile int32_t t59 = 1;

	t59 = (x241<=(x242+(x243<=x244)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x245 = INT64_MIN;
	int16_t x246 = -1;
	int16_t x247 = -1;
	int16_t x248 = INT16_MIN;
	volatile int32_t t60 = -626485;

	t60 = (x245<=(x246+(x247<=x248)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x250 = -552334080LL;
	static volatile int32_t x251 = 909906;
	int32_t x252 = 6985147;
	volatile int32_t t61 = 2;

	t61 = (x249<=(x250+(x251<=x252)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x253 = 197LLU;
	static uint16_t x255 = UINT16_MAX;
	uint64_t x256 = UINT64_MAX;

	t62 = (x253<=(x254+(x255<=x256)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x257 = 4274U;
	int16_t x258 = -1;
	int32_t x260 = INT32_MAX;
	int32_t t63 = -1758;

	t63 = (x257<=(x258+(x259<=x260)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x261 = UINT16_MAX;
	volatile int8_t x262 = INT8_MAX;
	int8_t x263 = INT8_MIN;
	static int8_t x264 = INT8_MIN;
	volatile int32_t t64 = -3;

	t64 = (x261<=(x262+(x263<=x264)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x269 = 434516;
	int32_t x270 = INT32_MAX;
	uint16_t x271 = 29U;
	int32_t x272 = -61;
	int32_t t65 = 459065931;

	t65 = (x269<=(x270+(x271<=x272)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x273 = 27413U;
	int8_t x274 = INT8_MIN;
	uint64_t x276 = 65202828318LLU;

	t66 = (x273<=(x274+(x275<=x276)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x277 = 2LLU;
	int64_t x278 = INT64_MIN;
	uint8_t x279 = 2U;
	int16_t x280 = -3227;
	int32_t t67 = -9992635;

	t67 = (x277<=(x278+(x279<=x280)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x281 = UINT32_MAX;
	volatile uint16_t x282 = UINT16_MAX;
	int32_t x283 = INT32_MIN;
	uint64_t x284 = 3LLU;

	t68 = (x281<=(x282+(x283<=x284)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x285 = INT16_MIN;
	uint8_t x286 = 5U;
	int32_t x288 = INT32_MIN;
	volatile int32_t t69 = 1112024;

	t69 = (x285<=(x286+(x287<=x288)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x289 = 0;
	volatile uint16_t x290 = 26493U;
	int64_t x291 = -1LL;

	t70 = (x289<=(x290+(x291<=x292)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = INT32_MIN;
	int16_t x294 = INT16_MIN;
	uint32_t x295 = 472097U;
	int8_t x296 = INT8_MIN;
	static volatile int32_t t71 = 868;

	t71 = (x293<=(x294+(x295<=x296)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x297 = UINT64_MAX;
	int16_t x298 = -70;
	uint8_t x299 = 14U;
	volatile int64_t x300 = -901925659062LL;

	t72 = (x297<=(x298+(x299<=x300)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x301 = INT16_MIN;
	int16_t x302 = INT16_MIN;
	int16_t x304 = 0;
	static volatile int32_t t73 = 0;

	t73 = (x301<=(x302+(x303<=x304)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x305 = -1;
	static int64_t x306 = INT64_MIN;
	uint64_t x308 = 383832LLU;
	int32_t t74 = -13707170;

	t74 = (x305<=(x306+(x307<=x308)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x309 = INT8_MIN;
	int32_t x310 = INT32_MIN;

	t75 = (x309<=(x310+(x311<=x312)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x313 = -7;
	uint16_t x314 = 105U;
	uint8_t x315 = 33U;
	int32_t x316 = 195919814;
	static volatile int32_t t76 = 247027;

	t76 = (x313<=(x314+(x315<=x316)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x317 = 8;
	int8_t x318 = -58;
	int64_t x319 = INT64_MAX;
	int32_t x320 = 1;

	t77 = (x317<=(x318+(x319<=x320)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x321 = INT64_MIN;
	uint64_t x322 = 186157822368860070LLU;
	int32_t x323 = -1;
	uint16_t x324 = UINT16_MAX;
	int32_t t78 = 718253;

	t78 = (x321<=(x322+(x323<=x324)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x326 = INT8_MIN;
	int16_t x327 = 0;
	uint32_t x328 = 720064190U;
	int32_t t79 = 164;

	t79 = (x325<=(x326+(x327<=x328)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x329 = -1;
	volatile int16_t x330 = 9;
	int16_t x331 = -1;
	volatile int16_t x332 = INT16_MIN;
	int32_t t80 = -406761853;

	t80 = (x329<=(x330+(x331<=x332)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x333 = -475;
	volatile uint16_t x334 = UINT16_MAX;
	uint64_t x335 = 566140056395104411LLU;
	uint8_t x336 = 50U;
	int32_t t81 = -1136;

	t81 = (x333<=(x334+(x335<=x336)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x337 = 5U;
	volatile uint64_t x338 = 398242LLU;
	static uint64_t x340 = 4395111803048558943LLU;
	volatile int32_t t82 = -1;

	t82 = (x337<=(x338+(x339<=x340)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x341 = -34LL;
	uint8_t x342 = 19U;
	static int8_t x343 = -1;
	static volatile int32_t t83 = 3;

	t83 = (x341<=(x342+(x343<=x344)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x345 = 28443U;
	int8_t x347 = INT8_MIN;
	int8_t x348 = INT8_MIN;
	int32_t t84 = 106754633;

	t84 = (x345<=(x346+(x347<=x348)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x349 = 0U;
	int32_t x350 = -16028;
	volatile uint8_t x351 = UINT8_MAX;
	int64_t x352 = -1LL;
	volatile int32_t t85 = 649;

	t85 = (x349<=(x350+(x351<=x352)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint64_t x353 = 553220LLU;
	int64_t x355 = 2652978060140456119LL;
	int16_t x356 = INT16_MAX;
	volatile int32_t t86 = -58302;

	t86 = (x353<=(x354+(x355<=x356)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x357 = 38U;
	int16_t x358 = -1;
	static int32_t x359 = -1;
	static int8_t x360 = INT8_MIN;
	int32_t t87 = -436;

	t87 = (x357<=(x358+(x359<=x360)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x361 = -1;
	volatile int16_t x362 = INT16_MAX;
	int32_t x363 = INT32_MIN;
	uint8_t x364 = 0U;
	int32_t t88 = -300197;

	t88 = (x361<=(x362+(x363<=x364)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x365 = INT16_MIN;
	int16_t x366 = INT16_MIN;
	int8_t x368 = INT8_MIN;
	int32_t t89 = -658277;

	t89 = (x365<=(x366+(x367<=x368)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x371 = 26U;
	static uint64_t x372 = 10964367060130LLU;

	t90 = (x369<=(x370+(x371<=x372)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x373 = 200295LL;
	static uint64_t x374 = UINT64_MAX;
	int32_t x375 = INT32_MAX;
	int64_t x376 = INT64_MIN;
	volatile int32_t t91 = 1;

	t91 = (x373<=(x374+(x375<=x376)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x377 = 14;
	int8_t x378 = -1;
	uint8_t x379 = UINT8_MAX;
	int16_t x380 = -96;
	volatile int32_t t92 = 1;

	t92 = (x377<=(x378+(x379<=x380)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x381 = UINT8_MAX;
	uint8_t x382 = UINT8_MAX;
	uint64_t x383 = 2167001989603074613LLU;
	static volatile int32_t t93 = 958016030;

	t93 = (x381<=(x382+(x383<=x384)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x385 = -26;
	volatile int64_t x386 = 88942452612484LL;
	volatile int8_t x387 = INT8_MIN;

	t94 = (x385<=(x386+(x387<=x388)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x389 = 897782665;
	volatile int64_t x391 = 74648343113377623LL;
	static int64_t x392 = -226447LL;
	int32_t t95 = -5101929;

	t95 = (x389<=(x390+(x391<=x392)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x393 = -1;
	int16_t x394 = 14;
	volatile uint16_t x395 = 126U;
	int8_t x396 = INT8_MIN;

	t96 = (x393<=(x394+(x395<=x396)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x397 = 0U;
	int8_t x398 = 1;
	int64_t x399 = INT64_MIN;
	volatile int32_t x400 = INT32_MIN;
	volatile int32_t t97 = -2872;

	t97 = (x397<=(x398+(x399<=x400)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x401 = INT32_MIN;
	uint32_t x402 = UINT32_MAX;
	int16_t x403 = -1;
	int16_t x404 = INT16_MAX;
	volatile int32_t t98 = -106811455;

	t98 = (x401<=(x402+(x403<=x404)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x405 = INT16_MIN;
	int8_t x406 = INT8_MIN;
	int16_t x407 = INT16_MIN;
	static int8_t x408 = 19;
	int32_t t99 = 437175;

	t99 = (x405<=(x406+(x407<=x408)));

	if (t99 != 1) { NG(); } else { ; }
	
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

