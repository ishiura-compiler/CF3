#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x7 = -1;
int8_t x9 = INT8_MAX;
static volatile int32_t x13 = INT32_MAX;
uint64_t x16 = UINT64_MAX;
volatile uint64_t t3 = 25495LLU;
int64_t x29 = -57150023249129491LL;
int64_t t6 = 27321LL;
volatile int32_t x39 = INT32_MIN;
volatile int32_t t8 = 2576;
static int64_t x43 = -1LL;
volatile int64_t t9 = 0LL;
int32_t t10 = -110;
volatile int8_t x53 = -40;
volatile uint32_t x55 = UINT32_MAX;
int8_t x64 = -4;
int32_t t14 = 5;
int32_t x67 = INT32_MAX;
volatile uint64_t t15 = 96009979LLU;
uint32_t x73 = UINT32_MAX;
static volatile uint16_t x77 = UINT16_MAX;
volatile int32_t x78 = -97;
uint32_t x80 = 8661422U;
int16_t x83 = -1;
volatile int32_t t19 = 13;
int8_t x93 = INT8_MAX;
int32_t x95 = INT32_MIN;
volatile int8_t x97 = 0;
static volatile int16_t x105 = -3;
uint8_t x107 = UINT8_MAX;
volatile uint8_t x108 = 1U;
volatile int32_t t24 = 3501230;
int32_t x122 = INT32_MAX;
uint64_t t27 = 418093644116172467LLU;
int32_t x133 = INT32_MIN;
uint16_t x135 = 289U;
int64_t x137 = -81364481998130LL;
uint8_t x139 = 19U;
static volatile uint8_t x145 = 0U;
int32_t t34 = 0;
volatile int32_t t37 = -1;
int32_t x169 = 434;
int32_t t38 = -856;
static int8_t x190 = INT8_MAX;
int64_t x193 = 6LL;
int32_t x195 = -1;
int32_t x199 = -1385828;
volatile uint16_t x203 = 10934U;
int16_t x208 = 0;
uint32_t x209 = 1067U;
uint32_t x211 = UINT32_MAX;
int64_t x212 = -27790860695317166LL;
int32_t x213 = INT32_MAX;
int32_t x224 = -1401455;
int32_t x228 = -369468663;
static volatile int64_t t51 = -529504164151LL;
int64_t x241 = INT64_MIN;
uint64_t t56 = 7046499343084856417LLU;
int16_t x257 = -249;
volatile uint16_t x258 = UINT16_MAX;
int32_t t57 = 1293;
static uint16_t x261 = 21724U;
static int64_t x262 = -2963265LL;
static int8_t x264 = 0;
uint64_t x265 = 4859119200819LLU;
volatile int32_t x280 = -1;
int16_t x283 = INT16_MIN;
int16_t x284 = INT16_MAX;
uint32_t t64 = 15034036U;
uint32_t x298 = 103495U;
static int32_t x303 = INT32_MAX;
volatile uint32_t t68 = 30U;
uint8_t x315 = 0U;
volatile int32_t t71 = INT32_MIN;
uint8_t x318 = UINT8_MAX;
volatile int64_t x321 = INT64_MIN;
uint64_t t75 = 14281674LLU;
int64_t x338 = -1LL;
volatile int32_t x343 = -34;
volatile int16_t x347 = INT16_MIN;
uint8_t x350 = 1U;
volatile int32_t t80 = -485;
int16_t x357 = 3;
static int64_t x359 = -1LL;
int8_t x360 = INT8_MIN;
int64_t t82 = -428637804LL;
int32_t x362 = INT32_MIN;
uint16_t x363 = UINT16_MAX;
volatile uint8_t x372 = 13U;
int16_t x384 = INT16_MIN;
int32_t t87 = -100920;
volatile int32_t t88 = 12;
static volatile uint64_t t89 = 776403000825LLU;
int32_t t90 = -10102;
int32_t x417 = -1;
static int16_t x419 = 1452;
int64_t t95 = 43254431391154684LL;
static uint16_t x432 = 7U;
volatile int64_t x438 = -1LL;
int16_t x441 = 13893;
static volatile int32_t x442 = INT32_MAX;
volatile int32_t t99 = 367722;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int64_t x2 = INT64_MIN;
	int64_t x3 = -1LL;
	int64_t x4 = INT64_MAX;
	volatile int64_t t0 = 12814996983405LL;

	t0 = ((x1<x2)*(x3+x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -20729;
	static int8_t x6 = INT8_MIN;
	volatile int8_t x8 = INT8_MIN;
	static volatile int32_t t1 = -40;

	t1 = ((x5<x6)*(x7+x8));

	if (t1 != -129) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = 7U;
	int16_t x11 = INT16_MAX;
	uint64_t x12 = 0LLU;
	volatile uint64_t t2 = 361973LLU;

	t2 = ((x9<x10)*(x11+x12));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = 1330438001U;
	volatile int32_t x15 = INT32_MIN;

	t3 = ((x13<x14)*(x15+x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MAX;
	int8_t x22 = 7;
	static uint32_t x23 = UINT32_MAX;
	static volatile int64_t x24 = -14488LL;
	int64_t t4 = 7316989LL;

	t4 = ((x21<x22)*(x23+x24));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x25 = 14115381U;
	static uint8_t x26 = 3U;
	int64_t x27 = -1LL;
	int32_t x28 = INT32_MAX;
	int64_t t5 = 1751LL;

	t5 = ((x25<x26)*(x27+x28));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x30 = -1;
	static int64_t x31 = -431696LL;
	volatile int16_t x32 = INT16_MIN;

	t6 = ((x29<x30)*(x31+x32));

	if (t6 != -464464LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MIN;
	uint32_t x34 = 4U;
	volatile int16_t x35 = -2;
	static int8_t x36 = INT8_MIN;
	volatile int32_t t7 = -61388877;

	t7 = ((x33<x34)*(x35+x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x37 = INT8_MIN;
	volatile int16_t x38 = 0;
	uint16_t x40 = UINT16_MAX;

	t8 = ((x37<x38)*(x39+x40));

	if (t8 != -2147418113) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = UINT8_MAX;
	int64_t x42 = -110414405952LL;
	int16_t x44 = INT16_MIN;

	t9 = ((x41<x42)*(x43+x44));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -1;
	int32_t x46 = 0;
	static uint16_t x47 = 0U;
	int8_t x48 = -1;

	t10 = ((x45<x46)*(x47+x48));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x49 = INT64_MIN;
	volatile int16_t x50 = 0;
	static volatile int32_t x51 = -1;
	uint8_t x52 = 27U;
	volatile int32_t t11 = 0;

	t11 = ((x49<x50)*(x51+x52));

	if (t11 != 26) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x54 = 24U;
	int16_t x56 = 1945;
	uint32_t t12 = 10221425U;

	t12 = ((x53<x54)*(x55+x56));

	if (t12 != 1944U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 815U;
	uint8_t x58 = UINT8_MAX;
	static int8_t x59 = -1;
	int16_t x60 = -1;
	int32_t t13 = -838709078;

	t13 = ((x57<x58)*(x59+x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x61 = INT32_MIN;
	static uint8_t x62 = 4U;
	static int16_t x63 = -1;

	t14 = ((x61<x62)*(x63+x64));

	if (t14 != -5) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -1;
	volatile uint64_t x66 = 230248691190LLU;
	uint64_t x68 = UINT64_MAX;

	t15 = ((x65<x66)*(x67+x68));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MAX;
	volatile int16_t x70 = INT16_MIN;
	int16_t x71 = 22;
	volatile uint8_t x72 = 5U;
	volatile int32_t t16 = 118254;

	t16 = ((x69<x70)*(x71+x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x74 = UINT8_MAX;
	uint64_t x75 = 234LLU;
	uint16_t x76 = UINT16_MAX;
	uint64_t t17 = 158448078LLU;

	t17 = ((x73<x74)*(x75+x76));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x79 = -195559;
	static volatile uint32_t t18 = 0U;

	t18 = ((x77<x78)*(x79+x80));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MAX;
	volatile int64_t x82 = -4250602634894LL;
	int8_t x84 = 23;

	t19 = ((x81<x82)*(x83+x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = INT32_MAX;
	uint64_t x86 = 3490LLU;
	static int8_t x87 = -6;
	int8_t x88 = 11;
	volatile int32_t t20 = -59343420;

	t20 = ((x85<x86)*(x87+x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MAX;
	int8_t x90 = INT8_MIN;
	uint32_t x91 = UINT32_MAX;
	uint8_t x92 = 7U;
	uint32_t t21 = 243060675U;

	t21 = ((x89<x90)*(x91+x92));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x94 = 1LL;
	volatile int64_t x96 = INT64_MAX;
	volatile int64_t t22 = 44033580126915460LL;

	t22 = ((x93<x94)*(x95+x96));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x98 = 4443U;
	static uint8_t x99 = 52U;
	int8_t x100 = -1;
	int32_t t23 = 15777;

	t23 = ((x97<x98)*(x99+x100));

	if (t23 != 51) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x106 = 91771387LLU;

	t24 = ((x105<x106)*(x107+x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x109 = 0U;
	uint32_t x110 = 28064011U;
	volatile int16_t x111 = INT16_MIN;
	int64_t x112 = INT64_MAX;
	volatile int64_t t25 = -5372577035LL;

	t25 = ((x109<x110)*(x111+x112));

	if (t25 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x113 = INT16_MIN;
	int16_t x114 = -11;
	int32_t x115 = -1;
	static int16_t x116 = -7;
	int32_t t26 = -239;

	t26 = ((x113<x114)*(x115+x116));

	if (t26 != -8) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x121 = 1U;
	uint64_t x123 = UINT64_MAX;
	static int16_t x124 = INT16_MIN;

	t27 = ((x121<x122)*(x123+x124));

	if (t27 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x125 = UINT64_MAX;
	volatile int32_t x126 = -104613321;
	static int64_t x127 = INT64_MAX;
	int32_t x128 = -1;
	int64_t t28 = 2466LL;

	t28 = ((x125<x126)*(x127+x128));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x134 = -1;
	int8_t x136 = -1;
	static int32_t t29 = 13;

	t29 = ((x133<x134)*(x135+x136));

	if (t29 != 288) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x138 = UINT16_MAX;
	static uint64_t x140 = UINT64_MAX;
	static volatile uint64_t t30 = 0LLU;

	t30 = ((x137<x138)*(x139+x140));

	if (t30 != 18LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x141 = INT16_MIN;
	static volatile int16_t x142 = INT16_MIN;
	static volatile uint32_t x143 = 1596940U;
	static volatile int64_t x144 = -1LL;
	int64_t t31 = 805416LL;

	t31 = ((x141<x142)*(x143+x144));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x146 = UINT64_MAX;
	static uint16_t x147 = UINT16_MAX;
	uint64_t x148 = UINT64_MAX;
	uint64_t t32 = 51LLU;

	t32 = ((x145<x146)*(x147+x148));

	if (t32 != 65534LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x149 = 19528453750528278LL;
	static uint8_t x150 = 23U;
	volatile int8_t x151 = INT8_MIN;
	uint64_t x152 = 174323664335665165LLU;
	volatile uint64_t t33 = 37081471LLU;

	t33 = ((x149<x150)*(x151+x152));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x153 = INT16_MIN;
	int64_t x154 = INT64_MIN;
	static volatile int16_t x155 = -1;
	volatile uint16_t x156 = UINT16_MAX;

	t34 = ((x153<x154)*(x155+x156));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = INT8_MIN;
	uint16_t x158 = 127U;
	int16_t x159 = 25;
	int32_t x160 = 29534763;
	volatile int32_t t35 = -1;

	t35 = ((x157<x158)*(x159+x160));

	if (t35 != 29534788) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = -1;
	static int64_t x162 = INT64_MIN;
	static int8_t x163 = INT8_MIN;
	static int8_t x164 = -2;
	volatile int32_t t36 = 0;

	t36 = ((x161<x162)*(x163+x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x165 = -12661;
	uint64_t x166 = 9LLU;
	static int32_t x167 = INT32_MIN;
	static int8_t x168 = 0;

	t37 = ((x165<x166)*(x167+x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x170 = INT16_MIN;
	int8_t x171 = INT8_MIN;
	static int16_t x172 = 102;

	t38 = ((x169<x170)*(x171+x172));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x173 = UINT8_MAX;
	volatile int8_t x174 = INT8_MAX;
	int16_t x175 = INT16_MIN;
	int16_t x176 = -17;
	static volatile int32_t t39 = -26;

	t39 = ((x173<x174)*(x175+x176));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x181 = 37;
	int8_t x182 = -23;
	static volatile uint16_t x183 = 21096U;
	int32_t x184 = -884143;
	volatile int32_t t40 = -140706;

	t40 = ((x181<x182)*(x183+x184));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x185 = INT8_MAX;
	int32_t x186 = 18099056;
	int64_t x187 = -3496880LL;
	static int8_t x188 = 57;
	int64_t t41 = -9737LL;

	t41 = ((x185<x186)*(x187+x188));

	if (t41 != -3496823LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x189 = UINT64_MAX;
	volatile int16_t x191 = 0;
	int32_t x192 = -8767285;
	static int32_t t42 = 108;

	t42 = ((x189<x190)*(x191+x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x194 = 20U;
	int32_t x196 = -1;
	int32_t t43 = 20357;

	t43 = ((x193<x194)*(x195+x196));

	if (t43 != -2) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x197 = 6;
	int16_t x198 = 0;
	uint16_t x200 = UINT16_MAX;
	int32_t t44 = 288688743;

	t44 = ((x197<x198)*(x199+x200));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x201 = -1;
	int8_t x202 = INT8_MIN;
	uint64_t x204 = 248922LLU;
	static volatile uint64_t t45 = 11LLU;

	t45 = ((x201<x202)*(x203+x204));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = 10939LL;
	volatile int64_t x206 = INT64_MIN;
	int64_t x207 = INT64_MIN;
	volatile int64_t t46 = 166924856LL;

	t46 = ((x205<x206)*(x207+x208));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x210 = INT32_MAX;
	int64_t t47 = -1LL;

	t47 = ((x209<x210)*(x211+x212));

	if (t47 != -27790856400349871LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x214 = -1;
	uint32_t x215 = 26U;
	int32_t x216 = 7947;
	static volatile uint32_t t48 = 30668082U;

	t48 = ((x213<x214)*(x215+x216));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x217 = 4U;
	static int32_t x218 = -1;
	uint32_t x219 = 9425U;
	static int32_t x220 = INT32_MAX;
	uint32_t t49 = 18152U;

	t49 = ((x217<x218)*(x219+x220));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x221 = -1;
	int32_t x222 = INT32_MIN;
	static int64_t x223 = INT64_MAX;
	volatile int64_t t50 = -1325106051011LL;

	t50 = ((x221<x222)*(x223+x224));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x225 = -1;
	int32_t x226 = 21;
	static int64_t x227 = INT64_MAX;

	t51 = ((x225<x226)*(x227+x228));

	if (t51 != 9223372036485307144LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x229 = 3U;
	volatile uint64_t x230 = 2LLU;
	int32_t x231 = 47622407;
	int16_t x232 = INT16_MIN;
	volatile int32_t t52 = -22144120;

	t52 = ((x229<x230)*(x231+x232));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x233 = 5U;
	int8_t x234 = -1;
	int32_t x235 = -16101;
	int64_t x236 = 1395433643906739LL;
	volatile int64_t t53 = -804017LL;

	t53 = ((x233<x234)*(x235+x236));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x237 = INT32_MAX;
	static volatile int64_t x238 = 15133358LL;
	volatile uint8_t x239 = UINT8_MAX;
	volatile int32_t x240 = -761395169;
	int32_t t54 = -581;

	t54 = ((x237<x238)*(x239+x240));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x242 = -1LL;
	uint32_t x243 = 186U;
	uint8_t x244 = UINT8_MAX;
	static volatile uint32_t t55 = 665U;

	t55 = ((x241<x242)*(x243+x244));

	if (t55 != 441U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x245 = -955;
	uint64_t x246 = 6752LLU;
	volatile uint64_t x247 = 5798610348LLU;
	int16_t x248 = INT16_MAX;

	t56 = ((x245<x246)*(x247+x248));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x259 = INT8_MIN;
	int32_t x260 = INT32_MAX;

	t57 = ((x257<x258)*(x259+x260));

	if (t57 != 2147483519) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x263 = 7;
	static int32_t t58 = 112289605;

	t58 = ((x261<x262)*(x263+x264));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x266 = 22355005LLU;
	int8_t x267 = -1;
	static int16_t x268 = -218;
	int32_t t59 = -345;

	t59 = ((x265<x266)*(x267+x268));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x269 = -1;
	uint8_t x270 = 44U;
	int64_t x271 = -1958777LL;
	int8_t x272 = INT8_MIN;
	volatile int64_t t60 = 194023830615LL;

	t60 = ((x269<x270)*(x271+x272));

	if (t60 != -1958905LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x273 = -1;
	uint32_t x274 = UINT32_MAX;
	static volatile int8_t x275 = INT8_MIN;
	int16_t x276 = -78;
	int32_t t61 = -22060043;

	t61 = ((x273<x274)*(x275+x276));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x277 = INT8_MIN;
	uint32_t x278 = 34906612U;
	uint8_t x279 = 1U;
	int32_t t62 = -3;

	t62 = ((x277<x278)*(x279+x280));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x281 = -1LL;
	uint64_t x282 = UINT64_MAX;
	volatile int32_t t63 = 2;

	t63 = ((x281<x282)*(x283+x284));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x285 = 39;
	int16_t x286 = INT16_MIN;
	volatile uint8_t x287 = UINT8_MAX;
	uint32_t x288 = 475833529U;

	t64 = ((x285<x286)*(x287+x288));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x289 = INT32_MIN;
	int16_t x290 = INT16_MIN;
	int8_t x291 = -1;
	int32_t x292 = -1;
	volatile int32_t t65 = -1;

	t65 = ((x289<x290)*(x291+x292));

	if (t65 != -2) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x293 = INT32_MIN;
	int8_t x294 = 1;
	int32_t x295 = 3278409;
	static int8_t x296 = INT8_MIN;
	volatile int32_t t66 = 1588;

	t66 = ((x293<x294)*(x295+x296));

	if (t66 != 3278281) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x297 = INT16_MAX;
	volatile int8_t x299 = INT8_MIN;
	int8_t x300 = 1;
	volatile int32_t t67 = -15201;

	t67 = ((x297<x298)*(x299+x300));

	if (t67 != -127) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x301 = UINT16_MAX;
	volatile uint8_t x302 = UINT8_MAX;
	volatile uint32_t x304 = UINT32_MAX;

	t68 = ((x301<x302)*(x303+x304));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x305 = -1;
	int8_t x306 = 22;
	volatile int32_t x307 = 4;
	int64_t x308 = INT64_MIN;
	volatile int64_t t69 = -77LL;

	t69 = ((x305<x306)*(x307+x308));

	if (t69 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x309 = UINT64_MAX;
	uint32_t x310 = 18U;
	int32_t x311 = -1;
	static int8_t x312 = INT8_MIN;
	volatile int32_t t70 = -4507;

	t70 = ((x309<x310)*(x311+x312));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x313 = 371LLU;
	uint16_t x314 = 934U;
	int32_t x316 = INT32_MIN;

	t71 = ((x313<x314)*(x315+x316));

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x317 = 13736;
	int64_t x319 = -1LL;
	static int16_t x320 = -1;
	int64_t t72 = -6661117889108LL;

	t72 = ((x317<x318)*(x319+x320));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x322 = 13U;
	uint16_t x323 = UINT16_MAX;
	int8_t x324 = INT8_MAX;
	int32_t t73 = 14;

	t73 = ((x321<x322)*(x323+x324));

	if (t73 != 65662) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x325 = INT64_MAX;
	volatile int8_t x326 = INT8_MIN;
	uint16_t x327 = 41U;
	static uint64_t x328 = 136814LLU;
	volatile uint64_t t74 = 17913130LLU;

	t74 = ((x325<x326)*(x327+x328));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x329 = INT32_MAX;
	int64_t x330 = INT64_MIN;
	int64_t x331 = INT64_MIN;
	uint64_t x332 = 1880550053877489LLU;

	t75 = ((x329<x330)*(x331+x332));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x333 = 2329636042530840LL;
	volatile uint64_t x334 = 161133LLU;
	static int64_t x335 = -1LL;
	int32_t x336 = INT32_MIN;
	volatile int64_t t76 = -311453927450LL;

	t76 = ((x333<x334)*(x335+x336));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x337 = 0U;
	volatile uint16_t x339 = 0U;
	int64_t x340 = INT64_MIN;
	int64_t t77 = 88409891481263128LL;

	t77 = ((x337<x338)*(x339+x340));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x341 = -1;
	int32_t x342 = INT32_MIN;
	int64_t x344 = -1LL;
	int64_t t78 = 41124679554LL;

	t78 = ((x341<x342)*(x343+x344));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x345 = 319741274555781LLU;
	static uint64_t x346 = 2LLU;
	static int16_t x348 = INT16_MIN;
	int32_t t79 = -1;

	t79 = ((x345<x346)*(x347+x348));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x349 = UINT8_MAX;
	uint16_t x351 = 1507U;
	int16_t x352 = INT16_MIN;

	t80 = ((x349<x350)*(x351+x352));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x353 = INT8_MIN;
	static int8_t x354 = INT8_MIN;
	uint64_t x355 = UINT64_MAX;
	int16_t x356 = INT16_MIN;
	static uint64_t t81 = 5771533LLU;

	t81 = ((x353<x354)*(x355+x356));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x358 = 0U;

	t82 = ((x357<x358)*(x359+x360));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x361 = 91U;
	volatile uint64_t x364 = 229989462LLU;
	volatile uint64_t t83 = 11762926LLU;

	t83 = ((x361<x362)*(x363+x364));

	if (t83 != 230054997LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x369 = UINT64_MAX;
	int64_t x370 = 100459937699LL;
	int16_t x371 = INT16_MAX;
	int32_t t84 = 1662919;

	t84 = ((x369<x370)*(x371+x372));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x373 = 1269U;
	uint8_t x374 = 15U;
	volatile int16_t x375 = -560;
	int32_t x376 = -1;
	int32_t t85 = 347;

	t85 = ((x373<x374)*(x375+x376));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x377 = -59;
	volatile uint32_t x378 = UINT32_MAX;
	volatile uint64_t x379 = UINT64_MAX;
	int16_t x380 = 9;
	uint64_t t86 = 2694771332441248934LLU;

	t86 = ((x377<x378)*(x379+x380));

	if (t86 != 8LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x381 = 658U;
	static int64_t x382 = INT64_MIN;
	static int32_t x383 = 1223688;

	t87 = ((x381<x382)*(x383+x384));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x385 = INT8_MIN;
	volatile int8_t x386 = 0;
	int32_t x387 = INT32_MAX;
	int8_t x388 = INT8_MIN;

	t88 = ((x385<x386)*(x387+x388));

	if (t88 != 2147483519) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x389 = -1LL;
	uint64_t x390 = 16851932329115LLU;
	uint64_t x391 = 0LLU;
	uint64_t x392 = 0LLU;

	t89 = ((x389<x390)*(x391+x392));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x393 = INT32_MIN;
	int8_t x394 = INT8_MIN;
	volatile int16_t x395 = INT16_MIN;
	static int8_t x396 = 2;

	t90 = ((x393<x394)*(x395+x396));

	if (t90 != -32766) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x401 = INT64_MIN;
	int64_t x402 = 207484452552133971LL;
	int8_t x403 = INT8_MIN;
	static int8_t x404 = INT8_MIN;
	static volatile int32_t t91 = -1799;

	t91 = ((x401<x402)*(x403+x404));

	if (t91 != -256) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x409 = -1;
	int32_t x410 = INT32_MIN;
	int32_t x411 = 402890081;
	volatile int8_t x412 = 1;
	volatile int32_t t92 = -97;

	t92 = ((x409<x410)*(x411+x412));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x418 = INT16_MAX;
	int16_t x420 = -1;
	static volatile int32_t t93 = 84;

	t93 = ((x417<x418)*(x419+x420));

	if (t93 != 1451) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x421 = UINT8_MAX;
	static int64_t x422 = -1LL;
	uint16_t x423 = 14U;
	uint8_t x424 = UINT8_MAX;
	int32_t t94 = -8498928;

	t94 = ((x421<x422)*(x423+x424));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x425 = UINT16_MAX;
	volatile uint32_t x426 = 244030U;
	static int32_t x427 = INT32_MAX;
	int64_t x428 = INT64_MIN;

	t95 = ((x425<x426)*(x427+x428));

	if (t95 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x429 = 32464551LL;
	int32_t x430 = INT32_MIN;
	uint16_t x431 = 6464U;
	volatile int32_t t96 = 25742284;

	t96 = ((x429<x430)*(x431+x432));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x433 = 221953316LL;
	int32_t x434 = INT32_MAX;
	static uint32_t x435 = 83835U;
	static uint16_t x436 = 23859U;
	uint32_t t97 = 148U;

	t97 = ((x433<x434)*(x435+x436));

	if (t97 != 107694U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x437 = INT16_MIN;
	int16_t x439 = INT16_MIN;
	volatile uint64_t x440 = 157458906130LLU;
	volatile uint64_t t98 = 294083726720892LLU;

	t98 = ((x437<x438)*(x439+x440));

	if (t98 != 157458873362LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x443 = INT8_MIN;
	int32_t x444 = 464;

	t99 = ((x441<x442)*(x443+x444));

	if (t99 != 336) { NG(); } else { ; }
	
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

