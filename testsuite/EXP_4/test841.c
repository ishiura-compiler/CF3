#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 656113025;
volatile int8_t x6 = -1;
static volatile uint32_t x7 = 455U;
uint32_t x11 = 725U;
int32_t t2 = 338087181;
uint32_t x22 = 445U;
uint8_t x25 = 1U;
static volatile int32_t t6 = -65;
uint16_t x35 = 4U;
int16_t x36 = INT16_MIN;
uint8_t x39 = 13U;
static int8_t x41 = -1;
uint64_t x43 = 31109475LLU;
int16_t x44 = -1;
static uint8_t x49 = UINT8_MAX;
int32_t t13 = 524096;
volatile int32_t t15 = -983219;
int32_t x70 = 21575;
volatile int32_t t19 = -120777771;
int16_t x84 = -1;
int64_t x85 = -2181770103542LL;
int64_t x87 = INT64_MIN;
int16_t x93 = -1047;
uint32_t x95 = UINT32_MAX;
int16_t x96 = INT16_MIN;
int32_t x97 = INT32_MIN;
int32_t x100 = INT32_MAX;
static int64_t x103 = INT64_MAX;
static int64_t x105 = -1LL;
int8_t x111 = INT8_MIN;
static volatile int32_t t27 = 32970746;
static uint16_t x114 = UINT16_MAX;
volatile uint8_t x117 = 0U;
uint64_t x119 = 248577805LLU;
static volatile int32_t t30 = 285397633;
int32_t t32 = 189262118;
uint16_t x141 = 8854U;
int16_t x142 = -66;
uint8_t x145 = 19U;
volatile uint64_t x148 = UINT64_MAX;
uint32_t x152 = 10U;
int32_t x156 = INT32_MAX;
static uint64_t x160 = 15479994LLU;
int32_t x162 = INT32_MAX;
int32_t t41 = 12259;
int16_t x171 = 155;
int64_t x172 = -3518893870069852298LL;
int16_t x174 = INT16_MIN;
volatile uint64_t x177 = 895743837LLU;
int64_t x184 = INT64_MAX;
volatile int8_t x196 = INT8_MIN;
volatile int8_t x197 = INT8_MIN;
static int32_t t49 = 623977;
volatile int32_t t50 = -702;
volatile int16_t x205 = -1;
volatile int8_t x210 = 1;
volatile uint64_t x215 = UINT64_MAX;
static uint16_t x218 = UINT16_MAX;
uint32_t x221 = UINT32_MAX;
uint64_t x222 = 6494248988LLU;
uint64_t x223 = 972690LLU;
uint8_t x224 = UINT8_MAX;
uint64_t x228 = UINT64_MAX;
volatile int16_t x232 = -1;
uint64_t x247 = 623642963948781LLU;
static int32_t t60 = 3720752;
int8_t x249 = INT8_MAX;
int32_t t61 = -63001691;
volatile int16_t x253 = -256;
int32_t x256 = INT32_MIN;
int16_t x266 = INT16_MIN;
int16_t x268 = -1;
int8_t x270 = INT8_MAX;
static uint32_t x271 = 7013U;
uint8_t x274 = UINT8_MAX;
int64_t x276 = INT64_MIN;
int32_t t67 = -244001;
uint64_t x284 = 85197LLU;
volatile int32_t t68 = 16;
uint32_t x290 = 58200744U;
static int16_t x291 = -1;
uint64_t x299 = 794636678LLU;
int32_t t72 = -10706904;
uint8_t x303 = 15U;
static volatile int32_t t73 = 27;
int16_t x306 = INT16_MAX;
int16_t x323 = INT16_MAX;
static uint8_t x324 = UINT8_MAX;
int32_t t80 = -310;
volatile int8_t x345 = -1;
int64_t x348 = INT64_MAX;
uint64_t x351 = 18011434993173LLU;
volatile int32_t t84 = 22546494;
uint16_t x353 = 331U;
int32_t x355 = INT32_MAX;
volatile int32_t t85 = -937;
static int8_t x374 = INT8_MAX;
uint8_t x379 = 2U;
int64_t x401 = INT64_MIN;
volatile int32_t x402 = INT32_MAX;
volatile int64_t x405 = INT64_MAX;
static uint16_t x409 = 8U;
volatile uint32_t x411 = 5837290U;
uint8_t x412 = UINT8_MAX;
int32_t t99 = -257223;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	uint16_t x2 = 3U;
	volatile int8_t x3 = -1;
	int64_t x4 = 2LL;

	t0 = (x1<(x2^(x3%x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 423795564LL;
	static uint64_t x8 = 5792524464124547LLU;
	int32_t t1 = 53;

	t1 = (x5<(x6^(x7%x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MAX;
	uint16_t x10 = UINT16_MAX;
	static volatile uint16_t x12 = UINT16_MAX;

	t2 = (x9<(x10^(x11%x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	int64_t x14 = INT64_MIN;
	uint16_t x15 = 0U;
	volatile uint32_t x16 = 181580331U;
	int32_t t3 = 13;

	t3 = (x13<(x14^(x15%x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int8_t x18 = INT8_MIN;
	uint16_t x19 = UINT16_MAX;
	int16_t x20 = INT16_MIN;
	volatile int32_t t4 = -29;

	t4 = (x17<(x18^(x19%x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = -223284;
	uint8_t x23 = 49U;
	static int32_t x24 = INT32_MAX;
	int32_t t5 = -514581699;

	t5 = (x21<(x22^(x23%x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x26 = 32499867283LLU;
	int64_t x27 = INT64_MIN;
	uint16_t x28 = 4816U;

	t6 = (x25<(x26^(x27%x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	int32_t x30 = 22190562;
	int8_t x31 = -1;
	int8_t x32 = INT8_MIN;
	int32_t t7 = -1418;

	t7 = (x29<(x30^(x31%x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint32_t x33 = 107650343U;
	int32_t x34 = INT32_MAX;
	volatile int32_t t8 = 32290277;

	t8 = (x33<(x34^(x35%x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	volatile uint32_t x38 = UINT32_MAX;
	int16_t x40 = INT16_MIN;
	int32_t t9 = 1;

	t9 = (x37<(x38^(x39%x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = INT16_MIN;
	volatile int32_t t10 = -245837;

	t10 = (x41<(x42^(x43%x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = UINT16_MAX;
	int32_t x46 = -2755301;
	int16_t x47 = -88;
	uint32_t x48 = 599675019U;
	volatile int32_t t11 = 26;

	t11 = (x45<(x46^(x47%x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = -1LL;
	int32_t x51 = -1495646;
	volatile int64_t x52 = INT64_MIN;
	static int32_t t12 = -21307582;

	t12 = (x49<(x50^(x51%x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = INT16_MIN;
	volatile uint8_t x54 = 0U;
	int16_t x55 = -8590;
	int32_t x56 = INT32_MIN;

	t13 = (x53<(x54^(x55%x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 20;
	int64_t x58 = -1LL;
	int16_t x59 = INT16_MAX;
	uint8_t x60 = UINT8_MAX;
	int32_t t14 = 252493953;

	t14 = (x57<(x58^(x59%x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	int32_t x62 = -1;
	static int16_t x63 = 7;
	int16_t x64 = 1;

	t15 = (x61<(x62^(x63%x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = 63996088418654LL;
	static int8_t x66 = INT8_MAX;
	int16_t x67 = -11325;
	static int64_t x68 = INT64_MAX;
	volatile int32_t t16 = -2449;

	t16 = (x65<(x66^(x67%x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MAX;
	static volatile int32_t x71 = 991;
	volatile int8_t x72 = INT8_MIN;
	volatile int32_t t17 = -80253;

	t17 = (x69<(x70^(x71%x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -1;
	int64_t x74 = INT64_MIN;
	int64_t x75 = -1LL;
	static uint32_t x76 = 29U;
	volatile int32_t t18 = -532;

	t18 = (x73<(x74^(x75%x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	int64_t x78 = INT64_MIN;
	int32_t x79 = -1;
	uint16_t x80 = UINT16_MAX;

	t19 = (x77<(x78^(x79%x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 181080202991158LLU;
	static uint32_t x82 = UINT32_MAX;
	int8_t x83 = -1;
	static int32_t t20 = 1;

	t20 = (x81<(x82^(x83%x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = INT64_MIN;
	volatile int64_t x88 = INT64_MAX;
	int32_t t21 = 449;

	t21 = (x85<(x86^(x87%x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = 27LL;
	uint16_t x90 = 33U;
	int16_t x91 = INT16_MIN;
	uint64_t x92 = 7517806LLU;
	static volatile int32_t t22 = -1896;

	t22 = (x89<(x90^(x91%x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x94 = 115U;
	volatile int32_t t23 = 23;

	t23 = (x93<(x94^(x95%x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x98 = INT64_MAX;
	int32_t x99 = INT32_MAX;
	int32_t t24 = -227055469;

	t24 = (x97<(x98^(x99%x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MAX;
	static int64_t x102 = INT64_MIN;
	int16_t x104 = INT16_MIN;
	int32_t t25 = -230;

	t25 = (x101<(x102^(x103%x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x106 = UINT32_MAX;
	int16_t x107 = INT16_MIN;
	int16_t x108 = 109;
	int32_t t26 = -61;

	t26 = (x105<(x106^(x107%x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 482U;
	volatile int16_t x110 = INT16_MIN;
	int8_t x112 = INT8_MAX;

	t27 = (x109<(x110^(x111%x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x113 = INT16_MIN;
	static int32_t x115 = -15945598;
	uint64_t x116 = UINT64_MAX;
	volatile int32_t t28 = 474772;

	t28 = (x113<(x114^(x115%x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x118 = -55;
	volatile int16_t x120 = INT16_MIN;
	volatile int32_t t29 = -22560;

	t29 = (x117<(x118^(x119%x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -1;
	int32_t x122 = -1;
	int32_t x123 = -17080;
	uint16_t x124 = 25584U;

	t30 = (x121<(x122^(x123%x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x125 = 0U;
	volatile int16_t x126 = -5889;
	int8_t x127 = INT8_MIN;
	int32_t x128 = INT32_MIN;
	int32_t t31 = 33;

	t31 = (x125<(x126^(x127%x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 573U;
	uint8_t x130 = UINT8_MAX;
	int16_t x131 = INT16_MIN;
	int16_t x132 = INT16_MAX;

	t32 = (x129<(x130^(x131%x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x133 = UINT32_MAX;
	int64_t x134 = -1LL;
	volatile int8_t x135 = 1;
	int32_t x136 = INT32_MIN;
	volatile int32_t t33 = 20;

	t33 = (x133<(x134^(x135%x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	int32_t x138 = 388;
	static uint8_t x139 = 116U;
	static int32_t x140 = -99776;
	volatile int32_t t34 = -2913531;

	t34 = (x137<(x138^(x139%x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x143 = 52U;
	volatile int8_t x144 = INT8_MIN;
	static int32_t t35 = 112939997;

	t35 = (x141<(x142^(x143%x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = INT8_MAX;
	int16_t x147 = INT16_MAX;
	static int32_t t36 = -4224;

	t36 = (x145<(x146^(x147%x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = UINT32_MAX;
	int8_t x150 = INT8_MAX;
	uint32_t x151 = 148964445U;
	int32_t t37 = 41;

	t37 = (x149<(x150^(x151%x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x153 = UINT16_MAX;
	uint32_t x154 = 7395U;
	int32_t x155 = INT32_MIN;
	int32_t t38 = 514688;

	t38 = (x153<(x154^(x155%x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x157 = UINT8_MAX;
	int16_t x158 = 217;
	static int32_t x159 = -145100729;
	int32_t t39 = 365;

	t39 = (x157<(x158^(x159%x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x161 = INT16_MIN;
	int8_t x163 = -4;
	static uint32_t x164 = 420U;
	volatile int32_t t40 = 37626830;

	t40 = (x161<(x162^(x163%x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = INT8_MIN;
	int64_t x166 = -114790229371829006LL;
	volatile int64_t x167 = -1LL;
	int16_t x168 = INT16_MAX;

	t41 = (x165<(x166^(x167%x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 11U;
	int64_t x170 = INT64_MIN;
	static volatile int32_t t42 = -28459730;

	t42 = (x169<(x170^(x171%x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 61U;
	volatile uint8_t x175 = 0U;
	int16_t x176 = INT16_MIN;
	int32_t t43 = -18;

	t43 = (x173<(x174^(x175%x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x178 = 2U;
	volatile uint32_t x179 = 1936486U;
	int16_t x180 = INT16_MIN;
	static int32_t t44 = 4;

	t44 = (x177<(x178^(x179%x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	static int32_t x182 = INT32_MAX;
	uint8_t x183 = 31U;
	int32_t t45 = -257834148;

	t45 = (x181<(x182^(x183%x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MAX;
	int8_t x186 = INT8_MIN;
	int8_t x187 = -11;
	int16_t x188 = 4;
	int32_t t46 = -400175;

	t46 = (x185<(x186^(x187%x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MIN;
	int32_t x190 = -67216;
	volatile int16_t x191 = -1;
	static int16_t x192 = INT16_MIN;
	volatile int32_t t47 = -3593;

	t47 = (x189<(x190^(x191%x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x193 = INT16_MIN;
	uint8_t x194 = UINT8_MAX;
	volatile int64_t x195 = 1659812LL;
	int32_t t48 = -72940782;

	t48 = (x193<(x194^(x195%x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x198 = -1;
	uint64_t x199 = 1840177469777604LLU;
	volatile int64_t x200 = -1LL;

	t49 = (x197<(x198^(x199%x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x201 = UINT16_MAX;
	int16_t x202 = -1;
	uint64_t x203 = 1973464183023860LLU;
	uint32_t x204 = UINT32_MAX;

	t50 = (x201<(x202^(x203%x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x206 = UINT16_MAX;
	uint64_t x207 = 717418557LLU;
	uint8_t x208 = 6U;
	volatile int32_t t51 = 53248950;

	t51 = (x205<(x206^(x207%x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = UINT64_MAX;
	int32_t x211 = INT32_MIN;
	volatile int64_t x212 = INT64_MIN;
	int32_t t52 = 3081058;

	t52 = (x209<(x210^(x211%x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	int64_t x214 = INT64_MAX;
	uint8_t x216 = 24U;
	static volatile int32_t t53 = 7;

	t53 = (x213<(x214^(x215%x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x217 = -1;
	static int8_t x219 = -1;
	int64_t x220 = -21949880912390029LL;
	int32_t t54 = -709593965;

	t54 = (x217<(x218^(x219%x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t t55 = -2;

	t55 = (x221<(x222^(x223%x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -1;
	int32_t x226 = INT32_MAX;
	int8_t x227 = -1;
	volatile int32_t t56 = 20;

	t56 = (x225<(x226^(x227%x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x229 = 28U;
	int8_t x230 = INT8_MAX;
	int32_t x231 = INT32_MAX;
	volatile int32_t t57 = -13;

	t57 = (x229<(x230^(x231%x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x237 = 9000U;
	static volatile int16_t x238 = INT16_MIN;
	int16_t x239 = -3;
	static uint8_t x240 = UINT8_MAX;
	static int32_t t58 = 5990842;

	t58 = (x237<(x238^(x239%x240)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x241 = INT8_MIN;
	int16_t x242 = INT16_MIN;
	static int32_t x243 = 2;
	static volatile uint32_t x244 = UINT32_MAX;
	int32_t t59 = -169808;

	t59 = (x241<(x242^(x243%x244)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x245 = -4804;
	volatile int16_t x246 = -38;
	int32_t x248 = -31078;

	t60 = (x245<(x246^(x247%x248)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x250 = 1U;
	uint16_t x251 = 198U;
	static int16_t x252 = INT16_MIN;

	t61 = (x249<(x250^(x251%x252)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x254 = -1;
	volatile uint64_t x255 = 7590835201120597540LLU;
	int32_t t62 = 119189705;

	t62 = (x253<(x254^(x255%x256)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x261 = -1;
	int16_t x262 = INT16_MIN;
	static int64_t x263 = -766426213040507LL;
	volatile int16_t x264 = INT16_MIN;
	int32_t t63 = -13448382;

	t63 = (x261<(x262^(x263%x264)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x265 = 139U;
	int8_t x267 = INT8_MIN;
	volatile int32_t t64 = 108175752;

	t64 = (x265<(x266^(x267%x268)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x269 = -1;
	int64_t x272 = -1LL;
	volatile int32_t t65 = -13364106;

	t65 = (x269<(x270^(x271%x272)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x273 = 634289285515LL;
	uint16_t x275 = 258U;
	volatile int32_t t66 = 1;

	t66 = (x273<(x274^(x275%x276)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x277 = 191;
	static uint64_t x278 = UINT64_MAX;
	static uint16_t x279 = UINT16_MAX;
	int32_t x280 = -21184469;

	t67 = (x277<(x278^(x279%x280)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x281 = 1U;
	uint16_t x282 = UINT16_MAX;
	uint64_t x283 = 2792568059669004721LLU;

	t68 = (x281<(x282^(x283%x284)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = INT64_MAX;
	int32_t x286 = INT32_MIN;
	uint8_t x287 = 1U;
	volatile uint16_t x288 = 4353U;
	volatile int32_t t69 = -176;

	t69 = (x285<(x286^(x287%x288)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x289 = 139;
	int16_t x292 = INT16_MIN;
	volatile int32_t t70 = -2999790;

	t70 = (x289<(x290^(x291%x292)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x293 = -63669443388181058LL;
	int16_t x294 = INT16_MAX;
	static int32_t x295 = 415121;
	int32_t x296 = 842557408;
	volatile int32_t t71 = -425830;

	t71 = (x293<(x294^(x295%x296)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x297 = INT32_MAX;
	uint32_t x298 = UINT32_MAX;
	static volatile int16_t x300 = 11;

	t72 = (x297<(x298^(x299%x300)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x301 = 920908178226633645LLU;
	volatile int8_t x302 = -1;
	volatile int32_t x304 = INT32_MIN;

	t73 = (x301<(x302^(x303%x304)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x305 = INT16_MAX;
	int16_t x307 = -1;
	static int64_t x308 = INT64_MAX;
	int32_t t74 = -9;

	t74 = (x305<(x306^(x307%x308)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x309 = -33;
	volatile int8_t x310 = 7;
	volatile uint16_t x311 = UINT16_MAX;
	uint64_t x312 = 1910053635114442534LLU;
	int32_t t75 = 1363;

	t75 = (x309<(x310^(x311%x312)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x313 = UINT64_MAX;
	uint16_t x314 = 10U;
	uint32_t x315 = UINT32_MAX;
	volatile int64_t x316 = INT64_MIN;
	volatile int32_t t76 = 2801633;

	t76 = (x313<(x314^(x315%x316)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x317 = -12;
	int64_t x318 = -1LL;
	int64_t x319 = -1LL;
	static int64_t x320 = 8158191900LL;
	int32_t t77 = -1;

	t77 = (x317<(x318^(x319%x320)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x321 = UINT16_MAX;
	int8_t x322 = -3;
	int32_t t78 = -31;

	t78 = (x321<(x322^(x323%x324)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x329 = -1;
	int32_t x330 = INT32_MIN;
	static int64_t x331 = -78357436452LL;
	static int64_t x332 = 3634355834LL;
	volatile int32_t t79 = -122048698;

	t79 = (x329<(x330^(x331%x332)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x333 = INT8_MIN;
	volatile int8_t x334 = -1;
	int8_t x335 = INT8_MIN;
	uint8_t x336 = 13U;

	t80 = (x333<(x334^(x335%x336)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x337 = 1U;
	uint16_t x338 = 3642U;
	volatile int16_t x339 = 1;
	static int16_t x340 = INT16_MIN;
	int32_t t81 = 2;

	t81 = (x337<(x338^(x339%x340)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x341 = 631U;
	volatile int32_t x342 = INT32_MIN;
	int16_t x343 = 446;
	static int32_t x344 = -8;
	int32_t t82 = 800;

	t82 = (x341<(x342^(x343%x344)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x346 = INT8_MAX;
	static int16_t x347 = INT16_MAX;
	int32_t t83 = 45;

	t83 = (x345<(x346^(x347%x348)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x349 = UINT64_MAX;
	int64_t x350 = INT64_MIN;
	volatile int16_t x352 = INT16_MIN;

	t84 = (x349<(x350^(x351%x352)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x354 = INT32_MIN;
	static int8_t x356 = 18;

	t85 = (x353<(x354^(x355%x356)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x357 = INT8_MIN;
	uint32_t x358 = UINT32_MAX;
	uint16_t x359 = UINT16_MAX;
	volatile int32_t x360 = 601;
	int32_t t86 = -54642;

	t86 = (x357<(x358^(x359%x360)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x361 = INT64_MAX;
	static uint16_t x362 = 62U;
	uint64_t x363 = 499LLU;
	int16_t x364 = INT16_MIN;
	int32_t t87 = -5;

	t87 = (x361<(x362^(x363%x364)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x365 = INT32_MIN;
	int16_t x366 = INT16_MIN;
	static int64_t x367 = -1LL;
	uint32_t x368 = UINT32_MAX;
	volatile int32_t t88 = 2;

	t88 = (x365<(x366^(x367%x368)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x369 = -58;
	uint32_t x370 = 0U;
	int64_t x371 = -1LL;
	int64_t x372 = -1LL;
	int32_t t89 = -2829;

	t89 = (x369<(x370^(x371%x372)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x373 = INT8_MIN;
	int16_t x375 = -1;
	static int16_t x376 = 1;
	volatile int32_t t90 = 3737;

	t90 = (x373<(x374^(x375%x376)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x377 = INT16_MIN;
	static int32_t x378 = INT32_MIN;
	static int32_t x380 = -1;
	volatile int32_t t91 = -15;

	t91 = (x377<(x378^(x379%x380)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x381 = 0U;
	uint32_t x382 = UINT32_MAX;
	static uint8_t x383 = UINT8_MAX;
	uint64_t x384 = UINT64_MAX;
	int32_t t92 = 2584;

	t92 = (x381<(x382^(x383%x384)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x385 = 17267527U;
	int16_t x386 = INT16_MIN;
	int32_t x387 = INT32_MAX;
	uint64_t x388 = UINT64_MAX;
	int32_t t93 = 544823;

	t93 = (x385<(x386^(x387%x388)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x389 = 3073349LLU;
	static uint16_t x390 = 15691U;
	static int16_t x391 = -5363;
	static int64_t x392 = -1LL;
	volatile int32_t t94 = -57;

	t94 = (x389<(x390^(x391%x392)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x393 = -1LL;
	volatile int16_t x394 = 212;
	volatile uint16_t x395 = UINT16_MAX;
	static uint32_t x396 = 23U;
	int32_t t95 = 5098;

	t95 = (x393<(x394^(x395%x396)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x397 = INT64_MIN;
	int32_t x398 = 29959244;
	static int16_t x399 = INT16_MAX;
	int64_t x400 = 1891380090178053570LL;
	int32_t t96 = -31699373;

	t96 = (x397<(x398^(x399%x400)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x403 = INT16_MIN;
	uint16_t x404 = UINT16_MAX;
	int32_t t97 = -4415;

	t97 = (x401<(x402^(x403%x404)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x406 = 5U;
	volatile uint32_t x407 = 903U;
	int16_t x408 = INT16_MIN;
	volatile int32_t t98 = 0;

	t98 = (x405<(x406^(x407%x408)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x410 = INT64_MIN;

	t99 = (x409<(x410^(x411%x412)));

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

