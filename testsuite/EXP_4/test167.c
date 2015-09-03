#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MAX;
int32_t x4 = INT32_MIN;
static int8_t x23 = 3;
static int64_t x24 = 2056620791504LL;
int64_t t6 = 3166752216273390724LL;
int32_t x30 = INT32_MIN;
uint32_t x32 = UINT32_MAX;
int32_t x34 = -38725;
uint8_t x36 = 27U;
volatile uint32_t t9 = 702076518U;
uint8_t x51 = 1U;
volatile int16_t x52 = INT16_MIN;
uint8_t x57 = 0U;
int64_t x60 = 17391424327LL;
volatile uint8_t x64 = UINT8_MAX;
volatile int8_t x67 = 1;
static int32_t x69 = 16;
uint32_t x77 = 0U;
static volatile uint64_t t19 = 245526717728118029LLU;
int16_t x82 = -1;
volatile int64_t x83 = INT64_MAX;
static int16_t x85 = INT16_MIN;
int8_t x88 = INT8_MIN;
static uint64_t x93 = UINT64_MAX;
volatile uint8_t x117 = 1U;
int16_t x118 = INT16_MIN;
volatile int16_t x121 = INT16_MAX;
volatile uint32_t t27 = 4406594U;
int16_t x125 = INT16_MIN;
static uint8_t x134 = 2U;
uint32_t x135 = 1U;
int8_t x144 = -1;
int64_t x145 = INT64_MAX;
int8_t x151 = INT8_MAX;
volatile uint32_t t32 = 26761334U;
uint16_t x170 = 6U;
int64_t x171 = -11495343980319LL;
static uint32_t x172 = 372505U;
volatile uint16_t x177 = 62U;
volatile int64_t t37 = 194185504LL;
static int64_t x186 = INT64_MIN;
int16_t x191 = 7016;
int16_t x194 = 0;
int16_t x195 = -1;
volatile uint8_t x201 = UINT8_MAX;
volatile int32_t t43 = -775974;
static uint16_t x214 = 2048U;
uint64_t x216 = UINT64_MAX;
uint32_t x224 = 9981965U;
int32_t x227 = INT32_MIN;
volatile uint64_t t47 = 359LLU;
int64_t t48 = 1354251256LL;
uint32_t t49 = 1236301U;
int8_t x240 = INT8_MIN;
volatile uint64_t t50 = 131664966230LLU;
uint32_t x242 = 2U;
static volatile uint64_t x245 = 2613654937074470LLU;
volatile uint16_t x248 = 14879U;
uint64_t t52 = 481LLU;
int64_t x253 = -7721204232LL;
volatile int64_t t54 = 9143018881LL;
uint32_t x262 = 2U;
int8_t x266 = -5;
uint64_t t57 = 2LLU;
int32_t x272 = INT32_MIN;
uint32_t x273 = 8642U;
static int16_t x274 = -1;
volatile int64_t t59 = 428418270447LL;
volatile int64_t t60 = -2663965751935143056LL;
static volatile uint64_t t62 = 262420228988404908LLU;
volatile int8_t x308 = INT8_MIN;
int64_t t66 = -1163936LL;
int8_t x323 = INT8_MIN;
int8_t x324 = -1;
static int64_t x335 = -1LL;
uint16_t x338 = 765U;
static int8_t x339 = INT8_MIN;
int64_t x343 = -1LL;
volatile uint64_t t74 = 31LLU;
uint64_t x365 = UINT64_MAX;
int64_t x367 = -2996LL;
volatile uint8_t x379 = 12U;
int32_t x381 = INT32_MIN;
int8_t x384 = -13;
int16_t x394 = INT16_MAX;
int32_t x398 = -53909627;
volatile int8_t x399 = INT8_MIN;
uint16_t x403 = 31029U;
static int32_t x404 = INT32_MIN;
volatile int8_t x405 = 1;
int32_t x409 = 114331189;
int32_t x415 = 17155141;
volatile int32_t x416 = -1;
uint8_t x418 = UINT8_MAX;
static int32_t x420 = -1;
int16_t x421 = -14199;
uint32_t x432 = 180U;
static int16_t x435 = INT16_MIN;
int8_t x437 = INT8_MAX;
int32_t t91 = 1;
static int16_t x446 = INT16_MIN;
volatile int8_t x451 = -5;
int32_t x454 = INT32_MIN;
static uint32_t x458 = 167051154U;
uint64_t t95 = 1112359971327259LLU;
int32_t x472 = -1;
volatile uint16_t x478 = UINT16_MAX;


