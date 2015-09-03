#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = -1;
uint8_t x8 = 46U;
uint64_t x13 = UINT64_MAX;
uint8_t x23 = UINT8_MAX;
volatile int32_t t4 = -219886284;
int32_t x28 = 1;
int32_t t8 = -3704;
static int16_t x50 = INT16_MAX;
static uint8_t x52 = 10U;
int8_t x55 = -14;
uint64_t x59 = 30385794LLU;
volatile uint8_t x61 = UINT8_MAX;
volatile uint8_t x67 = 31U;
static uint64_t x74 = 2894469843LLU;
volatile uint32_t x78 = 17U;
int16_t x80 = -6;
static int16_t x81 = -43;
uint32_t x84 = 0U;
static uint16_t x91 = 14409U;
uint8_t x92 = 76U;
volatile int8_t x94 = -1;
static int32_t x96 = 1296100;
volatile int32_t t19 = -19;
int32_t t20 = -1373054;
static int32_t x104 = -193879843;
static int32_t t21 = -1960;
volatile int8_t x120 = INT8_MAX;
int8_t x128 = -6;
uint8_t x133 = 28U;
static volatile int64_t x139 = INT64_MAX;
int16_t x148 = INT16_MIN;
uint8_t x154 = 26U;
static volatile int8_t x156 = -39;
int32_t t35 = 0;
volatile int32_t t37 = 110;
int16_t x172 = INT16_MIN;
static volatile int32_t t39 = -53;
uint16_t x184 = 29U;
static int16_t x185 = INT16_MIN;
static volatile int8_t x212 = -1;
volatile int32_t t50 = -4043873;
static int64_t x231 = -18989573711LL;
int64_t x240 = 24676568035952933LL;
uint64_t x245 = 733458496393773LLU;
int64_t x250 = -1LL;
volatile int32_t t56 = 217;
int8_t x265 = -1;
int16_t x268 = INT16_MAX;
int32_t x273 = -1;
volatile int32_t x274 = INT32_MAX;
volatile int8_t x275 = INT8_MIN;
static volatile int32_t x277 = -1697719;
int8_t x279 = 1;
int32_t t62 = 166;
volatile int32_t t63 = 16123;
int8_t x288 = -47;
uint16_t x289 = 29U;
int32_t t69 = 789076;
int32_t x313 = INT32_MIN;
static uint16_t x320 = 3U;
static int32_t x323 = 21626704;
int16_t x325 = 2061;
uint32_t x330 = 548092618U;
int64_t x331 = -67683LL;
static volatile int32_t t75 = -385159;
volatile int16_t x335 = INT16_MIN;
int8_t x340 = -1;
int32_t t77 = 261885;
int64_t x346 = -1LL;
static uint16_t x349 = UINT16_MAX;
volatile int32_t t81 = 70;
volatile int32_t t83 = 0;
volatile uint32_t x376 = UINT32_MAX;
int64_t x380 = -438849670306764835LL;
static volatile int64_t x392 = -831530082553712072LL;
volatile int32_t t88 = -211;
volatile uint16_t x397 = 9U;
int32_t x399 = INT32_MAX;
static int32_t t90 = 809872461;
volatile int64_t x407 = INT64_MIN;
static int16_t x410 = INT16_MIN;
int32_t t92 = 1;
int8_t x413 = INT8_MIN;
uint16_t x416 = UINT16_MAX;
int64_t x422 = INT64_MAX;
volatile uint64_t x423 = UINT64_MAX;
static volatile int16_t x428 = -1;
volatile int32_t t98 = 107099929;


