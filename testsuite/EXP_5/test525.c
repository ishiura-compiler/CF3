#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x3 = 37U;
int8_t x11 = 54;
uint64_t t2 = 12754907682LLU;
int16_t x20 = -57;
int8_t x25 = INT8_MIN;
uint64_t x27 = 257034821713044LLU;
static uint8_t x38 = 121U;
static volatile uint8_t x40 = 5U;
volatile int64_t x51 = 226LL;
uint32_t x66 = 601984870U;
uint32_t t15 = 388557U;
volatile uint64_t t16 = 884LLU;
uint32_t x86 = 8U;
static int16_t x96 = INT16_MAX;
int32_t x101 = -146320;
volatile int64_t x102 = -1LL;
volatile int8_t x103 = 1;
uint8_t x106 = 85U;
volatile uint8_t x107 = 20U;
int32_t x122 = -1;
static int32_t t29 = -1480;
volatile int64_t x129 = INT64_MIN;
static uint64_t x130 = 398027107409014287LLU;
static uint32_t t32 = 98U;
int8_t x145 = -1;
static volatile uint64_t x147 = UINT64_MAX;
static int32_t x149 = -1;
static volatile int16_t x150 = INT16_MIN;
volatile int64_t x151 = 750665712525929477LL;
uint32_t x154 = 4047U;
static uint64_t x155 = 1132868691390181LLU;
uint32_t t37 = 1U;
static uint16_t x171 = 353U;
static volatile int32_t x174 = INT32_MIN;
int8_t x178 = INT8_MAX;
int8_t x195 = -1;
int16_t x212 = -702;
uint64_t x213 = UINT64_MAX;
uint32_t x223 = UINT32_MAX;
int8_t x225 = INT8_MAX;
volatile int16_t x226 = 0;
int32_t x227 = -1548506;
int64_t x228 = -1LL;
uint64_t x236 = 1390212650179895LLU;
int16_t x238 = INT16_MIN;
int8_t x246 = INT8_MIN;
int32_t x248 = -1;
uint64_t t59 = 47LLU;
static volatile int32_t x253 = INT32_MIN;
volatile int32_t t61 = 14;
uint8_t x257 = 6U;
int16_t x260 = INT16_MIN;
static int8_t x268 = 0;
int64_t x270 = INT64_MIN;
uint16_t x271 = 2344U;
int64_t x272 = -33673694LL;
int32_t x274 = INT32_MIN;
volatile int64_t t66 = 128833284445652LL;
int8_t x279 = INT8_MIN;
int64_t x282 = INT64_MAX;
int16_t x285 = INT16_MIN;
int32_t t69 = -11654;
uint32_t x293 = 115840U;
int8_t x294 = 0;
int32_t x301 = 75;
volatile int64_t t74 = 85195103762271541LL;
int8_t x314 = INT8_MIN;
int8_t x325 = -1;
int8_t x326 = INT8_MAX;
uint16_t x327 = UINT16_MAX;
volatile int64_t t79 = 21648726920611LL;
static int8_t x333 = -1;
int8_t x336 = INT8_MIN;
volatile int64_t t80 = -34355527618LL;
static uint8_t x359 = 3U;
static volatile int8_t x366 = -1;
static int16_t x369 = INT16_MIN;
int8_t x371 = INT8_MIN;
static int32_t x386 = INT32_MIN;
static uint64_t x392 = 23279LLU;
volatile uint64_t t91 = 17LLU;
int32_t x396 = -1;
static int64_t x399 = INT64_MAX;
volatile int16_t x402 = INT16_MAX;
int64_t x407 = INT64_MAX;
volatile int64_t t95 = 288LL;
static int16_t x411 = INT16_MIN;
static int64_t x414 = INT64_MIN;
int64_t t97 = -1762279826592354LL;
uint64_t x420 = UINT64_MAX;