void f0(void) {
	volatile uint8_t x1 = 0U;
	int32_t x3 = 5;
	int32_t t0 = -106624448;

	t0 = (x1&(x2^(x3+x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	static volatile int16_t x6 = INT16_MIN;
	volatile uint64_t x7 = 139242LLU;
	static int8_t x8 = INT8_MAX;
	volatile uint64_t t1 = 2067407LLU;

	t1 = (x5&(x6^(x7+x8)));

	if (t1 != 18446744073709396073LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	uint64_t x10 = UINT64_MAX;
	uint32_t x11 = 17167U;
	uint16_t x12 = 471U;
	uint64_t t2 = 63LLU;

	t2 = (x9&(x10^(x11+x12)));

	if (t2 != 18446744073709533977LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 24096U;
	int8_t x14 = -9;
	uint16_t x15 = UINT16_MAX;
	static volatile uint64_t x16 = 2964041LLU;
	volatile uint64_t t3 = 246387606LLU;

	t3 = (x13&(x14^(x15+x16)));

	if (t3 != 17440LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int8_t x18 = -1;
	volatile int16_t x19 = INT16_MIN;
	int64_t x20 = 121398996375302830LL;
	volatile int64_t t4 = -271205LL;

	t4 = (x17&(x18^(x19+x20)));

	if (t4 != -121398996525645824LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	uint8_t x22 = 117U;
	volatile int64_t t5 = -112167545560597LL;

	t5 = (x21&(x22^(x23+x24)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 7;
	volatile int64_t x26 = INT64_MIN;
	volatile uint8_t x27 = 3U;
	uint32_t x28 = 2909784U;

	t6 = (x25&(x26^(x27+x28)));

	if (t6 != 3LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 0;
	volatile uint16_t x31 = 1010U;
	static uint32_t t7 = 0U;

	t7 = (x29&(x30^(x31+x32)));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MAX;
	int16_t x35 = INT16_MAX;
	static volatile int32_t t8 = -17;

	t8 = (x33&(x34^(x35+x36)));

	if (t8 != 26785) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint32_t x37 = 1U;
	int32_t x38 = 2789;
	int16_t x39 = INT16_MIN;
	uint32_t x40 = 1U;

	t9 = (x37&(x38^(x39+x40)));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = INT16_MAX;
	int32_t x42 = -41566;
	int16_t x43 = -345;
	int16_t x44 = -490;
	volatile int32_t t10 = -1;

	t10 = (x41&(x42^(x43+x44)));

	if (t10 != 8479) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	static int16_t x46 = -1;
	static int64_t x47 = 72LL;
	uint8_t x48 = 27U;
	int64_t t11 = 2264032803299596LL;

	t11 = (x45&(x46^(x47+x48)));

	if (t11 != 9223372036854775708LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 2777U;
	uint16_t x50 = 5U;
	volatile int32_t t12 = 52;

	t12 = (x49&(x50^(x51+x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = 3392403LL;
	uint64_t x54 = 8245613336147553735LLU;
	uint8_t x55 = 3U;
	volatile uint16_t x56 = UINT16_MAX;
	volatile uint64_t t13 = 1885970692309518777LLU;

	t13 = (x53&(x54^(x55+x56)));

	if (t13 != 82305LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = INT8_MIN;
	static volatile int8_t x59 = -18;
	static int64_t t14 = -21751LL;

	t14 = (x57&(x58^(x59+x60)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -6152047;
	int8_t x62 = -3;
	int64_t x63 = INT64_MIN;
	static int64_t t15 = -706560527655669294LL;

	t15 = (x61&(x62^(x63+x64)));

	if (t15 != 9223372036848623616LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MAX;
	uint64_t x66 = 612LLU;
	uint32_t x68 = 46073U;
	volatile uint64_t t16 = 2805803969236LLU;

	t16 = (x65&(x66^(x67+x68)));

	if (t16 != 45470LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = INT32_MAX;
	uint32_t x71 = 325U;
	volatile int32_t x72 = INT32_MAX;
	volatile uint32_t t17 = 0U;

	t17 = (x69&(x70^(x71+x72)));

	if (t17 != 16U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 6U;
	int32_t x74 = INT32_MIN;
	static int16_t x75 = INT16_MIN;
	static volatile int32_t x76 = INT32_MAX;
	int32_t t18 = -5;

	t18 = (x73&(x74^(x75+x76)));

	if (t18 != 6) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x78 = 969U;
	int32_t x79 = 919160;
	static uint64_t x80 = UINT64_MAX;

	t19 = (x77&(x78^(x79+x80)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1406558009LL;
	int32_t x84 = -1;
	static volatile int64_t t20 = -1311116934051014LL;

	t20 = (x81&(x82^(x83+x84)));

	if (t20 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x86 = INT16_MIN;
	volatile int32_t x87 = 1865771;
	int32_t t21 = 0;

	t21 = (x85&(x86^(x87+x88)));

	if (t21 != -1867776) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x94 = -1;
	int64_t x95 = INT64_MIN;
	static uint32_t x96 = UINT32_MAX;
	uint64_t t22 = 49172233529LLU;

	t22 = (x93&(x94^(x95+x96)));

	if (t22 != 9223372032559808512LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x97 = -1;
	static int64_t x98 = 4628LL;
	static uint16_t x99 = 62U;
	int8_t x100 = -1;
	volatile int64_t t23 = 392LL;

	t23 = (x97&(x98^(x99+x100)));

	if (t23 != 4649LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = INT16_MIN;
	static volatile int16_t x106 = -15182;
	int8_t x107 = INT8_MAX;
	uint64_t x108 = 125022969715672695LLU;
	uint64_t t24 = 6790958423796LLU;

	t24 = (x105&(x106^(x107+x108)));

	if (t24 != 18321721103993864192LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x113 = INT16_MIN;
	volatile int32_t x114 = INT32_MIN;
	int16_t x115 = 1134;
	int8_t x116 = 53;
	int32_t t25 = INT32_MIN;

	t25 = (x113&(x114^(x115+x116)));

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x119 = 55707;
	uint64_t x120 = 29233432LLU;
	uint64_t t26 = 4LLU;

	t26 = (x117&(x118^(x119+x120)));

	if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x122 = UINT32_MAX;
	volatile int16_t x123 = INT16_MIN;
	volatile uint16_t x124 = UINT16_MAX;

	t27 = (x121&(x122^(x123+x124)));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x126 = -8420;
	volatile int32_t x127 = 439540134;
	int64_t x128 = -3951600322LL;
	int64_t t28 = -21932894217927886LL;

	t28 = (x125&(x126^(x127+x128)));

	if (t28 != 3512041472LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x133 = 110U;
	static volatile uint8_t x136 = UINT8_MAX;
	uint32_t t29 = 32797U;

	t29 = (x133&(x134^(x135+x136)));

	if (t29 != 2U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x141 = INT32_MIN;
	uint64_t x142 = UINT64_MAX;
	uint32_t x143 = 1377U;
	volatile uint64_t t30 = 3233964190LLU;

	t30 = (x141&(x142^(x143+x144)));

	if (t30 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x146 = UINT8_MAX;
	static int32_t x147 = INT32_MIN;
	int64_t x148 = INT64_MAX;
	volatile int64_t t31 = 121297747076446LL;

	t31 = (x145&(x146^(x147+x148)));

	if (t31 != 9223372034707291904LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x149 = UINT8_MAX;
	int16_t x150 = INT16_MIN;
	uint32_t x152 = UINT32_MAX;

	t32 = (x149&(x150^(x151+x152)));

	if (t32 != 126U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x153 = UINT32_MAX;
	uint16_t x154 = UINT16_MAX;
	uint32_t x155 = 359367U;
	static uint32_t x156 = 28U;
	uint32_t t33 = 313009U;

	t33 = (x153&(x154^(x155+x156)));

	if (t33 != 361500U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x165 = UINT16_MAX;
	int64_t x166 = -1LL;
	static uint16_t x167 = 0U;
	volatile int32_t x168 = 133004003;
	volatile int64_t t34 = 0LL;

	t34 = (x165&(x166^(x167+x168)));

	if (t34 != 34076LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x169 = 35;
	int64_t t35 = -33136091LL;

	t35 = (x169&(x170^(x171+x172)));

	if (t35 != 32LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x173 = 66;
	int8_t x174 = -1;
	volatile uint32_t x175 = 48U;
	volatile int8_t x176 = -10;
	uint32_t t36 = 14U;

	t36 = (x173&(x174^(x175+x176)));

	if (t36 != 64U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x178 = 4U;
	int64_t x179 = -55714106522526LL;
	int8_t x180 = INT8_MIN;

	t37 = (x177&(x178^(x179+x180)));

	if (t37 != 38LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x185 = -3617461;
	volatile uint64_t x187 = 1845146259202339839LLU;
	uint64_t x188 = 32807085777606393LLU;
	static uint64_t t38 = 74679353418643LLU;

	t38 = (x185&(x186^(x187+x188)));

	if (t38 != 11101325381834655816LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x189 = -63;
	static int16_t x190 = INT16_MAX;
	int32_t x192 = -1;
	int32_t t39 = 7049801;

	t39 = (x189&(x190^(x191+x192)));

	if (t39 != 25728) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x193 = INT32_MIN;
	uint8_t x196 = 105U;
	volatile int32_t t40 = 44884;

	t40 = (x193&(x194^(x195+x196)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x202 = INT64_MAX;
	int16_t x203 = INT16_MAX;
	int64_t x204 = 0LL;
	int64_t t41 = -171020996435591LL;

	t41 = (x201&(x202^(x203+x204)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x205 = 45U;
	static volatile int16_t x206 = -1;
	volatile uint16_t x207 = UINT16_MAX;
	int8_t x208 = -8;
	int32_t t42 = -448684705;

	t42 = (x205&(x206^(x207+x208)));

	if (t42 != 8) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x209 = -8;
	int16_t x210 = INT16_MAX;
	uint8_t x211 = 1U;
	static uint16_t x212 = 1U;

	t43 = (x209&(x210^(x211+x212)));

	if (t43 != 32760) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x213 = INT8_MIN;
	volatile uint64_t x215 = 1591103903119LLU;
	uint64_t t44 = 256684701LLU;

	t44 = (x213&(x214^(x215+x216)));

	if (t44 != 1591103905152LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x217 = -341;
	static int64_t x218 = INT64_MIN;
	static int8_t x219 = INT8_MIN;
	int8_t x220 = INT8_MIN;
	volatile int64_t t45 = 8188LL;

	t45 = (x217&(x218^(x219+x220)));

	if (t45 != 9223372036854775296LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x221 = INT64_MAX;
	static int8_t x222 = INT8_MAX;
	int32_t x223 = INT32_MIN;
	volatile int64_t t46 = -274351LL;

	t46 = (x221&(x222^(x223+x224)));

	if (t46 != 2157465714LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x225 = INT32_MIN;
	static int16_t x226 = INT16_MIN;
	uint64_t x228 = 135757394LLU;

	t47 = (x225&(x226^(x227+x228)));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x229 = UINT8_MAX;
	int16_t x230 = INT16_MIN;
	static uint16_t x231 = 12U;
	int64_t x232 = INT64_MIN;

	t48 = (x229&(x230^(x231+x232)));

	if (t48 != 12LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x233 = UINT32_MAX;
	int8_t x234 = -1;
	int8_t x235 = 0;
	static int16_t x236 = INT16_MIN;

	t49 = (x233&(x234^(x235+x236)));

	if (t49 != 32767U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x237 = INT16_MIN;
	uint64_t x238 = 225472205LLU;
	uint16_t x239 = 1U;

	t50 = (x237&(x238^(x239+x240)));

	if (t50 != 18446744073484075008LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x241 = INT16_MAX;
	static int64_t x243 = INT64_MIN;
	static volatile uint16_t x244 = 49U;
	static volatile int64_t t51 = -4640LL;

	t51 = (x241&(x242^(x243+x244)));

	if (t51 != 51LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x246 = INT8_MIN;
	volatile int16_t x247 = INT16_MIN;

	t52 = (x245&(x246^(x247+x248)));

	if (t52 != 16646LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x249 = INT8_MAX;
	volatile int64_t x250 = INT64_MIN;
	int32_t x251 = INT32_MIN;
	uint16_t x252 = 1473U;
	volatile int64_t t53 = -86029579LL;

	t53 = (x249&(x250^(x251+x252)));

	if (t53 != 65LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x254 = 31;
	static int32_t x255 = 328250764;
	int32_t x256 = -1;

	t54 = (x253&(x254^(x255+x256)));

	if (t54 != 327189904LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x257 = UINT16_MAX;
	int8_t x258 = -1;
	int64_t x259 = 100049330426343129LL;
	static int8_t x260 = -10;
	volatile int64_t t55 = 58816038201469420LL;

	t55 = (x257&(x258^(x259+x260)));

	if (t55 != 4400LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x261 = UINT8_MAX;
	uint8_t x263 = UINT8_MAX;
	int8_t x264 = INT8_MIN;
	volatile uint32_t t56 = 205U;

	t56 = (x261&(x262^(x263+x264)));

	if (t56 != 125U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x265 = -19;
	int32_t x267 = -1;
	uint64_t x268 = UINT64_MAX;

	t57 = (x265&(x266^(x267+x268)));

	if (t57 != 5LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x269 = INT8_MIN;
	int32_t x270 = INT32_MIN;
	int8_t x271 = 0;
	volatile int32_t t58 = -271884360;

	t58 = (x269&(x270^(x271+x272)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x275 = INT8_MAX;
	int64_t x276 = -13155LL;

	t59 = (x273&(x274^(x275+x276)));

	if (t59 != 8386LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x277 = -1;
	int64_t x278 = 413443LL;
	volatile int64_t x279 = INT64_MIN;
	int32_t x280 = 6;

	t60 = (x277&(x278^(x279+x280)));

	if (t60 != -9223372036854362363LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x285 = 1U;
	uint64_t x286 = 125680LLU;
	uint8_t x287 = 26U;
	static volatile uint64_t x288 = 6496746LLU;
	volatile uint64_t t61 = 684700145812471569LLU;

	t61 = (x285&(x286^(x287+x288)));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x293 = INT64_MIN;
	int32_t x294 = INT32_MIN;
	int16_t x295 = INT16_MAX;
	uint64_t x296 = UINT64_MAX;

	t62 = (x293&(x294^(x295+x296)));

	if (t62 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x297 = 1848LL;
	static uint8_t x298 = 125U;
	int16_t x299 = INT16_MIN;
	static int16_t x300 = -1;
	int64_t t63 = -1909342174043831843LL;

	t63 = (x297&(x298^(x299+x300)));

	if (t63 != 1792LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x305 = 194886358707LLU;
	int64_t x306 = INT64_MAX;
	uint16_t x307 = 688U;
	uint64_t t64 = 4498LLU;

	t64 = (x305&(x306^(x307+x308)));

	if (t64 != 194886358147LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x309 = INT32_MAX;
	int32_t x310 = INT32_MIN;
	uint8_t x311 = UINT8_MAX;
	int64_t x312 = -40225636259LL;
	volatile int64_t t65 = 235680064LL;

	t65 = (x309&(x310^(x311+x312)));

	if (t65 != 576553308LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x313 = 254877LL;
	int8_t x314 = INT8_MAX;
	int8_t x315 = -48;
	volatile int8_t x316 = 0;

	t66 = (x313&(x314^(x315+x316)));

	if (t66 != 254861LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x321 = UINT64_MAX;
	int64_t x322 = INT64_MAX;
	uint64_t t67 = 50748973LLU;

	t67 = (x321&(x322^(x323+x324)));

	if (t67 != 9223372036854775936LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x325 = INT8_MIN;
	int16_t x326 = -1;
	int16_t x327 = INT16_MAX;
	uint32_t x328 = 12823U;
	volatile uint32_t t68 = 53926531U;

	t68 = (x325&(x326^(x327+x328)));

	if (t68 != 4294921600U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x333 = INT16_MAX;
	static int64_t x334 = INT64_MAX;
	volatile uint32_t x336 = UINT32_MAX;
	int64_t t69 = 3261LL;

	t69 = (x333&(x334^(x335+x336)));

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x337 = INT16_MIN;
	static int16_t x340 = -1;
	static int32_t t70 = -154307903;

	t70 = (x337&(x338^(x339+x340)));

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x341 = INT64_MIN;
	static volatile int16_t x342 = INT16_MAX;
	static uint16_t x344 = UINT16_MAX;
	int64_t t71 = 12316607695876LL;

	t71 = (x341&(x342^(x343+x344)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x345 = INT32_MIN;
	int16_t x346 = -1;
	volatile int64_t x347 = INT64_MIN;
	volatile uint8_t x348 = UINT8_MAX;
	static int64_t t72 = 6013348467350635LL;

	t72 = (x345&(x346^(x347+x348)));

	if (t72 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x353 = -1;
	int32_t x354 = INT32_MIN;
	uint8_t x355 = UINT8_MAX;
	static int64_t x356 = INT64_MIN;
	volatile int64_t t73 = -3920384LL;

	t73 = (x353&(x354^(x355+x356)));

	if (t73 != 9223372034707292415LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x361 = 6937032116008LLU;
	int16_t x362 = INT16_MIN;
	int16_t x363 = INT16_MIN;
	volatile uint16_t x364 = 6U;

	t74 = (x361&(x362^(x363+x364)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x366 = -1;
	int8_t x368 = -1;
	volatile uint64_t t75 = 11623864758872LLU;

	t75 = (x365&(x366^(x367+x368)));

	if (t75 != 2996LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x373 = INT64_MIN;
	uint32_t x374 = UINT32_MAX;
	int32_t x375 = 115543683;
	int32_t x376 = -1;
	volatile int64_t t76 = -1983238063318943083LL;

	t76 = (x373&(x374^(x375+x376)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x377 = UINT8_MAX;
	int8_t x378 = INT8_MAX;
	static int8_t x380 = 8;
	volatile int32_t t77 = 2;

	t77 = (x377&(x378^(x379+x380)));

	if (t77 != 107) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x382 = INT8_MAX;
	volatile int8_t x383 = INT8_MAX;
	volatile int32_t t78 = 70421;

	t78 = (x381&(x382^(x383+x384)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x393 = -798;
	uint64_t x395 = 15202125960319471LLU;
	int16_t x396 = -115;
	static volatile uint64_t t79 = 98700536767LLU;

	t79 = (x393&(x394^(x395+x396)));

	if (t79 != 15202125960342658LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x397 = INT8_MAX;
	volatile uint64_t x400 = UINT64_MAX;
	volatile uint64_t t80 = 20651467870447763LLU;

	t80 = (x397&(x398^(x399+x400)));

	if (t80 != 122LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x401 = -10646758184460LL;
	int8_t x402 = INT8_MAX;
	volatile int64_t t81 = 79065548642LL;

	t81 = (x401&(x402^(x403+x404)));

	if (t81 != -10647223916224LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x406 = 2209789273027LLU;
	static uint8_t x407 = UINT8_MAX;
	volatile uint32_t x408 = UINT32_MAX;
	volatile uint64_t t82 = 2737040233060519LLU;

	t82 = (x405&(x406^(x407+x408)));

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x410 = 26813LL;
	volatile uint8_t x411 = 0U;
	volatile int32_t x412 = INT32_MIN;
	volatile int64_t t83 = 582408LL;

	t83 = (x409&(x410^(x411+x412)));

	if (t83 != 2101LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x413 = INT8_MAX;
	uint16_t x414 = 2U;
	int32_t t84 = 5504;

	t84 = (x413&(x414^(x415+x416)));

	if (t84 != 70) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x417 = UINT16_MAX;
	int8_t x419 = 1;
	int32_t t85 = 2270;

	t85 = (x417&(x418^(x419+x420)));

	if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x422 = 1LLU;
	int8_t x423 = -2;
	uint64_t x424 = 215LLU;
	volatile uint64_t t86 = 11545649868737796LLU;

	t86 = (x421&(x422^(x423+x424)));

	if (t86 != 128LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x425 = 30272;
	volatile int64_t x426 = INT64_MAX;
	volatile int64_t x427 = INT64_MIN;
	volatile int32_t x428 = INT32_MAX;
	int64_t t87 = -97130787406389235LL;

	t87 = (x425&(x426^(x427+x428)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x429 = INT8_MAX;
	int32_t x430 = INT32_MIN;
	uint16_t x431 = 234U;
	volatile uint32_t t88 = 111U;

	t88 = (x429&(x430^(x431+x432)));

	if (t88 != 30U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x433 = -7;
	uint32_t x434 = 1421U;
	int32_t x436 = -1;
	uint32_t t89 = 5255U;

	t89 = (x433&(x434^(x435+x436)));

	if (t89 != 4294933104U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x438 = INT8_MIN;
	volatile int64_t x439 = -3794361600160227534LL;
	int32_t x440 = -1;
	volatile int64_t t90 = 62LL;

	t90 = (x437&(x438^(x439+x440)));

	if (t90 != 49LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x441 = UINT16_MAX;
	static int32_t x442 = 5117569;
	volatile uint16_t x443 = UINT16_MAX;
	uint8_t x444 = 3U;

	t91 = (x441&(x442^(x443+x444)));

	if (t91 != 5763) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x445 = UINT64_MAX;
	uint64_t x447 = 4030069208280LLU;
	static int16_t x448 = INT16_MIN;
	volatile uint64_t t92 = 1LLU;

	t92 = (x445&(x446^(x447+x448)));

	if (t92 != 18446740043640403160LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x449 = INT16_MAX;
	uint64_t x450 = 507325850212010095LLU;
	static int64_t x452 = INT64_MAX;
	volatile uint64_t t93 = 6631583553410804LLU;

	t93 = (x449&(x450^(x451+x452)));

	if (t93 != 30613LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint8_t x453 = 56U;
	uint16_t x455 = 3012U;
	static uint32_t x456 = UINT32_MAX;
	uint32_t t94 = 105U;

	t94 = (x453&(x454^(x455+x456)));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x457 = 3LLU;
	int32_t x459 = INT32_MAX;
	static uint16_t x460 = 0U;

	t95 = (x457&(x458^(x459+x460)));

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x465 = -1;
	static uint32_t x466 = 1575U;
	static int32_t x467 = -1;
	volatile int8_t x468 = -1;
	volatile uint32_t t96 = 123U;

	t96 = (x465&(x466^(x467+x468)));

	if (t96 != 4294965721U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x469 = 3U;
	int8_t x470 = INT8_MIN;
	uint64_t x471 = 185703149812LLU;
	volatile uint64_t t97 = 407102885172LLU;

	t97 = (x469&(x470^(x471+x472)));

	if (t97 != 3LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x473 = UINT32_MAX;
	int16_t x474 = -43;
	static int64_t x475 = INT64_MIN;
	uint32_t x476 = UINT32_MAX;
	volatile int64_t t98 = -2231150384501LL;

	t98 = (x473&(x474^(x475+x476)));

	if (t98 != 42LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x477 = -1;
	volatile int8_t x479 = 1;
	int16_t x480 = 3854;
	static volatile int32_t t99 = -1;

	t99 = (x477&(x478^(x479+x480)));

	if (t99 != 61680) { NG(); } else { ; }
	
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

