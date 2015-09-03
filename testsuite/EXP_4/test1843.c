#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x19 = -1;
static int32_t x22 = INT32_MAX;
static int16_t x27 = -1;
static volatile int64_t x32 = INT64_MAX;
uint64_t x33 = 21676611201939LLU;
int16_t x34 = -1;
uint32_t x39 = 31U;
uint32_t x40 = 35U;
int8_t x50 = INT8_MIN;
int32_t t12 = -1;
int8_t x58 = -1;
volatile uint8_t x64 = 1U;
int64_t x72 = -9791830LL;
int32_t t17 = -93784;
int16_t x73 = 7371;
int8_t x79 = 15;
static uint8_t x82 = 25U;
int64_t x88 = -1LL;
int64_t x90 = -1595864219828LL;
volatile int8_t x98 = 12;
static uint32_t x100 = 1126166045U;
static int8_t x108 = -1;
int16_t x112 = INT16_MIN;
volatile int8_t x114 = -1;
int64_t x117 = INT64_MIN;
static int16_t x122 = INT16_MIN;
int32_t t31 = -122;
uint8_t x130 = 11U;
static int32_t x131 = -1;
static uint8_t x135 = UINT8_MAX;
uint16_t x137 = 499U;
static uint8_t x142 = UINT8_MAX;
static int32_t x145 = INT32_MIN;
volatile int32_t t37 = 227;
int32_t x153 = -331594638;
int64_t x154 = -1LL;
volatile int32_t t38 = 7;
static int64_t x157 = -1LL;
int16_t x173 = 668;
volatile int32_t t43 = 29560601;
int64_t x182 = -1LL;
static volatile uint64_t x186 = 24677127182952LLU;
int8_t x190 = -3;
int32_t x195 = INT32_MIN;
int64_t x196 = INT64_MIN;
int32_t x199 = 43494491;
static int64_t x200 = INT64_MAX;
uint32_t x201 = 486U;
volatile int32_t t50 = -339;
volatile int8_t x205 = -58;
static int32_t x208 = -1347628;
uint8_t x214 = UINT8_MAX;
static uint32_t x215 = 17U;
int64_t x221 = INT64_MIN;
static int64_t x224 = INT64_MAX;
static int32_t t55 = 601223;
uint16_t x230 = 181U;
uint32_t x232 = UINT32_MAX;
volatile uint32_t x241 = 571006877U;
int64_t x242 = 16559133LL;
int32_t x244 = -1;
int32_t x246 = -1;
int32_t x247 = -25132933;
static volatile uint16_t x258 = 1U;
volatile uint8_t x262 = 11U;
int8_t x266 = 6;
int32_t x270 = -1;
volatile int32_t t67 = -207818250;
int8_t x273 = INT8_MIN;
static uint32_t x276 = 1404771404U;
int32_t t71 = 15205265;
int8_t x289 = -1;
uint8_t x292 = UINT8_MAX;
int16_t x295 = 18;
int8_t x299 = 6;
volatile int32_t t74 = 249;
int32_t x306 = INT32_MIN;
static int64_t x311 = -1LL;
volatile uint64_t x314 = UINT64_MAX;
static volatile uint8_t x318 = 4U;
static int64_t x330 = 13484LL;
volatile int8_t x335 = -1;
int32_t x336 = -187376;
volatile int32_t t84 = 1;
int32_t x342 = INT32_MIN;
volatile uint8_t x343 = 12U;
int32_t t85 = -28699;
int16_t x348 = 3;
volatile int16_t x354 = INT16_MIN;
int32_t x355 = -1;
int8_t x356 = -1;
int64_t x361 = -1LL;
volatile int32_t t90 = -7;
uint16_t x365 = 30388U;
volatile int32_t x376 = -1;
volatile int64_t x381 = 38366LL;
uint16_t x385 = 170U;
int8_t x386 = INT8_MAX;
uint16_t x388 = 2669U;
int16_t x399 = -1;
int32_t x400 = INT32_MAX;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int64_t x2 = INT64_MIN;
	uint64_t x3 = 3770064104145LLU;
	int32_t x4 = -1;
	static volatile int32_t t0 = 1;

	t0 = (x1<=(x2|(x3&x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	volatile int32_t x6 = INT32_MIN;
	int64_t x7 = -4241268259499412LL;
	static uint32_t x8 = 124818U;
	static volatile int32_t t1 = 1;

	t1 = (x5<=(x6|(x7&x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int8_t x10 = INT8_MIN;
	uint16_t x11 = 4U;
	volatile int32_t x12 = INT32_MAX;
	volatile int32_t t2 = -9370;

	t2 = (x9<=(x10|(x11&x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 74260026U;
	static uint32_t x14 = UINT32_MAX;
	uint16_t x15 = UINT16_MAX;
	static volatile uint32_t x16 = 5U;
	volatile int32_t t3 = 12;

	t3 = (x13<=(x14|(x15&x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 7128622238324918LLU;
	volatile uint16_t x18 = 687U;
	int64_t x20 = INT64_MIN;
	int32_t t4 = -3;

	t4 = (x17<=(x18|(x19&x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	int32_t x23 = INT32_MIN;
	int32_t x24 = INT32_MAX;
	volatile int32_t t5 = -109;

	t5 = (x21<=(x22|(x23&x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	static uint8_t x26 = 37U;
	volatile int8_t x28 = 0;
	volatile int32_t t6 = 339117103;

	t6 = (x25<=(x26|(x27&x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x29 = INT8_MAX;
	uint64_t x30 = 1124001LLU;
	int8_t x31 = 0;
	volatile int32_t t7 = 6;

	t7 = (x29<=(x30|(x31&x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x35 = INT16_MAX;
	uint16_t x36 = 13U;
	int32_t t8 = 1;

	t8 = (x33<=(x34|(x35&x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -13508;
	uint8_t x38 = UINT8_MAX;
	volatile int32_t t9 = -1;

	t9 = (x37<=(x38|(x39&x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	int32_t x42 = 532049;
	int32_t x43 = 982;
	uint16_t x44 = UINT16_MAX;
	volatile int32_t t10 = 887;

	t10 = (x41<=(x42|(x43&x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 588U;
	volatile uint64_t x46 = UINT64_MAX;
	int16_t x47 = -1;
	int32_t x48 = INT32_MIN;
	volatile int32_t t11 = 36;

	t11 = (x45<=(x46|(x47&x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	int64_t x51 = INT64_MIN;
	int8_t x52 = -26;

	t12 = (x49<=(x50|(x51&x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x53 = 1881813591746LLU;
	int64_t x54 = -1LL;
	uint64_t x55 = 0LLU;
	int64_t x56 = INT64_MIN;
	volatile int32_t t13 = -134376564;

	t13 = (x53<=(x54|(x55&x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = INT64_MAX;
	uint16_t x59 = 52U;
	uint32_t x60 = 37U;
	int32_t t14 = -7912278;

	t14 = (x57<=(x58|(x59&x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = INT32_MIN;
	volatile uint16_t x62 = 3793U;
	uint8_t x63 = 53U;
	int32_t t15 = 0;

	t15 = (x61<=(x62|(x63&x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	volatile int16_t x66 = INT16_MIN;
	int32_t x67 = -1;
	volatile int32_t x68 = INT32_MIN;
	volatile int32_t t16 = -2;

	t16 = (x65<=(x66|(x67&x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x69 = 283773676LLU;
	static volatile uint8_t x70 = UINT8_MAX;
	uint64_t x71 = 69057670321LLU;

	t17 = (x69<=(x70|(x71&x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = INT8_MIN;
	static volatile int16_t x75 = -1;
	volatile uint32_t x76 = 45U;
	int32_t t18 = 1;

	t18 = (x73<=(x74|(x75&x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	static volatile uint64_t x78 = UINT64_MAX;
	int8_t x80 = -1;
	int32_t t19 = -1075972;

	t19 = (x77<=(x78|(x79&x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = INT8_MIN;
	static uint32_t x83 = 636U;
	uint64_t x84 = 1672142302LLU;
	int32_t t20 = 11;

	t20 = (x81<=(x82|(x83&x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	uint32_t x86 = 1707802U;
	int16_t x87 = INT16_MIN;
	int32_t t21 = -237186;

	t21 = (x85<=(x86|(x87&x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint8_t x89 = 0U;
	uint64_t x91 = 188644LLU;
	int64_t x92 = -15007LL;
	int32_t t22 = 1;

	t22 = (x89<=(x90|(x91&x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -6;
	int8_t x94 = INT8_MIN;
	int16_t x95 = INT16_MAX;
	static volatile int8_t x96 = 9;
	volatile int32_t t23 = -4;

	t23 = (x93<=(x94|(x95&x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	int64_t x99 = INT64_MIN;
	volatile int32_t t24 = 120;

	t24 = (x97<=(x98|(x99&x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x101 = 2678U;
	uint16_t x102 = 49U;
	uint64_t x103 = UINT64_MAX;
	volatile uint64_t x104 = UINT64_MAX;
	volatile int32_t t25 = 1818330;

	t25 = (x101<=(x102|(x103&x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -1LL;
	uint32_t x106 = UINT32_MAX;
	volatile uint16_t x107 = 5308U;
	volatile int32_t t26 = -29592;

	t26 = (x105<=(x106|(x107&x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	volatile uint16_t x110 = UINT16_MAX;
	int16_t x111 = INT16_MAX;
	int32_t t27 = 1;

	t27 = (x109<=(x110|(x111&x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MAX;
	int16_t x115 = 1;
	int32_t x116 = -1066;
	int32_t t28 = 216929347;

	t28 = (x113<=(x114|(x115&x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x118 = -247194487;
	int16_t x119 = -1;
	int32_t x120 = -10;
	volatile int32_t t29 = -12;

	t29 = (x117<=(x118|(x119&x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	int32_t x123 = -11;
	uint16_t x124 = UINT16_MAX;
	int32_t t30 = -3;

	t30 = (x121<=(x122|(x123&x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = 7;
	int16_t x126 = 15;
	uint64_t x127 = UINT64_MAX;
	uint32_t x128 = UINT32_MAX;

	t31 = (x125<=(x126|(x127&x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -1745369753LL;
	int32_t x132 = INT32_MIN;
	int32_t t32 = 37;

	t32 = (x129<=(x130|(x131&x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MAX;
	uint16_t x134 = 795U;
	int32_t x136 = INT32_MIN;
	int32_t t33 = 15454;

	t33 = (x133<=(x134|(x135&x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x138 = -138424;
	uint16_t x139 = UINT16_MAX;
	static int16_t x140 = INT16_MAX;
	static int32_t t34 = -13091098;

	t34 = (x137<=(x138|(x139&x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x141 = 6358333LLU;
	int16_t x143 = INT16_MIN;
	volatile uint64_t x144 = UINT64_MAX;
	int32_t t35 = -604;

	t35 = (x141<=(x142|(x143&x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x146 = 41867;
	int32_t x147 = -27;
	volatile uint16_t x148 = 1679U;
	static volatile int32_t t36 = 546;

	t36 = (x145<=(x146|(x147&x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x149 = 98U;
	int16_t x150 = INT16_MIN;
	static uint32_t x151 = UINT32_MAX;
	int16_t x152 = INT16_MAX;

	t37 = (x149<=(x150|(x151&x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x155 = 59;
	int32_t x156 = 107;

	t38 = (x153<=(x154|(x155&x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = 7732763305LL;
	static volatile int32_t x159 = -1;
	uint32_t x160 = UINT32_MAX;
	static int32_t t39 = -23886342;

	t39 = (x157<=(x158|(x159&x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = UINT8_MAX;
	volatile int16_t x162 = INT16_MIN;
	uint64_t x163 = 86544230484LLU;
	int32_t x164 = 151488;
	static int32_t t40 = 20;

	t40 = (x161<=(x162|(x163&x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -1;
	int16_t x166 = INT16_MIN;
	int16_t x167 = INT16_MIN;
	static int8_t x168 = 0;
	int32_t t41 = -74580637;

	t41 = (x165<=(x166|(x167&x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x169 = -83310828LL;
	static int16_t x170 = INT16_MAX;
	uint8_t x171 = UINT8_MAX;
	uint64_t x172 = 16150LLU;
	int32_t t42 = -263;

	t42 = (x169<=(x170|(x171&x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x174 = INT8_MIN;
	int8_t x175 = INT8_MIN;
	volatile int16_t x176 = -1;

	t43 = (x173<=(x174|(x175&x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x177 = 81U;
	volatile int16_t x178 = INT16_MAX;
	static volatile uint32_t x179 = UINT32_MAX;
	int32_t x180 = -1;
	volatile int32_t t44 = -415;

	t44 = (x177<=(x178|(x179&x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = UINT64_MAX;
	int64_t x183 = INT64_MIN;
	volatile uint16_t x184 = UINT16_MAX;
	int32_t t45 = 111823306;

	t45 = (x181<=(x182|(x183&x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x185 = -24667LL;
	int16_t x187 = -1;
	static int32_t x188 = -21291;
	static int32_t t46 = 3448593;

	t46 = (x185<=(x186|(x187&x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x189 = INT32_MIN;
	int16_t x191 = INT16_MAX;
	int8_t x192 = 1;
	static int32_t t47 = -27978027;

	t47 = (x189<=(x190|(x191&x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -13559;
	int16_t x194 = 1;
	volatile int32_t t48 = 239294348;

	t48 = (x193<=(x194|(x195&x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -1;
	static int8_t x198 = INT8_MAX;
	volatile int32_t t49 = 614750140;

	t49 = (x197<=(x198|(x199&x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x202 = 48358696352LLU;
	uint32_t x203 = 10U;
	uint8_t x204 = 4U;

	t50 = (x201<=(x202|(x203&x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x206 = UINT16_MAX;
	int32_t x207 = INT32_MIN;
	volatile int32_t t51 = 118;

	t51 = (x205<=(x206|(x207&x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x209 = UINT32_MAX;
	int8_t x210 = -3;
	int16_t x211 = -1333;
	static uint64_t x212 = UINT64_MAX;
	volatile int32_t t52 = 693559076;

	t52 = (x209<=(x210|(x211&x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 14U;
	volatile int16_t x216 = -1;
	volatile int32_t t53 = 71984342;

	t53 = (x213<=(x214|(x215&x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	int8_t x218 = INT8_MAX;
	int64_t x219 = -1LL;
	uint8_t x220 = 85U;
	static volatile int32_t t54 = 2682817;

	t54 = (x217<=(x218|(x219&x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x222 = 4;
	uint8_t x223 = 0U;

	t55 = (x221<=(x222|(x223&x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = 1896;
	int16_t x226 = INT16_MIN;
	uint16_t x227 = 666U;
	volatile int32_t x228 = -779;
	volatile int32_t t56 = -1;

	t56 = (x225<=(x226|(x227&x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x229 = UINT64_MAX;
	uint16_t x231 = 29U;
	int32_t t57 = 176;

	t57 = (x229<=(x230|(x231&x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = UINT64_MAX;
	int8_t x234 = -3;
	int32_t x235 = 207;
	uint32_t x236 = UINT32_MAX;
	volatile int32_t t58 = 0;

	t58 = (x233<=(x234|(x235&x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MAX;
	volatile int8_t x238 = -1;
	int32_t x239 = INT32_MIN;
	int8_t x240 = 0;
	int32_t t59 = 41;

	t59 = (x237<=(x238|(x239&x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x243 = 279040665LLU;
	static int32_t t60 = -476801;

	t60 = (x241<=(x242|(x243&x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = INT32_MAX;
	int8_t x248 = INT8_MIN;
	static volatile int32_t t61 = -3336341;

	t61 = (x245<=(x246|(x247&x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	static uint16_t x250 = UINT16_MAX;
	uint64_t x251 = 362LLU;
	static uint16_t x252 = 959U;
	int32_t t62 = -18270714;

	t62 = (x249<=(x250|(x251&x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x253 = INT8_MAX;
	volatile int8_t x254 = 5;
	static uint8_t x255 = 96U;
	int8_t x256 = INT8_MAX;
	int32_t t63 = 1;

	t63 = (x253<=(x254|(x255&x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = 32634198094530561LL;
	static volatile uint64_t x259 = 8315296999898LLU;
	uint64_t x260 = 274597067315LLU;
	volatile int32_t t64 = -31216;

	t64 = (x257<=(x258|(x259&x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MAX;
	int32_t x263 = -1;
	volatile uint8_t x264 = 26U;
	int32_t t65 = 1408;

	t65 = (x261<=(x262|(x263&x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 1U;
	int8_t x267 = -1;
	static uint32_t x268 = 672798169U;
	static int32_t t66 = -354175;

	t66 = (x265<=(x266|(x267&x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = UINT64_MAX;
	static uint32_t x271 = UINT32_MAX;
	static int32_t x272 = -30111074;

	t67 = (x269<=(x270|(x271&x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x274 = -17;
	int16_t x275 = -11;
	static int32_t t68 = -97;

	t68 = (x273<=(x274|(x275&x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = UINT64_MAX;
	static volatile int16_t x278 = INT16_MIN;
	int64_t x279 = INT64_MAX;
	volatile int16_t x280 = 58;
	int32_t t69 = -7;

	t69 = (x277<=(x278|(x279&x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x281 = 257082655U;
	static uint32_t x282 = 9185U;
	uint64_t x283 = 9854661430807LLU;
	static uint16_t x284 = 49U;
	volatile int32_t t70 = -70;

	t70 = (x281<=(x282|(x283&x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MIN;
	int8_t x286 = -1;
	int32_t x287 = -84;
	volatile uint8_t x288 = 0U;

	t71 = (x285<=(x286|(x287&x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x290 = 115;
	uint32_t x291 = 3012027U;
	static volatile int32_t t72 = 10214129;

	t72 = (x289<=(x290|(x291&x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = 3U;
	static volatile uint64_t x294 = 1645843386644026713LLU;
	uint16_t x296 = UINT16_MAX;
	volatile int32_t t73 = 19;

	t73 = (x293<=(x294|(x295&x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x297 = UINT16_MAX;
	int8_t x298 = INT8_MIN;
	uint16_t x300 = 20750U;

	t74 = (x297<=(x298|(x299&x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	int16_t x302 = INT16_MIN;
	int16_t x303 = INT16_MAX;
	volatile int8_t x304 = -1;
	volatile int32_t t75 = 0;

	t75 = (x301<=(x302|(x303&x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x305 = 6462979974LLU;
	static int64_t x307 = -1156LL;
	int32_t x308 = 1;
	int32_t t76 = -16528928;

	t76 = (x305<=(x306|(x307&x308)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = 14182451;
	int32_t x310 = -78568;
	uint8_t x312 = 0U;
	int32_t t77 = 1972;

	t77 = (x309<=(x310|(x311&x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x313 = 43;
	static uint32_t x315 = 22689U;
	int16_t x316 = INT16_MIN;
	int32_t t78 = -64745986;

	t78 = (x313<=(x314|(x315&x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	int32_t x319 = -1;
	int8_t x320 = INT8_MIN;
	volatile int32_t t79 = -1;

	t79 = (x317<=(x318|(x319&x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	uint32_t x322 = UINT32_MAX;
	int16_t x323 = -181;
	volatile int8_t x324 = INT8_MIN;
	static volatile int32_t t80 = -6568404;

	t80 = (x321<=(x322|(x323&x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint16_t x325 = UINT16_MAX;
	static volatile int32_t x326 = INT32_MAX;
	static int32_t x327 = INT32_MIN;
	static uint8_t x328 = UINT8_MAX;
	int32_t t81 = 3;

	t81 = (x325<=(x326|(x327&x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MIN;
	int8_t x331 = -1;
	volatile uint64_t x332 = 650558233520389LLU;
	static int32_t t82 = 216656360;

	t82 = (x329<=(x330|(x331&x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MAX;
	volatile int8_t x334 = -1;
	volatile int32_t t83 = 176126639;

	t83 = (x333<=(x334|(x335&x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x337 = 1LLU;
	uint16_t x338 = 16U;
	int8_t x339 = INT8_MAX;
	int64_t x340 = 718736354006LL;

	t84 = (x337<=(x338|(x339&x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 0LLU;
	static int8_t x344 = INT8_MIN;

	t85 = (x341<=(x342|(x343&x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -3276981;
	uint16_t x346 = 2578U;
	int16_t x347 = 1550;
	static int32_t t86 = -5300469;

	t86 = (x345<=(x346|(x347&x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = 9U;
	int64_t x350 = INT64_MAX;
	int8_t x351 = -1;
	static uint32_t x352 = 98U;
	static int32_t t87 = -7887;

	t87 = (x349<=(x350|(x351&x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 43276LLU;
	int32_t t88 = -1028285;

	t88 = (x353<=(x354|(x355&x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = UINT16_MAX;
	int16_t x358 = INT16_MIN;
	int64_t x359 = INT64_MIN;
	volatile uint32_t x360 = 253793U;
	static volatile int32_t t89 = 1;

	t89 = (x357<=(x358|(x359&x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x362 = 56LL;
	uint8_t x363 = 2U;
	uint16_t x364 = 54U;

	t90 = (x361<=(x362|(x363&x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x366 = INT8_MIN;
	int8_t x367 = INT8_MIN;
	uint32_t x368 = UINT32_MAX;
	volatile int32_t t91 = 300750716;

	t91 = (x365<=(x366|(x367&x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 5679065920179LLU;
	volatile int32_t x370 = -1149;
	int64_t x371 = -2394LL;
	int8_t x372 = -4;
	volatile int32_t t92 = -1223664;

	t92 = (x369<=(x370|(x371&x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = INT64_MIN;
	int64_t x374 = -3953217LL;
	int32_t x375 = INT32_MAX;
	static int32_t t93 = -526042;

	t93 = (x373<=(x374|(x375&x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -1;
	int32_t x378 = INT32_MIN;
	volatile int16_t x379 = INT16_MIN;
	int8_t x380 = 1;
	volatile int32_t t94 = 73;

	t94 = (x377<=(x378|(x379&x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x382 = 250872U;
	int16_t x383 = -1;
	uint8_t x384 = UINT8_MAX;
	static int32_t t95 = 6889255;

	t95 = (x381<=(x382|(x383&x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x387 = INT8_MAX;
	int32_t t96 = 13650;

	t96 = (x385<=(x386|(x387&x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -1;
	uint8_t x390 = 1U;
	uint64_t x391 = UINT64_MAX;
	uint32_t x392 = 2603387U;
	volatile int32_t t97 = -4947022;

	t97 = (x389<=(x390|(x391&x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 3U;
	volatile int16_t x394 = INT16_MIN;
	int16_t x395 = -1;
	int64_t x396 = -1LL;
	static int32_t t98 = 5;

	t98 = (x393<=(x394|(x395&x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = -15;
	uint64_t x398 = UINT64_MAX;
	volatile int32_t t99 = -438;

	t99 = (x397<=(x398|(x399&x400)));

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