void f0(void) {
	int8_t x1 = -6;
	int16_t x2 = INT16_MIN;
	uint32_t x4 = 300914652U;
	uint32_t t0 = 1U;

	t0 = (x1%((x2/x3)-x4));

	if (t0 != 184835335U) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -1;
	uint16_t x6 = 1U;
	static int8_t x7 = INT8_MIN;
	uint16_t x8 = 91U;
	volatile int32_t t1 = -30582058;

	t1 = (x5%((x6/x7)-x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 5U;
	uint64_t x10 = 7262604329827LLU;
	volatile uint16_t x12 = UINT16_MAX;

	t2 = (x9%((x10/x11)-x12));

	if (t2 != 5LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	static int32_t x14 = -1;
	int32_t x15 = INT32_MIN;
	int64_t x16 = -1LL;
	int64_t t3 = -8893049156620LL;

	t3 = (x13%((x14/x15)-x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = -1;
	int64_t x18 = -531230602537829923LL;
	uint32_t x19 = 2040292U;
	volatile int64_t t4 = 554263LL;

	t4 = (x17%((x18/x19)-x20));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	uint16_t x22 = 31380U;
	int16_t x23 = 56;
	uint8_t x24 = 5U;
	int32_t t5 = 4549;

	t5 = (x21%((x22/x23)-x24));

	if (t5 != 502) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x26 = 0U;
	int32_t x28 = -1;
	volatile uint64_t t6 = 1827804990842395LLU;

	t6 = (x25%((x26/x27)-x28));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 9U;
	volatile int16_t x30 = INT16_MAX;
	volatile int32_t x31 = INT32_MAX;
	uint32_t x32 = 3033U;
	volatile uint32_t t7 = 16139U;

	t7 = (x29%((x30/x31)-x32));

	if (t7 != 9U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = -170282;
	volatile int64_t x34 = -437LL;
	uint16_t x35 = 11U;
	volatile uint16_t x36 = UINT16_MAX;
	volatile int64_t t8 = 4164925586539978505LL;

	t8 = (x33%((x34/x35)-x36));

	if (t8 != -39134LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	int64_t x39 = -2412989737877054LL;
	int64_t t9 = -249863LL;

	t9 = (x37%((x38/x39)-x40));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = INT16_MIN;
	int64_t x42 = INT64_MIN;
	volatile int8_t x43 = INT8_MAX;
	int32_t x44 = -1;
	int64_t t10 = -11489337801055LL;

	t10 = (x41%((x42/x43)-x44));

	if (t10 != -32768LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 867302910;
	int64_t x46 = 718849330LL;
	static uint16_t x47 = UINT16_MAX;
	uint16_t x48 = 25719U;
	volatile int64_t t11 = -8176868LL;

	t11 = (x45%((x46/x47)-x48));

	if (t11 != 3114LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 16U;
	volatile uint8_t x50 = 6U;
	static int16_t x52 = -1;
	volatile int64_t t12 = 211268945840626LL;

	t12 = (x49%((x50/x51)-x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	volatile uint32_t x54 = 109275U;
	int8_t x55 = -1;
	volatile int32_t x56 = INT32_MIN;
	volatile uint32_t t13 = 1078U;

	t13 = (x53%((x54/x55)-x56));

	if (t13 != 255U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MAX;
	uint8_t x62 = UINT8_MAX;
	int8_t x63 = -13;
	int16_t x64 = INT16_MAX;
	volatile int64_t t14 = -86193753LL;

	t14 = (x61%((x62/x63)-x64));

	if (t14 != 20157LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = -1;
	uint16_t x67 = UINT16_MAX;
	int32_t x68 = -1;

	t15 = (x65%((x66/x67)-x68));

	if (t15 != 7065U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MIN;
	int8_t x70 = INT8_MAX;
	int64_t x71 = 200012118LL;
	uint64_t x72 = 30LLU;

	t16 = (x69%((x70/x71)-x72));

	if (t16 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = -1;
	uint16_t x74 = 27769U;
	uint64_t x75 = 8349818473LLU;
	static int8_t x76 = INT8_MAX;
	volatile uint64_t t17 = 1125176LLU;

	t17 = (x73%((x74/x75)-x76));

	if (t17 != 126LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x77 = -1;
	volatile uint32_t x78 = UINT32_MAX;
	int64_t x79 = INT64_MIN;
	int32_t x80 = 16;
	volatile int64_t t18 = -197821LL;

	t18 = (x77%((x78/x79)-x80));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = -8190410;
	static int8_t x82 = INT8_MAX;
	int8_t x83 = INT8_MIN;
	int16_t x84 = INT16_MIN;
	static int32_t t19 = -2964;

	t19 = (x81%((x82/x83)-x84));

	if (t19 != -31178) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x85 = -26;
	uint32_t x87 = 1853U;
	static uint64_t x88 = 634814790671LLU;
	uint64_t t20 = 88LLU;

	t20 = (x85%((x86/x87)-x88));

	if (t20 != 634814790645LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MAX;
	volatile int64_t x90 = INT64_MAX;
	volatile uint32_t x91 = 157203575U;
	uint32_t x92 = 714134U;
	static int64_t t21 = -14LL;

	t21 = (x89%((x90/x91)-x92));

	if (t21 != 127LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = -1;
	int64_t x94 = INT64_MIN;
	static uint64_t x95 = UINT64_MAX;
	volatile uint64_t t22 = 131828590LLU;

	t22 = (x93%((x94/x95)-x96));

	if (t22 != 32766LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = 637U;
	int8_t x98 = -1;
	volatile int16_t x99 = -1;
	uint16_t x100 = 19U;
	volatile int32_t t23 = -182;

	t23 = (x97%((x98/x99)-x100));

	if (t23 != 7) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x104 = INT64_MIN;
	static volatile int64_t t24 = -146556146LL;

	t24 = (x101%((x102/x103)-x104));

	if (t24 != -146320LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x105 = 6319545189226873568LLU;
	int32_t x108 = -1;
	volatile uint64_t t25 = 3948282987136LLU;

	t25 = (x105%((x106/x107)-x108));

	if (t25 != 3LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x109 = INT8_MAX;
	int8_t x110 = -14;
	volatile int32_t x111 = INT32_MIN;
	int8_t x112 = 14;
	int32_t t26 = 17548555;

	t26 = (x109%((x110/x111)-x112));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = UINT16_MAX;
	static int8_t x114 = INT8_MAX;
	volatile int16_t x115 = -1;
	uint8_t x116 = 1U;
	volatile int32_t t27 = -102183;

	t27 = (x113%((x114/x115)-x116));

	if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = 144803;
	int8_t x123 = 31;
	uint32_t x124 = 79U;
	static uint32_t t28 = 705170U;

	t28 = (x121%((x122/x123)-x124));

	if (t28 != 144803U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = -1;
	int16_t x126 = 15;
	int32_t x127 = 4000;
	static volatile uint8_t x128 = 5U;

	t29 = (x125%((x126/x127)-x128));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint32_t x131 = UINT32_MAX;
	int8_t x132 = INT8_MAX;
	static volatile uint64_t t30 = 97698077820132191LLU;

	t30 = (x129%((x130/x131)-x132));

	if (t30 != 71792148LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = INT16_MAX;
	uint32_t x134 = 7U;
	uint64_t x135 = 72453672LLU;
	int64_t x136 = -2081040203LL;
	static uint64_t t31 = 32327550677655LLU;

	t31 = (x133%((x134/x135)-x136));

	if (t31 != 32767LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x137 = 34116591U;
	uint8_t x138 = UINT8_MAX;
	int16_t x139 = -1;
	static volatile int8_t x140 = INT8_MIN;

	t32 = (x137%((x138/x139)-x140));

	if (t32 != 34116591U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x141 = 740U;
	static uint8_t x142 = UINT8_MAX;
	int8_t x143 = INT8_MIN;
	static volatile int8_t x144 = INT8_MIN;
	static int32_t t33 = -5;

	t33 = (x141%((x142/x143)-x144));

	if (t33 != 105) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x146 = -1;
	static uint16_t x148 = 428U;
	volatile uint64_t t34 = 3297LLU;

	t34 = (x145%((x146/x147)-x148));

	if (t34 != 426LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x152 = INT64_MAX;
	int64_t t35 = 88LL;

	t35 = (x149%((x150/x151)-x152));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x153 = -1LL;
	uint64_t x156 = 462600191652057LLU;
	uint64_t t36 = 2968LLU;

	t36 = (x153%((x154/x155)-x156));

	if (t36 != 462600191652056LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x157 = INT8_MAX;
	uint16_t x158 = UINT16_MAX;
	uint32_t x159 = 392532U;
	int16_t x160 = INT16_MIN;

	t37 = (x157%((x158/x159)-x160));

	if (t37 != 127U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x161 = -1;
	static int8_t x162 = -1;
	int8_t x163 = INT8_MAX;
	int16_t x164 = 46;
	int32_t t38 = -14685682;

	t38 = (x161%((x162/x163)-x164));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x165 = INT32_MIN;
	static uint32_t x166 = UINT32_MAX;
	volatile uint16_t x167 = 162U;
	int16_t x168 = -9401;
	uint32_t t39 = 364385U;

	t39 = (x165%((x166/x167)-x168));

	if (t39 != 25760128U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = 1;
	int16_t x170 = INT16_MIN;
	static uint64_t x172 = UINT64_MAX;
	uint64_t t40 = 1576554180115563369LLU;

	t40 = (x169%((x170/x171)-x172));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x173 = UINT64_MAX;
	static uint32_t x175 = 2364459U;
	int16_t x176 = -6758;
	static uint64_t t41 = 638LLU;

	t41 = (x173%((x174/x175)-x176));

	if (t41 != 4539LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x177 = INT16_MAX;
	int32_t x179 = INT32_MIN;
	volatile int8_t x180 = 8;
	volatile int32_t t42 = -9994;

	t42 = (x177%((x178/x179)-x180));

	if (t42 != 7) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = INT64_MAX;
	volatile int32_t x182 = INT32_MAX;
	int64_t x183 = -1LL;
	int8_t x184 = 26;
	static volatile int64_t t43 = -1067145981235LL;

	t43 = (x181%((x182/x183)-x184));

	if (t43 != 1249LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x185 = -53;
	uint16_t x186 = 15U;
	int16_t x187 = INT16_MIN;
	uint32_t x188 = UINT32_MAX;
	static uint32_t t44 = 1U;

	t44 = (x185%((x186/x187)-x188));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x189 = UINT64_MAX;
	static uint64_t x190 = 0LLU;
	volatile int32_t x191 = -1;
	uint32_t x192 = UINT32_MAX;
	volatile uint64_t t45 = 4163450552LLU;

	t45 = (x189%((x190/x191)-x192));

	if (t45 != 4294967294LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x193 = 31U;
	uint16_t x194 = UINT16_MAX;
	static int16_t x196 = -1;
	static uint32_t t46 = 2U;

	t46 = (x193%((x194/x195)-x196));

	if (t46 != 31U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = INT8_MAX;
	int16_t x198 = 56;
	int8_t x199 = -1;
	int8_t x200 = -1;
	volatile int32_t t47 = -287126;

	t47 = (x197%((x198/x199)-x200));

	if (t47 != 17) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x201 = 213;
	int16_t x202 = -1;
	int32_t x203 = -1;
	uint8_t x204 = UINT8_MAX;
	static int32_t t48 = -98374;

	t48 = (x201%((x202/x203)-x204));

	if (t48 != 213) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = INT8_MIN;
	int16_t x206 = INT16_MIN;
	volatile int32_t x207 = -1;
	int64_t x208 = -1LL;
	volatile int64_t t49 = -113587LL;

	t49 = (x205%((x206/x207)-x208));

	if (t49 != -128LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x209 = 0;
	uint64_t x210 = 11960832597405LLU;
	volatile int8_t x211 = INT8_MIN;
	uint64_t t50 = 75706450219461LLU;

	t50 = (x209%((x210/x211)-x212));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x214 = 1;
	static volatile uint8_t x215 = 1U;
	uint64_t x216 = 3447086LLU;
	static uint64_t t51 = 5178964996LLU;

	t51 = (x213%((x214/x215)-x216));

	if (t51 != 3447084LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x217 = 24U;
	uint64_t x218 = 82844119LLU;
	volatile uint8_t x219 = UINT8_MAX;
	volatile uint8_t x220 = UINT8_MAX;
	uint64_t t52 = 0LLU;

	t52 = (x217%((x218/x219)-x220));

	if (t52 != 24LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x221 = INT16_MIN;
	int64_t x222 = -344551224371914071LL;
	static volatile int8_t x224 = -8;
	int64_t t53 = -200081398170284LL;

	t53 = (x221%((x222/x223)-x224));

	if (t53 != -32768LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t t54 = 820083LL;

	t54 = (x225%((x226/x227)-x228));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x229 = -1;
	static int16_t x230 = -1;
	uint32_t x231 = UINT32_MAX;
	static volatile int16_t x232 = -217;
	volatile uint32_t t55 = 80U;

	t55 = (x229%((x230/x231)-x232));

	if (t55 != 183U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x233 = 2U;
	int16_t x234 = INT16_MAX;
	int64_t x235 = INT64_MIN;
	static volatile uint64_t t56 = 37LLU;

	t56 = (x233%((x234/x235)-x236));

	if (t56 != 2LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = INT16_MIN;
	uint16_t x239 = 3557U;
	static int64_t x240 = -243991LL;
	volatile int64_t t57 = 216LL;

	t57 = (x237%((x238/x239)-x240));

	if (t57 != -32768LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x241 = -3682LL;
	uint64_t x242 = 177345491068777247LLU;
	uint8_t x243 = 2U;
	int8_t x244 = INT8_MIN;
	volatile uint64_t t58 = 5840222321LLU;

	t58 = (x241%((x242/x243)-x244));

	if (t58 != 2813002556687726LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint16_t x245 = UINT16_MAX;
	uint64_t x247 = 771759998LLU;

	t59 = (x245%((x246/x247)-x248));

	if (t59 != 65535LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x249 = 2723185LLU;
	uint32_t x250 = 78519258U;
	uint16_t x251 = 284U;
	int32_t x252 = -126147663;
	uint64_t t60 = 218745791299852168LLU;

	t60 = (x249%((x250/x251)-x252));

	if (t60 != 2723185LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x254 = INT32_MAX;
	uint8_t x255 = UINT8_MAX;
	int16_t x256 = INT16_MIN;

	t61 = (x253%((x254/x255)-x256));

	if (t61 != -98560) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x258 = INT64_MAX;
	int32_t x259 = -1;
	volatile int64_t t62 = 3986LL;

	t62 = (x257%((x258/x259)-x260));

	if (t62 != 6LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x261 = -1;
	int32_t x262 = INT32_MAX;
	int8_t x263 = 7;
	static int8_t x264 = INT8_MIN;
	volatile int32_t t63 = -2716140;

	t63 = (x261%((x262/x263)-x264));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x265 = UINT64_MAX;
	uint32_t x266 = UINT32_MAX;
	int16_t x267 = 12;
	volatile uint64_t t64 = 3105618248380LLU;

	t64 = (x265%((x266/x267)-x268));

	if (t64 != 15LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x269 = UINT8_MAX;
	int64_t t65 = 264314193796LL;

	t65 = (x269%((x270/x271)-x272));

	if (t65 != 255LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x273 = 26U;
	static int64_t x275 = -1LL;
	static int32_t x276 = -8955468;

	t66 = (x273%((x274/x275)-x276));

	if (t66 != 26LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x277 = UINT32_MAX;
	volatile int16_t x278 = -1;
	volatile int64_t x280 = 16LL;
	int64_t t67 = 1093805449181858843LL;

	t67 = (x277%((x278/x279)-x280));

	if (t67 != 15LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x281 = -53464510579LL;
	int32_t x283 = INT32_MIN;
	int64_t x284 = 1519LL;
	int64_t t68 = -91165963LL;

	t68 = (x281%((x282/x283)-x284));

	if (t68 != -1924884811LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x286 = -1;
	int32_t x287 = -2;
	int16_t x288 = 6631;

	t69 = (x285%((x286/x287)-x288));

	if (t69 != -6244) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x289 = -29941349LL;
	int64_t x290 = INT64_MAX;
	uint16_t x291 = UINT16_MAX;
	int32_t x292 = INT32_MIN;
	int64_t t70 = 16668630LL;

	t70 = (x289%((x290/x291)-x292));

	if (t70 != -29941349LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x295 = INT64_MAX;
	static int64_t x296 = INT64_MAX;
	volatile int64_t t71 = 329690177289044711LL;

	t71 = (x293%((x294/x295)-x296));

	if (t71 != 115840LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x297 = -1;
	uint16_t x298 = UINT16_MAX;
	volatile int64_t x299 = -82292585345866LL;
	volatile int32_t x300 = INT32_MIN;
	static int64_t t72 = -4341635031724LL;

	t72 = (x297%((x298/x299)-x300));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x302 = 170U;
	static uint16_t x303 = 22943U;
	int16_t x304 = INT16_MIN;
	int32_t t73 = -255474353;

	t73 = (x301%((x302/x303)-x304));

	if (t73 != 75) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x309 = 7U;
	int64_t x310 = INT64_MIN;
	int16_t x311 = INT16_MAX;
	int8_t x312 = -1;

	t74 = (x309%((x310/x311)-x312));

	if (t74 != 7LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x313 = -3;
	int16_t x315 = INT16_MIN;
	static int32_t x316 = -1;
	int32_t t75 = -3;

	t75 = (x313%((x314/x315)-x316));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x317 = 67U;
	int8_t x318 = INT8_MIN;
	int32_t x319 = -1;
	uint8_t x320 = 0U;
	int32_t t76 = -14;

	t76 = (x317%((x318/x319)-x320));

	if (t76 != 67) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x321 = -1;
	int8_t x322 = INT8_MAX;
	uint64_t x323 = UINT64_MAX;
	volatile uint64_t x324 = 92393168874143LLU;
	uint64_t t77 = 1367731573141297612LLU;

	t77 = (x321%((x322/x323)-x324));

	if (t77 != 92393168874142LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x328 = INT8_MIN;
	int32_t t78 = 30;

	t78 = (x325%((x326/x327)-x328));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x329 = INT16_MIN;
	uint8_t x330 = UINT8_MAX;
	int64_t x331 = -401975654LL;
	uint8_t x332 = 1U;

	t79 = (x329%((x330/x331)-x332));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x334 = INT64_MIN;
	int64_t x335 = INT64_MAX;

	t80 = (x333%((x334/x335)-x336));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x337 = 8170LLU;
	int64_t x338 = INT64_MIN;
	int32_t x339 = INT32_MIN;
	static uint64_t x340 = 128403783197090817LLU;
	uint64_t t81 = 463837664LLU;

	t81 = (x337%((x338/x339)-x340));

	if (t81 != 8170LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x341 = 15188U;
	int16_t x342 = -113;
	int16_t x343 = INT16_MIN;
	volatile int8_t x344 = -11;
	uint32_t t82 = 1214456U;

	t82 = (x341%((x342/x343)-x344));

	if (t82 != 8U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x345 = 5095167542977765524LLU;
	int64_t x346 = -1LL;
	int8_t x347 = 1;
	static int16_t x348 = INT16_MIN;
	volatile uint64_t t83 = 1002LLU;

	t83 = (x345%((x346/x347)-x348));

	if (t83 != 8804LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x349 = -1;
	static int16_t x350 = -1;
	static int64_t x351 = INT64_MIN;
	int8_t x352 = INT8_MIN;
	volatile int64_t t84 = -4214677162247LL;

	t84 = (x349%((x350/x351)-x352));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x353 = INT16_MIN;
	int32_t x354 = INT32_MIN;
	uint32_t x355 = 13319337U;
	int16_t x356 = -11;
	volatile uint32_t t85 = 984665U;

	t85 = (x353%((x354/x355)-x356));

	if (t85 != 100U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x357 = 2U;
	int32_t x358 = -1;
	volatile uint32_t x360 = 1067U;
	static uint32_t t86 = 19589155U;

	t86 = (x357%((x358/x359)-x360));

	if (t86 != 2U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x365 = 13U;
	uint8_t x367 = 1U;
	int16_t x368 = INT16_MAX;
	volatile int32_t t87 = -5960785;

	t87 = (x365%((x366/x367)-x368));

	if (t87 != 13) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x370 = 7;
	uint16_t x372 = 5577U;
	int32_t t88 = -438;

	t88 = (x369%((x370/x371)-x372));

	if (t88 != -4883) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x373 = 9756;
	uint16_t x374 = 37U;
	uint16_t x375 = 683U;
	static int32_t x376 = INT32_MAX;
	volatile int32_t t89 = 123125;

	t89 = (x373%((x374/x375)-x376));

	if (t89 != 9756) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x385 = -1LL;
	int8_t x387 = INT8_MIN;
	volatile uint8_t x388 = 4U;
	volatile int64_t t90 = -13096LL;

	t90 = (x385%((x386/x387)-x388));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x389 = -1;
	uint32_t x390 = UINT32_MAX;
	volatile uint32_t x391 = 440863U;

	t91 = (x389%((x390/x391)-x392));

	if (t91 != 13536LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x393 = 6907825;
	volatile int64_t x394 = INT64_MAX;
	int32_t x395 = 1643;
	volatile int64_t t92 = 1LL;

	t92 = (x393%((x394/x395)-x396));

	if (t92 != 6907825LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x397 = UINT16_MAX;
	int32_t x398 = -1;
	int64_t x400 = INT64_MAX;
	volatile int64_t t93 = 1LL;

	t93 = (x397%((x398/x399)-x400));

	if (t93 != 65535LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x401 = INT16_MIN;
	int16_t x403 = 180;
	static int32_t x404 = 579169937;
	int32_t t94 = 1449683;

	t94 = (x401%((x402/x403)-x404));

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x405 = INT8_MIN;
	static volatile int32_t x406 = -1;
	int16_t x408 = INT16_MIN;

	t95 = (x405%((x406/x407)-x408));

	if (t95 != -128LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x409 = INT8_MAX;
	int16_t x410 = INT16_MIN;
	uint8_t x412 = 56U;
	int32_t t96 = 0;

	t96 = (x409%((x410/x411)-x412));

	if (t96 != 17) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x413 = INT32_MAX;
	int16_t x415 = INT16_MIN;
	static int8_t x416 = -27;

	t97 = (x413%((x414/x415)-x416));

	if (t97 != 2147483647LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x417 = INT8_MIN;
	volatile int16_t x418 = -148;
	static int32_t x419 = 253;
	uint64_t t98 = 14249LLU;

	t98 = (x417%((x418/x419)-x420));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x425 = -1;
	int32_t x426 = INT32_MIN;
	int64_t x427 = -117388657014958647LL;
	int64_t x428 = -1LL;
	static volatile int64_t t99 = -1230485909663659056LL;

	t99 = (x425%((x426/x427)-x428));

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