void f0(void) {
	int16_t x1 = 70;
	static int16_t x2 = -1;
	int32_t x3 = INT32_MIN;
	volatile uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = 92599;

	t0 = (x1<(x2==(x3+x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int64_t x6 = INT64_MAX;
	int32_t t1 = 66;

	t1 = (x5<(x6==(x7+x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 1;
	int32_t x10 = -1;
	volatile int64_t x11 = INT64_MAX;
	int8_t x12 = INT8_MIN;
	int32_t t2 = 3;

	t2 = (x9<(x10==(x11+x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = INT64_MAX;
	int32_t x15 = -2007;
	uint32_t x16 = UINT32_MAX;
	static int32_t t3 = 303518;

	t3 = (x13<(x14==(x15+x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = -1;
	volatile uint8_t x22 = UINT8_MAX;
	int8_t x24 = INT8_MIN;

	t4 = (x21<(x22==(x23+x24)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -53;
	volatile int64_t x26 = -1LL;
	int16_t x27 = 0;
	volatile int32_t t5 = 46;

	t5 = (x25<(x26==(x27+x28)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -487467881;
	static int32_t x30 = 5;
	static uint8_t x31 = 72U;
	static int16_t x32 = INT16_MIN;
	static int32_t t6 = 0;

	t6 = (x29<(x30==(x31+x32)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 4U;
	uint32_t x34 = UINT32_MAX;
	int8_t x35 = -1;
	uint8_t x36 = UINT8_MAX;
	volatile int32_t t7 = -12;

	t7 = (x33<(x34==(x35+x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MAX;
	int64_t x38 = -1LL;
	int32_t x39 = 5;
	int8_t x40 = -1;

	t8 = (x37<(x38==(x39+x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x49 = -1;
	int32_t x51 = -1;
	volatile int32_t t9 = -2684106;

	t9 = (x49<(x50==(x51+x52)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = INT8_MIN;
	int16_t x54 = INT16_MIN;
	uint16_t x56 = 3367U;
	static int32_t t10 = -15;

	t10 = (x53<(x54==(x55+x56)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x57 = -1LL;
	uint8_t x58 = 1U;
	uint8_t x60 = 52U;
	volatile int32_t t11 = -2915;

	t11 = (x57<(x58==(x59+x60)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x62 = INT32_MAX;
	int8_t x63 = INT8_MIN;
	int16_t x64 = -1425;
	int32_t t12 = -863;

	t12 = (x61<(x62==(x63+x64)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x65 = UINT8_MAX;
	int64_t x66 = INT64_MIN;
	static int16_t x68 = INT16_MAX;
	volatile int32_t t13 = 81044;

	t13 = (x65<(x66==(x67+x68)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = -1LL;
	static int8_t x70 = INT8_MIN;
	static int64_t x71 = 20802LL;
	volatile uint8_t x72 = 87U;
	volatile int32_t t14 = -163;

	t14 = (x69<(x70==(x71+x72)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = INT32_MAX;
	int32_t x75 = 476946270;
	uint16_t x76 = 0U;
	volatile int32_t t15 = -374418;

	t15 = (x73<(x74==(x75+x76)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x77 = 4069993LL;
	static int8_t x79 = -14;
	volatile int32_t t16 = -193;

	t16 = (x77<(x78==(x79+x80)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x82 = 382455172LLU;
	volatile uint32_t x83 = 10U;
	int32_t t17 = -6600;

	t17 = (x81<(x82==(x83+x84)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x89 = UINT8_MAX;
	int16_t x90 = 15836;
	static int32_t t18 = 8;

	t18 = (x89<(x90==(x91+x92)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x93 = 15744U;
	volatile int32_t x95 = -1;

	t19 = (x93<(x94==(x95+x96)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x97 = UINT32_MAX;
	uint32_t x98 = 16543337U;
	int64_t x99 = -1117119LL;
	uint16_t x100 = UINT16_MAX;

	t20 = (x97<(x98==(x99+x100)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x101 = -1765;
	uint32_t x102 = 1955U;
	int64_t x103 = -96LL;

	t21 = (x101<(x102==(x103+x104)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x105 = INT32_MIN;
	static volatile int16_t x106 = INT16_MAX;
	static int16_t x107 = INT16_MIN;
	int16_t x108 = INT16_MAX;
	volatile int32_t t22 = -4;

	t22 = (x105<(x106==(x107+x108)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x109 = -1;
	volatile int16_t x110 = INT16_MIN;
	static uint8_t x111 = 114U;
	int8_t x112 = INT8_MIN;
	volatile int32_t t23 = -38978;

	t23 = (x109<(x110==(x111+x112)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = -16196105063LL;
	static int64_t x114 = INT64_MAX;
	uint64_t x115 = 16LLU;
	int64_t x116 = 3927392167732LL;
	int32_t t24 = 31;

	t24 = (x113<(x114==(x115+x116)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x117 = 79268230374LLU;
	int64_t x118 = -1LL;
	volatile int32_t x119 = -1;
	static volatile int32_t t25 = -3594;

	t25 = (x117<(x118==(x119+x120)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x121 = INT8_MIN;
	int16_t x122 = -2031;
	static uint8_t x123 = 4U;
	int8_t x124 = -7;
	static int32_t t26 = -1;

	t26 = (x121<(x122==(x123+x124)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x125 = INT32_MIN;
	volatile int16_t x126 = INT16_MAX;
	uint8_t x127 = 5U;
	int32_t t27 = 16607;

	t27 = (x125<(x126==(x127+x128)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = INT32_MIN;
	int32_t x130 = INT32_MAX;
	uint64_t x131 = 27151314650888LLU;
	volatile int16_t x132 = -1;
	volatile int32_t t28 = -1;

	t28 = (x129<(x130==(x131+x132)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x134 = 8179U;
	static int64_t x135 = 418296373223512810LL;
	static volatile uint64_t x136 = UINT64_MAX;
	static volatile int32_t t29 = -8815;

	t29 = (x133<(x134==(x135+x136)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = 14;
	static int64_t x138 = -1LL;
	static volatile int64_t x140 = -81LL;
	int32_t t30 = 504728;

	t30 = (x137<(x138==(x139+x140)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x141 = INT64_MAX;
	static int8_t x142 = 59;
	volatile uint64_t x143 = UINT64_MAX;
	volatile int8_t x144 = INT8_MIN;
	int32_t t31 = -133302833;

	t31 = (x141<(x142==(x143+x144)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = -1;
	static int64_t x146 = INT64_MAX;
	int32_t x147 = 215;
	volatile int32_t t32 = -1;

	t32 = (x145<(x146==(x147+x148)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = -1;
	int16_t x150 = INT16_MIN;
	static uint32_t x151 = UINT32_MAX;
	static int64_t x152 = INT64_MIN;
	int32_t t33 = 4;

	t33 = (x149<(x150==(x151+x152)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x153 = -1;
	uint8_t x155 = 6U;
	int32_t t34 = 192706274;

	t34 = (x153<(x154==(x155+x156)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x157 = 412LLU;
	volatile uint64_t x158 = 2696LLU;
	int8_t x159 = -1;
	int16_t x160 = 1;

	t35 = (x157<(x158==(x159+x160)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x161 = 511478863177459LL;
	volatile int32_t x162 = -1;
	uint16_t x163 = 29232U;
	static uint64_t x164 = UINT64_MAX;
	volatile int32_t t36 = 70996;

	t36 = (x161<(x162==(x163+x164)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x165 = UINT64_MAX;
	volatile int8_t x166 = 2;
	int32_t x167 = INT32_MIN;
	volatile uint32_t x168 = 3U;

	t37 = (x165<(x166==(x167+x168)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x169 = -3800;
	static volatile uint8_t x170 = 33U;
	static uint32_t x171 = 3415U;
	static int32_t t38 = 840996053;

	t38 = (x169<(x170==(x171+x172)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x173 = INT64_MAX;
	volatile int8_t x174 = INT8_MIN;
	uint32_t x175 = 1U;
	uint16_t x176 = UINT16_MAX;

	t39 = (x173<(x174==(x175+x176)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = -6701;
	uint64_t x178 = UINT64_MAX;
	volatile uint16_t x179 = 247U;
	uint16_t x180 = 38U;
	volatile int32_t t40 = -549398;

	t40 = (x177<(x178==(x179+x180)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x181 = -1;
	int32_t x182 = 1140;
	static uint8_t x183 = UINT8_MAX;
	int32_t t41 = -1;

	t41 = (x181<(x182==(x183+x184)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x186 = 9;
	volatile uint32_t x187 = 929U;
	int8_t x188 = INT8_MAX;
	volatile int32_t t42 = -141970;

	t42 = (x185<(x186==(x187+x188)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = INT64_MAX;
	uint8_t x190 = 0U;
	static uint32_t x191 = 312U;
	static int8_t x192 = INT8_MAX;
	int32_t t43 = 203974;

	t43 = (x189<(x190==(x191+x192)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x197 = INT32_MIN;
	int8_t x198 = INT8_MIN;
	volatile int64_t x199 = -10118898059775459LL;
	int8_t x200 = 23;
	int32_t t44 = 44250;

	t44 = (x197<(x198==(x199+x200)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x201 = 1057625771U;
	static int32_t x202 = INT32_MIN;
	int32_t x203 = INT32_MIN;
	uint32_t x204 = 3085U;
	int32_t t45 = 19904;

	t45 = (x201<(x202==(x203+x204)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x205 = 1;
	int16_t x206 = INT16_MAX;
	int8_t x207 = 1;
	volatile int16_t x208 = -23;
	volatile int32_t t46 = 62469631;

	t46 = (x205<(x206==(x207+x208)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x209 = 147U;
	uint16_t x210 = UINT16_MAX;
	static uint8_t x211 = 1U;
	volatile int32_t t47 = 0;

	t47 = (x209<(x210==(x211+x212)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x213 = INT8_MAX;
	static volatile uint64_t x214 = 490072554307041607LLU;
	int64_t x215 = -1101638LL;
	volatile int32_t x216 = INT32_MAX;
	volatile int32_t t48 = -207281277;

	t48 = (x213<(x214==(x215+x216)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x217 = UINT64_MAX;
	static uint64_t x218 = 5455LLU;
	static uint8_t x219 = UINT8_MAX;
	uint32_t x220 = UINT32_MAX;
	volatile int32_t t49 = 15265860;

	t49 = (x217<(x218==(x219+x220)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x221 = INT8_MIN;
	int32_t x222 = -2882205;
	volatile int16_t x223 = -3415;
	int8_t x224 = INT8_MIN;

	t50 = (x221<(x222==(x223+x224)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x225 = INT16_MIN;
	static int16_t x226 = INT16_MAX;
	static int16_t x227 = INT16_MIN;
	uint16_t x228 = 7U;
	int32_t t51 = 260403166;

	t51 = (x225<(x226==(x227+x228)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x229 = 230U;
	volatile int64_t x230 = INT64_MAX;
	int64_t x232 = INT64_MAX;
	int32_t t52 = -368659;

	t52 = (x229<(x230==(x231+x232)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x233 = -1;
	int8_t x234 = -1;
	uint32_t x235 = UINT32_MAX;
	int64_t x236 = 136402942320931020LL;
	int32_t t53 = 881409047;

	t53 = (x233<(x234==(x235+x236)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x237 = 21U;
	int64_t x238 = -2967224215088023LL;
	volatile int32_t x239 = INT32_MIN;
	volatile int32_t t54 = -131994430;

	t54 = (x237<(x238==(x239+x240)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x246 = INT32_MIN;
	volatile uint16_t x247 = 929U;
	volatile int8_t x248 = -45;
	volatile int32_t t55 = -13;

	t55 = (x245<(x246==(x247+x248)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x249 = INT16_MIN;
	int32_t x251 = INT32_MAX;
	volatile int32_t x252 = INT32_MIN;

	t56 = (x249<(x250==(x251+x252)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x257 = -1;
	int16_t x258 = -1;
	int32_t x259 = -85160;
	volatile uint8_t x260 = 10U;
	volatile int32_t t57 = -256;

	t57 = (x257<(x258==(x259+x260)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x261 = -1;
	uint8_t x262 = UINT8_MAX;
	volatile uint8_t x263 = UINT8_MAX;
	uint8_t x264 = UINT8_MAX;
	static int32_t t58 = 95;

	t58 = (x261<(x262==(x263+x264)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x266 = 1U;
	volatile uint16_t x267 = 301U;
	int32_t t59 = 49;

	t59 = (x265<(x266==(x267+x268)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x269 = UINT32_MAX;
	static uint16_t x270 = UINT16_MAX;
	int8_t x271 = INT8_MIN;
	volatile int16_t x272 = -1;
	volatile int32_t t60 = 406;

	t60 = (x269<(x270==(x271+x272)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x276 = -1068517307214090034LL;
	static volatile int32_t t61 = -1073046;

	t61 = (x273<(x274==(x275+x276)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x278 = 1534LLU;
	uint64_t x280 = 1061490201023299LLU;

	t62 = (x277<(x278==(x279+x280)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x281 = -1LL;
	volatile int8_t x282 = INT8_MIN;
	int32_t x283 = INT32_MIN;
	static int64_t x284 = -4623142344515LL;

	t63 = (x281<(x282==(x283+x284)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x285 = INT32_MAX;
	int8_t x286 = -1;
	static int64_t x287 = -1LL;
	int32_t t64 = 13;

	t64 = (x285<(x286==(x287+x288)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x290 = UINT8_MAX;
	int64_t x291 = INT64_MIN;
	uint32_t x292 = 6U;
	volatile int32_t t65 = -178674071;

	t65 = (x289<(x290==(x291+x292)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x293 = -9LL;
	int16_t x294 = INT16_MIN;
	volatile uint64_t x295 = UINT64_MAX;
	int32_t x296 = INT32_MAX;
	volatile int32_t t66 = 1036646999;

	t66 = (x293<(x294==(x295+x296)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x297 = 0;
	static int16_t x298 = INT16_MIN;
	static int32_t x299 = -1;
	volatile int16_t x300 = INT16_MIN;
	int32_t t67 = -1;

	t67 = (x297<(x298==(x299+x300)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x301 = 19102915365573LLU;
	int64_t x302 = 12352368LL;
	int8_t x303 = INT8_MIN;
	uint8_t x304 = UINT8_MAX;
	volatile int32_t t68 = -22328;

	t68 = (x301<(x302==(x303+x304)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x305 = INT32_MIN;
	volatile uint16_t x306 = 75U;
	volatile int32_t x307 = -1;
	static volatile int64_t x308 = -6LL;

	t69 = (x305<(x306==(x307+x308)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x309 = INT32_MIN;
	volatile int8_t x310 = INT8_MAX;
	static int16_t x311 = INT16_MIN;
	volatile int8_t x312 = -1;
	volatile int32_t t70 = -242;

	t70 = (x309<(x310==(x311+x312)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x314 = UINT8_MAX;
	volatile int32_t x315 = -129297702;
	int64_t x316 = 8000199971LL;
	int32_t t71 = -28668192;

	t71 = (x313<(x314==(x315+x316)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint16_t x317 = 3775U;
	uint64_t x318 = UINT64_MAX;
	static uint8_t x319 = 39U;
	int32_t t72 = 83621;

	t72 = (x317<(x318==(x319+x320)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x321 = 1440U;
	uint64_t x322 = 691062406459LLU;
	int16_t x324 = INT16_MIN;
	int32_t t73 = 2426;

	t73 = (x321<(x322==(x323+x324)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x326 = -30;
	static volatile int64_t x327 = -322425LL;
	int32_t x328 = INT32_MIN;
	int32_t t74 = 8;

	t74 = (x325<(x326==(x327+x328)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x329 = 0LL;
	static uint16_t x332 = UINT16_MAX;

	t75 = (x329<(x330==(x331+x332)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x333 = INT32_MIN;
	int8_t x334 = 19;
	uint8_t x336 = 3U;
	volatile int32_t t76 = -106418;

	t76 = (x333<(x334==(x335+x336)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x337 = INT16_MIN;
	volatile uint32_t x338 = 23844926U;
	uint16_t x339 = 11328U;

	t77 = (x337<(x338==(x339+x340)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x341 = INT16_MIN;
	volatile int8_t x342 = -1;
	int8_t x343 = 7;
	int16_t x344 = -1;
	volatile int32_t t78 = -89;

	t78 = (x341<(x342==(x343+x344)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x345 = 16U;
	volatile uint64_t x347 = 17540LLU;
	static volatile uint32_t x348 = 6561U;
	volatile int32_t t79 = 75106416;

	t79 = (x345<(x346==(x347+x348)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x350 = UINT32_MAX;
	int8_t x351 = INT8_MIN;
	volatile uint32_t x352 = 501298U;
	volatile int32_t t80 = 12;

	t80 = (x349<(x350==(x351+x352)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x353 = INT16_MAX;
	uint16_t x354 = 899U;
	int16_t x355 = 24;
	uint32_t x356 = 381U;

	t81 = (x353<(x354==(x355+x356)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x357 = INT64_MIN;
	int64_t x358 = -1LL;
	static int32_t x359 = -1;
	uint64_t x360 = UINT64_MAX;
	int32_t t82 = -3;

	t82 = (x357<(x358==(x359+x360)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x369 = INT32_MIN;
	int16_t x370 = INT16_MIN;
	uint8_t x371 = 0U;
	int16_t x372 = -1;

	t83 = (x369<(x370==(x371+x372)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x373 = 3636598645143LL;
	volatile int16_t x374 = -1;
	uint32_t x375 = 131U;
	volatile int32_t t84 = 347962101;

	t84 = (x373<(x374==(x375+x376)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x377 = INT16_MIN;
	volatile int8_t x378 = INT8_MAX;
	int64_t x379 = -1LL;
	int32_t t85 = -12479;

	t85 = (x377<(x378==(x379+x380)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x381 = -1;
	static int32_t x382 = INT32_MIN;
	volatile int8_t x383 = 1;
	int8_t x384 = -1;
	volatile int32_t t86 = 594;

	t86 = (x381<(x382==(x383+x384)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x385 = INT64_MAX;
	uint8_t x386 = 9U;
	int16_t x387 = INT16_MIN;
	uint32_t x388 = 34U;
	volatile int32_t t87 = 0;

	t87 = (x385<(x386==(x387+x388)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x389 = -3;
	uint8_t x390 = 0U;
	int8_t x391 = INT8_MAX;

	t88 = (x389<(x390==(x391+x392)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x393 = INT32_MIN;
	int64_t x394 = INT64_MIN;
	int16_t x395 = INT16_MAX;
	int16_t x396 = INT16_MIN;
	static volatile int32_t t89 = -11;

	t89 = (x393<(x394==(x395+x396)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x398 = 13LLU;
	uint64_t x400 = 123352061906LLU;

	t90 = (x397<(x398==(x399+x400)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x405 = -1;
	int8_t x406 = -1;
	volatile uint64_t x408 = 2891836995LLU;
	int32_t t91 = -5441401;

	t91 = (x405<(x406==(x407+x408)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x409 = INT32_MAX;
	static volatile uint32_t x411 = 10U;
	int32_t x412 = INT32_MIN;

	t92 = (x409<(x410==(x411+x412)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x414 = INT8_MAX;
	static volatile int32_t x415 = 304805348;
	static volatile int32_t t93 = -283458;

	t93 = (x413<(x414==(x415+x416)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x417 = 1U;
	uint32_t x418 = 361U;
	int16_t x419 = 15287;
	int8_t x420 = -22;
	volatile int32_t t94 = 478399;

	t94 = (x417<(x418==(x419+x420)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x421 = 0;
	static uint8_t x424 = 58U;
	volatile int32_t t95 = -10;

	t95 = (x421<(x422==(x423+x424)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x425 = 2534366259276668LL;
	static uint64_t x426 = 18079126344849LLU;
	uint16_t x427 = 18282U;
	int32_t t96 = 168;

	t96 = (x425<(x426==(x427+x428)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x429 = INT64_MIN;
	static int64_t x430 = INT64_MAX;
	int64_t x431 = 329LL;
	uint16_t x432 = 7U;
	int32_t t97 = 49;

	t97 = (x429<(x430==(x431+x432)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x433 = INT16_MIN;
	uint64_t x434 = 34054688LLU;
	static uint32_t x435 = 31757U;
	static uint16_t x436 = UINT16_MAX;

	t98 = (x433<(x434==(x435+x436)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x437 = 648;
	static uint64_t x438 = 1LLU;
	volatile uint64_t x439 = UINT64_MAX;
	static uint64_t x440 = 8724549674741LLU;
	static volatile int32_t t99 = 1;

	t99 = (x437<(x438==(x439+x440)));

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

