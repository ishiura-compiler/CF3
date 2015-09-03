#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x9 = -44;
uint8_t x14 = UINT8_MAX;
volatile int64_t x15 = INT64_MIN;
volatile int32_t t2 = 492410497;
int32_t x21 = INT32_MAX;
uint16_t x22 = 6U;
int16_t x30 = INT16_MIN;
volatile uint64_t x40 = UINT64_MAX;
static int32_t x41 = -1;
int8_t x44 = -20;
volatile uint32_t x46 = 33191548U;
volatile uint32_t x51 = 20421222U;
uint32_t x58 = 2U;
volatile int32_t t10 = 32478;
volatile int32_t t11 = -40966;
int64_t x72 = -738381LL;
int32_t x82 = 16135275;
int32_t t17 = -6565060;
uint32_t x97 = 246678898U;
static volatile int8_t x98 = -1;
int32_t x101 = INT32_MIN;
uint64_t x104 = UINT64_MAX;
int32_t t19 = 1059884679;
uint8_t x105 = 1U;
volatile int64_t x108 = 5853129879171LL;
volatile int32_t t20 = -2;
int32_t t22 = -6;
int8_t x125 = -1;
int16_t x128 = INT16_MIN;
static int32_t x132 = INT32_MIN;
int32_t t25 = 15412878;
static int32_t x139 = INT32_MIN;
int16_t x145 = INT16_MAX;
uint16_t x147 = 2U;
int32_t x152 = -1;
int64_t x154 = INT64_MIN;
static uint16_t x156 = UINT16_MAX;
uint16_t x166 = 6180U;
int32_t x167 = 73673898;
uint32_t x174 = 2U;
volatile int8_t x175 = INT8_MIN;
int16_t x181 = INT16_MIN;
volatile int32_t x191 = -1;
int64_t x195 = INT64_MIN;
volatile int32_t t40 = -1;
uint8_t x208 = UINT8_MAX;
volatile int32_t t45 = -7512;
int32_t t46 = 469;
int16_t x232 = INT16_MAX;
uint64_t x233 = 48974983897LLU;
volatile int16_t x235 = -1;
int32_t x239 = INT32_MIN;
static int32_t x242 = INT32_MIN;
int64_t x243 = 0LL;
uint16_t x247 = 6U;
uint32_t x252 = 104U;
volatile int32_t x264 = INT32_MIN;
uint16_t x269 = UINT16_MAX;
uint16_t x270 = UINT16_MAX;
uint64_t x274 = 3792887LLU;
int32_t x277 = INT32_MAX;
int32_t x286 = 386801125;
static int32_t x288 = 617990;
static volatile int8_t x298 = -1;
volatile int32_t t62 = 307963;
int16_t x324 = -60;
int16_t x334 = INT16_MIN;
int32_t x340 = 13744913;
int32_t t72 = -236079;
uint64_t x363 = UINT64_MAX;
volatile uint16_t x368 = UINT16_MAX;
int32_t t76 = 49;
volatile uint16_t x369 = UINT16_MAX;
uint8_t x370 = UINT8_MAX;
uint16_t x371 = 0U;
volatile uint16_t x373 = UINT16_MAX;
static volatile uint16_t x376 = 613U;
int64_t x377 = -3787427LL;
uint8_t x378 = UINT8_MAX;
int32_t t80 = 31;
uint64_t x391 = 1057468693286699LLU;
volatile int32_t t82 = -1068;
static int8_t x395 = INT8_MAX;
volatile uint16_t x404 = UINT16_MAX;
int32_t x410 = INT32_MIN;
uint64_t x416 = 1330LLU;
static uint32_t x418 = 1984906U;
int8_t x422 = -1;
uint16_t x430 = 12U;
volatile int32_t t93 = 259;
static uint16_t x457 = UINT16_MAX;
uint8_t x458 = UINT8_MAX;
int16_t x463 = INT16_MAX;
volatile int16_t x480 = -171;


void f0(void) {
	uint8_t x5 = 0U;
	volatile uint32_t x6 = 3034U;
	static int8_t x7 = -1;
	int8_t x8 = INT8_MIN;
	volatile int32_t t0 = 407516;

	t0 = (x5<(x6<(x7+x8)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x10 = -5;
	volatile uint16_t x11 = UINT16_MAX;
	static int16_t x12 = 164;
	volatile int32_t t1 = 9;

	t1 = (x9<(x10<(x11+x12)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = 0;
	static int32_t x16 = INT32_MAX;

	t2 = (x13<(x14<(x15+x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x23 = UINT16_MAX;
	int8_t x24 = 10;
	volatile int32_t t3 = -3;

	t3 = (x21<(x22<(x23+x24)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x25 = INT16_MIN;
	int8_t x26 = INT8_MAX;
	int8_t x27 = -1;
	uint16_t x28 = UINT16_MAX;
	int32_t t4 = -7;

	t4 = (x25<(x26<(x27+x28)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x29 = -3;
	static uint32_t x31 = UINT32_MAX;
	static uint16_t x32 = 1290U;
	int32_t t5 = -4233603;

	t5 = (x29<(x30<(x31+x32)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = INT16_MAX;
	int64_t x38 = -4047897151113LL;
	int16_t x39 = -1;
	volatile int32_t t6 = 124;

	t6 = (x37<(x38<(x39+x40)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x42 = INT64_MAX;
	int64_t x43 = 2034506706962768229LL;
	int32_t t7 = 368519584;

	t7 = (x41<(x42<(x43+x44)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x45 = -1;
	static uint32_t x47 = 1585007874U;
	uint8_t x48 = 115U;
	int32_t t8 = 4711487;

	t8 = (x45<(x46<(x47+x48)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x49 = UINT16_MAX;
	volatile int64_t x50 = -1LL;
	int64_t x52 = -10455LL;
	volatile int32_t t9 = 102;

	t9 = (x49<(x50<(x51+x52)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x57 = -1;
	static volatile uint8_t x59 = 0U;
	static volatile int64_t x60 = -12327653LL;

	t10 = (x57<(x58<(x59+x60)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x61 = -1;
	uint32_t x62 = UINT32_MAX;
	static uint64_t x63 = 33766282774LLU;
	static int8_t x64 = 0;

	t11 = (x61<(x62<(x63+x64)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x65 = INT32_MIN;
	int64_t x66 = -1LL;
	int64_t x67 = INT64_MIN;
	int64_t x68 = INT64_MAX;
	volatile int32_t t12 = 410495043;

	t12 = (x65<(x66<(x67+x68)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x69 = -1;
	uint64_t x70 = UINT64_MAX;
	int8_t x71 = -1;
	int32_t t13 = -125;

	t13 = (x69<(x70<(x71+x72)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x77 = INT32_MAX;
	volatile int8_t x78 = INT8_MIN;
	static int8_t x79 = 1;
	uint16_t x80 = 1U;
	int32_t t14 = 6;

	t14 = (x77<(x78<(x79+x80)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x81 = -8;
	static int64_t x83 = INT64_MIN;
	volatile int8_t x84 = INT8_MAX;
	volatile int32_t t15 = -10524;

	t15 = (x81<(x82<(x83+x84)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x85 = INT64_MIN;
	int64_t x86 = INT64_MIN;
	int32_t x87 = INT32_MAX;
	int8_t x88 = INT8_MIN;
	static volatile int32_t t16 = 14101;

	t16 = (x85<(x86<(x87+x88)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x93 = 1U;
	int64_t x94 = -1LL;
	volatile int32_t x95 = -16567;
	int32_t x96 = 82275714;

	t17 = (x93<(x94<(x95+x96)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x99 = -1;
	volatile int32_t x100 = -918;
	volatile int32_t t18 = 26198327;

	t18 = (x97<(x98<(x99+x100)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x102 = INT32_MIN;
	static int8_t x103 = INT8_MIN;

	t19 = (x101<(x102<(x103+x104)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x106 = 8;
	int64_t x107 = INT64_MIN;

	t20 = (x105<(x106<(x107+x108)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x109 = 60U;
	int32_t x110 = -1;
	uint32_t x111 = 38U;
	uint16_t x112 = UINT16_MAX;
	volatile int32_t t21 = -32209101;

	t21 = (x109<(x110<(x111+x112)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x113 = UINT32_MAX;
	uint8_t x114 = UINT8_MAX;
	int16_t x115 = 638;
	volatile int8_t x116 = INT8_MIN;

	t22 = (x113<(x114<(x115+x116)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint32_t x121 = 7092U;
	static int32_t x122 = INT32_MIN;
	static uint32_t x123 = 3684U;
	uint32_t x124 = UINT32_MAX;
	volatile int32_t t23 = -2;

	t23 = (x121<(x122<(x123+x124)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x126 = UINT8_MAX;
	int64_t x127 = -94406023446LL;
	int32_t t24 = -45368;

	t24 = (x125<(x126<(x127+x128)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x129 = 59;
	int64_t x130 = INT64_MIN;
	int64_t x131 = -1LL;

	t25 = (x129<(x130<(x131+x132)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x133 = INT16_MAX;
	int8_t x134 = 0;
	volatile int32_t x135 = INT32_MIN;
	volatile int32_t x136 = 243027;
	int32_t t26 = -638;

	t26 = (x133<(x134<(x135+x136)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x137 = 1799U;
	static uint8_t x138 = UINT8_MAX;
	int32_t x140 = 3657;
	volatile int32_t t27 = -1377;

	t27 = (x137<(x138<(x139+x140)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x141 = INT16_MIN;
	uint16_t x142 = 2U;
	int32_t x143 = 8743;
	volatile int32_t x144 = -1;
	volatile int32_t t28 = 68152521;

	t28 = (x141<(x142<(x143+x144)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x146 = -44;
	int64_t x148 = INT64_MIN;
	int32_t t29 = -2854;

	t29 = (x145<(x146<(x147+x148)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x149 = 3299931093589492227LLU;
	int64_t x150 = 1LL;
	volatile uint16_t x151 = 15U;
	int32_t t30 = -37201;

	t30 = (x149<(x150<(x151+x152)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x153 = 234090U;
	volatile int64_t x155 = -1059383815609780LL;
	static int32_t t31 = -445048237;

	t31 = (x153<(x154<(x155+x156)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x157 = INT64_MIN;
	static int32_t x158 = -1;
	volatile int16_t x159 = -1052;
	int32_t x160 = -1;
	volatile int32_t t32 = -288440429;

	t32 = (x157<(x158<(x159+x160)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x161 = INT8_MIN;
	int16_t x162 = INT16_MAX;
	int8_t x163 = INT8_MIN;
	int64_t x164 = -1LL;
	static volatile int32_t t33 = 5;

	t33 = (x161<(x162<(x163+x164)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x165 = INT16_MAX;
	int16_t x168 = INT16_MIN;
	static volatile int32_t t34 = 24;

	t34 = (x165<(x166<(x167+x168)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x173 = INT8_MAX;
	int16_t x176 = INT16_MAX;
	int32_t t35 = 59;

	t35 = (x173<(x174<(x175+x176)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x182 = 31U;
	volatile uint64_t x183 = UINT64_MAX;
	int64_t x184 = -1LL;
	volatile int32_t t36 = 249;

	t36 = (x181<(x182<(x183+x184)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x189 = INT32_MIN;
	int16_t x190 = 2849;
	uint64_t x192 = 1LLU;
	volatile int32_t t37 = -14914676;

	t37 = (x189<(x190<(x191+x192)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x193 = 1U;
	volatile uint64_t x194 = UINT64_MAX;
	int8_t x196 = 1;
	int32_t t38 = -17;

	t38 = (x193<(x194<(x195+x196)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x197 = 459963199U;
	int8_t x198 = INT8_MIN;
	int8_t x199 = 28;
	int64_t x200 = INT64_MIN;
	volatile int32_t t39 = -39377408;

	t39 = (x197<(x198<(x199+x200)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x201 = 2131;
	uint64_t x202 = UINT64_MAX;
	static int16_t x203 = INT16_MAX;
	volatile int16_t x204 = 7;

	t40 = (x201<(x202<(x203+x204)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x205 = -1;
	volatile int8_t x206 = 3;
	uint32_t x207 = 7U;
	int32_t t41 = 45248;

	t41 = (x205<(x206<(x207+x208)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x209 = INT8_MAX;
	int8_t x210 = INT8_MIN;
	static int64_t x211 = -37362106564LL;
	int8_t x212 = INT8_MIN;
	int32_t t42 = -10646310;

	t42 = (x209<(x210<(x211+x212)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x213 = -1;
	int8_t x214 = INT8_MIN;
	int16_t x215 = 2199;
	uint64_t x216 = 2900146508LLU;
	volatile int32_t t43 = 980082612;

	t43 = (x213<(x214<(x215+x216)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x217 = 7U;
	static int64_t x218 = INT64_MIN;
	uint32_t x219 = 20460048U;
	uint64_t x220 = 588345757320659345LLU;
	int32_t t44 = -4991;

	t44 = (x217<(x218<(x219+x220)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x221 = -1;
	uint8_t x222 = UINT8_MAX;
	static volatile uint32_t x223 = UINT32_MAX;
	int32_t x224 = -1;

	t45 = (x221<(x222<(x223+x224)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x225 = INT8_MIN;
	int8_t x226 = 60;
	static volatile int8_t x227 = -1;
	int16_t x228 = 491;

	t46 = (x225<(x226<(x227+x228)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x229 = -1258;
	int32_t x230 = INT32_MIN;
	static uint8_t x231 = UINT8_MAX;
	int32_t t47 = 212997;

	t47 = (x229<(x230<(x231+x232)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x234 = INT32_MAX;
	int16_t x236 = 27;
	volatile int32_t t48 = -115;

	t48 = (x233<(x234<(x235+x236)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x237 = 4;
	uint64_t x238 = UINT64_MAX;
	static uint16_t x240 = 11U;
	volatile int32_t t49 = -31423751;

	t49 = (x237<(x238<(x239+x240)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x241 = 6744230481705LL;
	int16_t x244 = -1;
	volatile int32_t t50 = 0;

	t50 = (x241<(x242<(x243+x244)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x245 = -1LL;
	volatile int32_t x246 = INT32_MIN;
	uint8_t x248 = UINT8_MAX;
	static volatile int32_t t51 = 711;

	t51 = (x245<(x246<(x247+x248)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x249 = 0;
	volatile int16_t x250 = -7;
	uint16_t x251 = 107U;
	volatile int32_t t52 = -5;

	t52 = (x249<(x250<(x251+x252)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x253 = -1;
	uint32_t x254 = UINT32_MAX;
	static volatile uint32_t x255 = UINT32_MAX;
	volatile uint32_t x256 = UINT32_MAX;
	volatile int32_t t53 = -29;

	t53 = (x253<(x254<(x255+x256)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x261 = 2729993152145867421LLU;
	int16_t x262 = -1;
	int16_t x263 = INT16_MAX;
	volatile int32_t t54 = -1028801;

	t54 = (x261<(x262<(x263+x264)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x265 = INT64_MIN;
	volatile int16_t x266 = 0;
	int32_t x267 = INT32_MIN;
	int32_t x268 = 71600855;
	volatile int32_t t55 = -624524;

	t55 = (x265<(x266<(x267+x268)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x271 = INT32_MIN;
	static int8_t x272 = 0;
	static volatile int32_t t56 = -70232996;

	t56 = (x269<(x270<(x271+x272)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x273 = 4870954254LL;
	int64_t x275 = -17646LL;
	int64_t x276 = -1LL;
	volatile int32_t t57 = -613;

	t57 = (x273<(x274<(x275+x276)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x278 = -1LL;
	uint32_t x279 = UINT32_MAX;
	int64_t x280 = INT64_MIN;
	int32_t t58 = -235;

	t58 = (x277<(x278<(x279+x280)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x281 = INT64_MIN;
	int64_t x282 = 1LL;
	static uint64_t x283 = 2849026032081302986LLU;
	volatile int64_t x284 = INT64_MIN;
	static volatile int32_t t59 = -140700840;

	t59 = (x281<(x282<(x283+x284)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x285 = 3108617U;
	static int8_t x287 = 4;
	volatile int32_t t60 = -6;

	t60 = (x285<(x286<(x287+x288)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x293 = 3802601LLU;
	static uint16_t x294 = UINT16_MAX;
	uint16_t x295 = UINT16_MAX;
	int64_t x296 = 3632864913955563364LL;
	volatile int32_t t61 = 5301;

	t61 = (x293<(x294<(x295+x296)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x297 = INT64_MIN;
	volatile int64_t x299 = INT64_MIN;
	int64_t x300 = INT64_MAX;

	t62 = (x297<(x298<(x299+x300)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x305 = UINT32_MAX;
	uint16_t x306 = UINT16_MAX;
	uint64_t x307 = UINT64_MAX;
	uint32_t x308 = 90950190U;
	int32_t t63 = 17410416;

	t63 = (x305<(x306<(x307+x308)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint64_t x309 = UINT64_MAX;
	volatile int16_t x310 = INT16_MIN;
	int16_t x311 = -1;
	uint64_t x312 = 340501LLU;
	int32_t t64 = -1;

	t64 = (x309<(x310<(x311+x312)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x317 = INT64_MAX;
	int32_t x318 = INT32_MAX;
	uint64_t x319 = 10679038306435474LLU;
	static uint16_t x320 = 7331U;
	static volatile int32_t t65 = -37775251;

	t65 = (x317<(x318<(x319+x320)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x321 = INT16_MIN;
	int8_t x322 = INT8_MAX;
	static int8_t x323 = -1;
	static int32_t t66 = -9208;

	t66 = (x321<(x322<(x323+x324)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x325 = 2;
	int16_t x326 = -1;
	int64_t x327 = -5173469854907427LL;
	int16_t x328 = INT16_MAX;
	volatile int32_t t67 = -1;

	t67 = (x325<(x326<(x327+x328)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x329 = -1;
	int8_t x330 = INT8_MIN;
	int32_t x331 = 0;
	static int64_t x332 = -1LL;
	volatile int32_t t68 = 2299;

	t68 = (x329<(x330<(x331+x332)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x333 = 2;
	static int8_t x335 = INT8_MIN;
	static volatile uint32_t x336 = 81U;
	static volatile int32_t t69 = 5696;

	t69 = (x333<(x334<(x335+x336)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x337 = INT64_MIN;
	uint8_t x338 = UINT8_MAX;
	int64_t x339 = 1122383753288662673LL;
	static volatile int32_t t70 = -61893;

	t70 = (x337<(x338<(x339+x340)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x341 = 1525LL;
	int32_t x342 = INT32_MIN;
	uint64_t x343 = 59656337506LLU;
	static uint32_t x344 = 315111U;
	int32_t t71 = -6799;

	t71 = (x341<(x342<(x343+x344)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x345 = 74;
	static int8_t x346 = -1;
	uint64_t x347 = 435181636461LLU;
	int32_t x348 = INT32_MAX;

	t72 = (x345<(x346<(x347+x348)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x349 = -10417597;
	uint8_t x350 = 1U;
	int8_t x351 = -3;
	static volatile int32_t x352 = 244897428;
	int32_t t73 = -218359;

	t73 = (x349<(x350<(x351+x352)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x357 = INT8_MIN;
	volatile int8_t x358 = 1;
	volatile int32_t x359 = INT32_MIN;
	int8_t x360 = INT8_MAX;
	int32_t t74 = -12;

	t74 = (x357<(x358<(x359+x360)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x361 = 9U;
	int16_t x362 = INT16_MAX;
	int32_t x364 = -446866428;
	volatile int32_t t75 = 1858;

	t75 = (x361<(x362<(x363+x364)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x365 = UINT16_MAX;
	volatile int64_t x366 = 2639748853228701LL;
	int8_t x367 = -1;

	t76 = (x365<(x366<(x367+x368)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x372 = 1;
	static volatile int32_t t77 = 30;

	t77 = (x369<(x370<(x371+x372)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x374 = INT64_MIN;
	static int64_t x375 = -2899385087814LL;
	int32_t t78 = -202;

	t78 = (x373<(x374<(x375+x376)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x379 = 8;
	static volatile int16_t x380 = -1;
	int32_t t79 = -979888;

	t79 = (x377<(x378<(x379+x380)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x381 = -1;
	int32_t x382 = INT32_MIN;
	int32_t x383 = -41516726;
	uint64_t x384 = 3279564LLU;

	t80 = (x381<(x382<(x383+x384)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x385 = 4U;
	volatile int8_t x386 = INT8_MIN;
	uint32_t x387 = UINT32_MAX;
	int32_t x388 = INT32_MIN;
	int32_t t81 = -36585436;

	t81 = (x385<(x386<(x387+x388)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x389 = INT32_MIN;
	volatile int8_t x390 = INT8_MIN;
	volatile int32_t x392 = INT32_MIN;

	t82 = (x389<(x390<(x391+x392)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x393 = 1;
	static uint64_t x394 = 40899695657190LLU;
	uint32_t x396 = 1273804330U;
	int32_t t83 = -1040;

	t83 = (x393<(x394<(x395+x396)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x397 = INT64_MIN;
	int64_t x398 = INT64_MIN;
	volatile int64_t x399 = -222857LL;
	static volatile int8_t x400 = INT8_MIN;
	int32_t t84 = 681152263;

	t84 = (x397<(x398<(x399+x400)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x401 = INT32_MAX;
	static int16_t x402 = 6;
	static int16_t x403 = 1;
	int32_t t85 = 93332;

	t85 = (x401<(x402<(x403+x404)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x405 = 0U;
	static int8_t x406 = INT8_MIN;
	volatile int16_t x407 = INT16_MAX;
	volatile int16_t x408 = 223;
	static volatile int32_t t86 = -878131934;

	t86 = (x405<(x406<(x407+x408)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x409 = 224;
	uint64_t x411 = UINT64_MAX;
	int64_t x412 = INT64_MAX;
	static volatile int32_t t87 = 8;

	t87 = (x409<(x410<(x411+x412)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x413 = -22;
	int16_t x414 = INT16_MIN;
	int8_t x415 = INT8_MIN;
	int32_t t88 = 26693;

	t88 = (x413<(x414<(x415+x416)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x417 = UINT8_MAX;
	int32_t x419 = INT32_MIN;
	int32_t x420 = INT32_MAX;
	volatile int32_t t89 = -55;

	t89 = (x417<(x418<(x419+x420)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x421 = -23;
	uint32_t x423 = 698U;
	int8_t x424 = INT8_MIN;
	volatile int32_t t90 = 70;

	t90 = (x421<(x422<(x423+x424)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x425 = 1815U;
	uint8_t x426 = 100U;
	uint16_t x427 = UINT16_MAX;
	int8_t x428 = -1;
	static volatile int32_t t91 = -3647983;

	t91 = (x425<(x426<(x427+x428)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x429 = INT64_MIN;
	int16_t x431 = INT16_MAX;
	static volatile int8_t x432 = 60;
	static volatile int32_t t92 = 39;

	t92 = (x429<(x430<(x431+x432)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x433 = INT8_MIN;
	int16_t x434 = INT16_MIN;
	int32_t x435 = -40;
	uint32_t x436 = 1130U;

	t93 = (x433<(x434<(x435+x436)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x441 = 0;
	int8_t x442 = -1;
	uint16_t x443 = 1U;
	int64_t x444 = -1LL;
	static volatile int32_t t94 = -1787;

	t94 = (x441<(x442<(x443+x444)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x449 = INT16_MAX;
	int16_t x450 = INT16_MIN;
	int32_t x451 = -44462335;
	static int64_t x452 = 2565LL;
	volatile int32_t t95 = 7645682;

	t95 = (x449<(x450<(x451+x452)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x453 = INT64_MAX;
	int8_t x454 = 41;
	uint32_t x455 = 17644140U;
	int64_t x456 = -1LL;
	volatile int32_t t96 = -535;

	t96 = (x453<(x454<(x455+x456)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x459 = -3;
	uint8_t x460 = 99U;
	int32_t t97 = -25026640;

	t97 = (x457<(x458<(x459+x460)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x461 = INT8_MIN;
	int32_t x462 = INT32_MIN;
	int16_t x464 = INT16_MIN;
	int32_t t98 = 103964;

	t98 = (x461<(x462<(x463+x464)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x477 = UINT8_MAX;
	volatile uint32_t x478 = 47U;
	uint32_t x479 = UINT32_MAX;
	static int32_t t99 = -1258;

	t99 = (x477<(x478<(x479+x480)));

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

