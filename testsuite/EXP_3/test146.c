#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x2 = -63;
int32_t x3 = -1;
static uint8_t x4 = UINT8_MAX;
volatile int64_t t0 = 28432916022889167LL;
int16_t x7 = -189;
static uint64_t x10 = UINT64_MAX;
int32_t x12 = INT32_MIN;
volatile int8_t x19 = -5;
volatile int8_t x20 = -1;
int8_t x22 = INT8_MIN;
volatile int8_t x25 = INT8_MIN;
int16_t x26 = INT16_MIN;
uint32_t x27 = 99757U;
uint32_t x31 = 30912764U;
int32_t t9 = 144536;
uint16_t x53 = 980U;
volatile uint64_t t11 = 450172683805LLU;
int16_t x66 = INT16_MIN;
int64_t x68 = 310547531315044LL;
int64_t x71 = -102222420291704299LL;
int64_t x77 = -19297LL;
int16_t x78 = -1;
int64_t t16 = 7664803511LL;
uint32_t x82 = 0U;
static uint64_t t20 = 7264202LLU;
int8_t x116 = INT8_MAX;
static volatile int64_t t26 = -5535759059376LL;
static int16_t x144 = INT16_MAX;
int32_t x149 = INT32_MAX;
int16_t x150 = INT16_MIN;
volatile int32_t t28 = -173;
static uint32_t x164 = 1U;
int8_t x172 = -1;
volatile uint64_t t32 = 668333065519618LLU;
static volatile int16_t x199 = INT16_MIN;
uint32_t t37 = 0U;
int32_t x202 = -1934;
static volatile int32_t x210 = INT32_MIN;
volatile int64_t x212 = INT64_MIN;
uint32_t x213 = 71401U;
volatile int8_t x214 = -15;
int64_t x215 = -1LL;
int64_t t40 = -112067262312LL;
static uint64_t x218 = UINT64_MAX;
volatile int8_t x229 = INT8_MIN;
static volatile uint64_t t43 = 1LLU;
volatile uint32_t x247 = UINT32_MAX;
static uint64_t x263 = UINT64_MAX;
uint16_t x269 = 31014U;
static int8_t x286 = -2;
int8_t x288 = -6;
int8_t x290 = INT8_MIN;
volatile uint8_t x295 = 4U;
static int16_t x312 = 3;
volatile int32_t x315 = -184;
volatile int8_t x317 = 3;
volatile uint32_t x325 = 1362464U;
static uint32_t t59 = 8171704U;
int32_t x335 = -38222;
int16_t x336 = INT16_MIN;
volatile int64_t t60 = 2560188780873LL;
uint64_t x352 = UINT64_MAX;
volatile int8_t x354 = 10;
static uint16_t x359 = UINT16_MAX;
static int64_t x369 = -1LL;
static volatile int64_t t65 = 16112LL;
static int8_t x382 = INT8_MIN;
static volatile uint32_t t66 = 65119U;
int32_t x401 = INT32_MAX;
int8_t x402 = 1;
uint8_t x421 = 65U;
int64_t x422 = 11514453506292136LL;
int32_t x425 = INT32_MAX;
uint32_t x428 = 62805322U;
volatile uint32_t t73 = 57U;
int8_t x445 = -1;
uint16_t x447 = UINT16_MAX;
static int32_t x462 = -1;
volatile uint32_t t78 = 41U;
int16_t x465 = 276;
volatile uint32_t t80 = 1177734U;
int16_t x476 = INT16_MAX;
int8_t x481 = INT8_MAX;
uint8_t x485 = UINT8_MAX;
int16_t x487 = -204;
static int8_t x488 = INT8_MIN;
volatile int16_t x490 = INT16_MIN;
int64_t x498 = INT64_MIN;
int64_t x501 = INT64_MIN;
volatile uint64_t t88 = 3432108656853002LLU;
static int64_t x520 = -1LL;
static int32_t x525 = INT32_MIN;
uint16_t x527 = UINT16_MAX;
uint16_t x539 = UINT16_MAX;
volatile int16_t x553 = INT16_MIN;
uint8_t x556 = 0U;
static int16_t x558 = INT16_MAX;
uint32_t x559 = UINT32_MAX;
static uint16_t x564 = 2359U;


void f0(void) {
	int64_t x1 = INT64_MIN;

	t0 = ((x1|x2)*(x3+x4));

	if (t0 != -16002LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 15777U;
	static uint64_t x6 = UINT64_MAX;
	volatile int32_t x8 = 1762998;
	volatile uint64_t t1 = 7144495428941LLU;

	t1 = ((x5|x6)*(x7+x8));

	if (t1 != 18446744073707788807LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int16_t x11 = INT16_MAX;
	uint64_t t2 = 2650393588LLU;

	t2 = ((x9|x10)*(x11+x12));

	if (t2 != 2147450881LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	volatile int64_t x14 = -1LL;
	uint8_t x15 = UINT8_MAX;
	int8_t x16 = INT8_MIN;
	static volatile int64_t t3 = -689791312051LL;

	t3 = ((x13|x14)*(x15+x16));

	if (t3 != -127LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 56543487869LLU;
	int32_t x18 = -1;
	volatile uint64_t t4 = 3619690LLU;

	t4 = ((x17|x18)*(x19+x20));

	if (t4 != 6LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = 518922LL;
	volatile int32_t x23 = INT32_MAX;
	int64_t x24 = 111040LL;
	volatile int64_t t5 = -1037LL;

	t5 = ((x21|x22)*(x23+x24));

	if (t5 != -253416173066LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x28 = INT16_MIN;
	static uint32_t t6 = 36U;

	t6 = ((x25|x26)*(x27+x28));

	if (t6 != 4286392704U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 1U;
	static volatile int32_t x30 = INT32_MAX;
	static uint16_t x32 = 2U;
	volatile uint32_t t7 = 988996185U;

	t7 = ((x29|x30)*(x31+x32));

	if (t7 != 4264054530U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = 444U;
	int32_t x42 = -7;
	volatile uint8_t x43 = 3U;
	uint64_t x44 = 786851924252592202LLU;
	uint64_t t8 = 27192654356135LLU;

	t8 = ((x41|x42)*(x43+x44));

	if (t8 != 15791352389652866841LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = 43;
	uint8_t x46 = 30U;
	uint8_t x47 = UINT8_MAX;
	uint8_t x48 = 24U;

	t9 = ((x45|x46)*(x47+x48));

	if (t9 != 17577) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x49 = -1;
	static uint64_t x50 = UINT64_MAX;
	int16_t x51 = 12436;
	static int64_t x52 = INT64_MIN;
	volatile uint64_t t10 = 355772908LLU;

	t10 = ((x49|x50)*(x51+x52));

	if (t10 != 9223372036854763372LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x54 = 1088479197484876163LLU;
	static uint64_t x55 = 225596711LLU;
	volatile int16_t x56 = INT16_MAX;

	t11 = ((x53|x54)*(x55+x56));

	if (t11 != 15414262548022588650LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = INT8_MIN;
	static int16_t x58 = -1;
	static volatile int32_t x59 = -2627726;
	static int32_t x60 = 2287597;
	static int32_t t12 = -1003;

	t12 = ((x57|x58)*(x59+x60));

	if (t12 != 340129) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x65 = INT16_MAX;
	static int64_t x67 = -4599439940405478224LL;
	static int64_t t13 = 12388181451267190LL;

	t13 = ((x65|x66)*(x67+x68));

	if (t13 != 4599129392874163180LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x69 = 242366LLU;
	int64_t x70 = INT64_MIN;
	static int64_t x72 = INT64_MAX;
	uint64_t t14 = 387115LLU;

	t14 = ((x69|x70)*(x71+x72));

	if (t14 != 17184918646432998104LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x73 = INT16_MIN;
	int32_t x74 = INT32_MAX;
	static uint32_t x75 = 31U;
	int16_t x76 = INT16_MIN;
	uint32_t t15 = 35402U;

	t15 = ((x73|x74)*(x75+x76));

	if (t15 != 32737U) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x79 = 2;
	uint8_t x80 = 6U;

	t16 = ((x77|x78)*(x79+x80));

	if (t16 != -8LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x81 = -6054574904567740LL;
	int16_t x83 = -1;
	int16_t x84 = 5;
	static volatile int64_t t17 = 844202018LL;

	t17 = ((x81|x82)*(x83+x84));

	if (t17 != -24218299618270960LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x89 = UINT8_MAX;
	uint16_t x90 = 11U;
	int8_t x91 = INT8_MAX;
	volatile uint16_t x92 = UINT16_MAX;
	volatile int32_t t18 = 0;

	t18 = ((x89|x90)*(x91+x92));

	if (t18 != 16743810) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x93 = INT64_MIN;
	int64_t x94 = -1LL;
	int32_t x95 = 513415244;
	uint8_t x96 = UINT8_MAX;
	volatile int64_t t19 = -347958843348662471LL;

	t19 = ((x93|x94)*(x95+x96));

	if (t19 != -513415499LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x105 = -1;
	volatile int64_t x106 = INT64_MAX;
	int8_t x107 = -1;
	uint64_t x108 = 980LLU;

	t20 = ((x105|x106)*(x107+x108));

	if (t20 != 18446744073709550637LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x109 = -1;
	int32_t x110 = INT32_MAX;
	uint32_t x111 = 1451U;
	uint64_t x112 = UINT64_MAX;
	uint64_t t21 = 4198801569809LLU;

	t21 = ((x109|x110)*(x111+x112));

	if (t21 != 18446744073709550166LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x113 = 211;
	volatile uint32_t x114 = 11U;
	int16_t x115 = -1;
	uint32_t t22 = 5178599U;

	t22 = ((x113|x114)*(x115+x116));

	if (t22 != 27594U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x117 = UINT16_MAX;
	int8_t x118 = -1;
	int32_t x119 = -1;
	static int32_t x120 = -1;
	int32_t t23 = 6532;

	t23 = ((x117|x118)*(x119+x120));

	if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x125 = INT64_MIN;
	uint64_t x126 = UINT64_MAX;
	int64_t x127 = -426366461595745LL;
	int32_t x128 = INT32_MIN;
	volatile uint64_t t24 = 2LLU;

	t24 = ((x125|x126)*(x127+x128));

	if (t24 != 426368609079393LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x133 = INT8_MIN;
	volatile int32_t x134 = 2;
	uint64_t x135 = UINT64_MAX;
	int32_t x136 = -1;
	volatile uint64_t t25 = 1677337998705697LLU;

	t25 = ((x133|x134)*(x135+x136));

	if (t25 != 252LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x137 = -3LL;
	int32_t x138 = INT32_MIN;
	int16_t x139 = INT16_MAX;
	static int16_t x140 = 1;

	t26 = ((x137|x138)*(x139+x140));

	if (t26 != -98304LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x141 = INT32_MIN;
	int32_t x142 = -1;
	static int8_t x143 = INT8_MIN;
	volatile int32_t t27 = -12;

	t27 = ((x141|x142)*(x143+x144));

	if (t27 != -32639) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x151 = INT16_MIN;
	static int16_t x152 = INT16_MAX;

	t28 = ((x149|x150)*(x151+x152));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x157 = UINT16_MAX;
	uint64_t x158 = 1259304951LLU;
	static uint32_t x159 = 4117278U;
	static int32_t x160 = INT32_MAX;
	volatile uint64_t t29 = 7001542LLU;

	t29 = ((x157|x158)*(x159+x160));

	if (t29 != 2709596624779291875LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x161 = INT8_MIN;
	volatile uint64_t x162 = UINT64_MAX;
	volatile int32_t x163 = INT32_MIN;
	uint64_t t30 = 1590393701288528LLU;

	t30 = ((x161|x162)*(x163+x164));

	if (t30 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x165 = INT32_MIN;
	int32_t x166 = -1;
	uint8_t x167 = 6U;
	volatile uint8_t x168 = UINT8_MAX;
	int32_t t31 = 1182;

	t31 = ((x165|x166)*(x167+x168));

	if (t31 != -261) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x169 = 0;
	uint64_t x170 = 2313217409LLU;
	uint32_t x171 = 4U;

	t32 = ((x169|x170)*(x171+x172));

	if (t32 != 6939652227LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x173 = INT8_MIN;
	int64_t x174 = INT64_MIN;
	uint64_t x175 = UINT64_MAX;
	int16_t x176 = INT16_MAX;
	volatile uint64_t t33 = 49LLU;

	t33 = ((x173|x174)*(x175+x176));

	if (t33 != 18446744073705357568LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x177 = -1;
	uint32_t x178 = 526U;
	uint64_t x179 = 11014LLU;
	static int8_t x180 = INT8_MIN;
	static uint64_t t34 = 511981355969517LLU;

	t34 = ((x177|x178)*(x179+x180));

	if (t34 != 46755013973370LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x181 = 1952U;
	int32_t x182 = INT32_MAX;
	int8_t x183 = INT8_MIN;
	uint16_t x184 = 16391U;
	volatile uint32_t t35 = 2973411U;

	t35 = ((x181|x182)*(x183+x184));

	if (t35 != 2147467385U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x189 = INT64_MAX;
	int32_t x190 = -1;
	int32_t x191 = 13;
	uint16_t x192 = 1553U;
	volatile int64_t t36 = 41870LL;

	t36 = ((x189|x190)*(x191+x192));

	if (t36 != -1566LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x197 = 10U;
	static volatile uint32_t x198 = 911220U;
	volatile uint8_t x200 = UINT8_MAX;

	t37 = ((x197|x198)*(x199+x200));

	if (t37 != 437950082U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x201 = 30U;
	volatile uint8_t x203 = 9U;
	volatile int16_t x204 = INT16_MIN;
	int32_t t38 = 1770;

	t38 = ((x201|x202)*(x203+x204));

	if (t38 != 62962798) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x209 = -1LL;
	int64_t x211 = 618366LL;
	volatile int64_t t39 = 185620687757LL;

	t39 = ((x209|x210)*(x211+x212));

	if (t39 != 9223372036854157442LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x216 = 3U;

	t40 = ((x213|x214)*(x215+x216));

	if (t40 != 8589934578LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x217 = INT64_MIN;
	uint16_t x219 = 24U;
	uint64_t x220 = 564217LLU;
	static volatile uint64_t t41 = 477LLU;

	t41 = ((x217|x218)*(x219+x220));

	if (t41 != 18446744073708987375LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x230 = INT64_MIN;
	int16_t x231 = INT16_MIN;
	int16_t x232 = INT16_MIN;
	volatile int64_t t42 = -362108406002377LL;

	t42 = ((x229|x230)*(x231+x232));

	if (t42 != 8388608LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x237 = INT32_MIN;
	int32_t x238 = -2;
	uint64_t x239 = UINT64_MAX;
	int64_t x240 = 451449648192667440LL;

	t43 = ((x237|x238)*(x239+x240));

	if (t43 != 17543844777324216738LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x241 = 1674566999U;
	uint64_t x242 = 36807LLU;
	static volatile int8_t x243 = 58;
	uint64_t x244 = UINT64_MAX;
	volatile uint64_t t44 = 56340771543767655LLU;

	t44 = ((x241|x242)*(x243+x244));

	if (t44 != 95450355423LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x245 = INT8_MIN;
	int8_t x246 = 0;
	int64_t x248 = -1LL;
	volatile int64_t t45 = -7216664354LL;

	t45 = ((x245|x246)*(x247+x248));

	if (t45 != -549755813632LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x261 = -1;
	int64_t x262 = -436145669646LL;
	static int64_t x264 = -1LL;
	volatile uint64_t t46 = 126744LLU;

	t46 = ((x261|x262)*(x263+x264));

	if (t46 != 2LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x270 = -1;
	uint8_t x271 = UINT8_MAX;
	int32_t x272 = INT32_MIN;
	int32_t t47 = 431637;

	t47 = ((x269|x270)*(x271+x272));

	if (t47 != 2147483393) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x273 = -1;
	int8_t x274 = INT8_MAX;
	static int64_t x275 = INT64_MAX;
	int8_t x276 = -1;
	volatile int64_t t48 = -888LL;

	t48 = ((x273|x274)*(x275+x276));

	if (t48 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x277 = INT32_MIN;
	volatile int32_t x278 = INT32_MIN;
	int8_t x279 = 25;
	int64_t x280 = -1LL;
	volatile int64_t t49 = -161080LL;

	t49 = ((x277|x278)*(x279+x280));

	if (t49 != -51539607552LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x285 = INT16_MAX;
	uint64_t x287 = 52811157LLU;
	uint64_t t50 = 339750LLU;

	t50 = ((x285|x286)*(x287+x288));

	if (t50 != 18446744073656740465LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x289 = INT16_MIN;
	static uint64_t x291 = UINT64_MAX;
	int16_t x292 = INT16_MIN;
	uint64_t t51 = 17968LLU;

	t51 = ((x289|x290)*(x291+x292));

	if (t51 != 4194432LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x293 = -58LL;
	int64_t x294 = INT64_MIN;
	volatile int64_t x296 = -1LL;
	volatile int64_t t52 = -13823914LL;

	t52 = ((x293|x294)*(x295+x296));

	if (t52 != -174LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x297 = 32698U;
	volatile int64_t x298 = INT64_MAX;
	static int32_t x299 = INT32_MAX;
	uint64_t x300 = 2415316136LLU;
	volatile uint64_t t53 = 243920969LLU;

	t53 = ((x297|x298)*(x299+x300));

	if (t53 != 9223372032291976025LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x301 = -1;
	static int32_t x302 = -1;
	int8_t x303 = INT8_MAX;
	volatile int64_t x304 = -3288131499708118339LL;
	int64_t t54 = -976301623888LL;

	t54 = ((x301|x302)*(x303+x304));

	if (t54 != 3288131499708118212LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x305 = UINT32_MAX;
	int16_t x306 = -1;
	uint32_t x307 = UINT32_MAX;
	int16_t x308 = INT16_MAX;
	uint32_t t55 = 549437319U;

	t55 = ((x305|x306)*(x307+x308));

	if (t55 != 4294934530U) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x309 = INT64_MAX;
	int8_t x310 = INT8_MIN;
	uint8_t x311 = UINT8_MAX;
	static int64_t t56 = 161346LL;

	t56 = ((x309|x310)*(x311+x312));

	if (t56 != -258LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x313 = INT64_MAX;
	volatile int64_t x314 = -15334879LL;
	int8_t x316 = -1;
	volatile int64_t t57 = 9374312LL;

	t57 = ((x313|x314)*(x315+x316));

	if (t57 != 185LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x318 = UINT32_MAX;
	int8_t x319 = 10;
	uint8_t x320 = 1U;
	static volatile uint32_t t58 = 58229U;

	t58 = ((x317|x318)*(x319+x320));

	if (t58 != 4294967285U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x326 = INT16_MIN;
	int16_t x327 = 0;
	int16_t x328 = -3362;

	t59 = ((x325|x326)*(x327+x328));

	if (t59 != 46368704U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x333 = INT64_MIN;
	volatile int8_t x334 = -1;

	t60 = ((x333|x334)*(x335+x336));

	if (t60 != 70990LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x349 = INT32_MIN;
	static int16_t x350 = -1488;
	uint32_t x351 = 500213U;
	volatile uint64_t t61 = 3573967906288LLU;

	t61 = ((x349|x350)*(x351+x352));

	if (t61 != 18446744072965236160LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x353 = INT8_MAX;
	static uint16_t x355 = 1014U;
	static volatile uint32_t x356 = 7175153U;
	volatile uint32_t t62 = 966866757U;

	t62 = ((x353|x354)*(x355+x356));

	if (t62 != 911373209U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x357 = INT8_MIN;
	uint8_t x358 = 3U;
	uint16_t x360 = 14U;
	static int32_t t63 = 216160335;

	t63 = ((x357|x358)*(x359+x360));

	if (t63 != -8193625) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x361 = 100U;
	int16_t x362 = INT16_MAX;
	int8_t x363 = INT8_MIN;
	volatile int16_t x364 = -1;
	volatile int32_t t64 = -285;

	t64 = ((x361|x362)*(x363+x364));

	if (t64 != -4226943) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x370 = 27U;
	int8_t x371 = 26;
	int16_t x372 = INT16_MIN;

	t65 = ((x369|x370)*(x371+x372));

	if (t65 != 32742LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x381 = INT16_MIN;
	uint32_t x383 = 5U;
	static uint16_t x384 = 23U;

	t66 = ((x381|x382)*(x383+x384));

	if (t66 != 4294963712U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x385 = -1;
	volatile int64_t x386 = INT64_MIN;
	uint8_t x387 = 17U;
	static uint8_t x388 = UINT8_MAX;
	int64_t t67 = -133LL;

	t67 = ((x385|x386)*(x387+x388));

	if (t67 != -272LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x389 = INT16_MIN;
	static int16_t x390 = INT16_MAX;
	volatile uint64_t x391 = UINT64_MAX;
	volatile int16_t x392 = INT16_MIN;
	volatile uint64_t t68 = 1351922166036LLU;

	t68 = ((x389|x390)*(x391+x392));

	if (t68 != 32769LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x393 = 0;
	volatile int64_t x394 = INT64_MAX;
	int32_t x395 = INT32_MIN;
	uint64_t x396 = UINT64_MAX;
	static volatile uint64_t t69 = 119718LLU;

	t69 = ((x393|x394)*(x395+x396));

	if (t69 != 9223372039002259457LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x403 = 50024682909694LLU;
	static uint16_t x404 = 282U;
	uint64_t t70 = 3311927718LLU;

	t70 = ((x401|x402)*(x403+x404));

	if (t70 != 11797754323114102504LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x405 = -1;
	static int8_t x406 = INT8_MIN;
	int64_t x407 = INT64_MAX;
	int16_t x408 = -1;
	volatile int64_t t71 = -164664550310658781LL;

	t71 = ((x405|x406)*(x407+x408));

	if (t71 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x423 = -427LL;
	int64_t x424 = -1LL;
	static volatile int64_t t72 = -1234490192036989214LL;

	t72 = ((x421|x422)*(x423+x424));

	if (t72 != -4928186100693062028LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x426 = -1;
	volatile uint16_t x427 = 3903U;

	t73 = ((x425|x426)*(x427+x428));

	if (t73 != 4232158071U) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x441 = -1;
	int8_t x442 = INT8_MAX;
	static uint32_t x443 = 66525241U;
	int64_t x444 = INT64_MIN;
	int64_t t74 = -16961770462097LL;

	t74 = ((x441|x442)*(x443+x444));

	if (t74 != 9223372036788250567LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x446 = INT64_MIN;
	volatile uint32_t x448 = 2647286U;
	static volatile int64_t t75 = -325339812513141614LL;

	t75 = ((x445|x446)*(x447+x448));

	if (t75 != -2712821LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x453 = -1LL;
	uint64_t x454 = 115234LLU;
	int32_t x455 = -112700;
	int64_t x456 = 2903995704LL;
	static uint64_t t76 = 1838773813765006LLU;

	t76 = ((x453|x454)*(x455+x456));

	if (t76 != 18446744070805668612LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x457 = 90LLU;
	uint8_t x458 = 4U;
	int32_t x459 = -1;
	static int8_t x460 = -55;
	uint64_t t77 = 4LLU;

	t77 = ((x457|x458)*(x459+x460));

	if (t77 != 18446744073709546352LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x461 = -47;
	uint32_t x463 = UINT32_MAX;
	volatile uint8_t x464 = 13U;

	t78 = ((x461|x462)*(x463+x464));

	if (t78 != 4294967284U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x466 = -1;
	static int8_t x467 = 2;
	static int16_t x468 = -1;
	static volatile int32_t t79 = -51385944;

	t79 = ((x465|x466)*(x467+x468));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x469 = -1;
	static uint8_t x470 = UINT8_MAX;
	volatile uint32_t x471 = 202892296U;
	uint8_t x472 = UINT8_MAX;

	t80 = ((x469|x470)*(x471+x472));

	if (t80 != 4092074745U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x473 = -257296385295670022LL;
	volatile int16_t x474 = INT16_MIN;
	static uint16_t x475 = UINT16_MAX;
	int64_t t81 = 55525LL;

	t81 = ((x473|x474)*(x475+x476));

	if (t81 != -2290633204LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x477 = -1;
	uint16_t x478 = 12951U;
	static uint16_t x479 = UINT16_MAX;
	int32_t x480 = 364243;
	static int32_t t82 = 833420;

	t82 = ((x477|x478)*(x479+x480));

	if (t82 != -429778) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x482 = -43;
	int8_t x483 = INT8_MIN;
	static int8_t x484 = INT8_MIN;
	static volatile int32_t t83 = 84868693;

	t83 = ((x481|x482)*(x483+x484));

	if (t83 != 256) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x486 = 69442964U;
	static uint32_t t84 = 14U;

	t84 = ((x485|x486)*(x487+x488));

	if (t84 != 2714704204U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x489 = 726421592U;
	int64_t x491 = INT64_MAX;
	uint64_t x492 = 407622751160962LLU;
	volatile uint64_t t85 = 116012652977LLU;

	t85 = ((x489|x490)*(x491+x492));

	if (t85 != 14719284830657539160LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x493 = INT32_MIN;
	uint32_t x494 = 17274859U;
	int16_t x495 = INT16_MIN;
	uint32_t x496 = 46U;
	static volatile uint32_t t86 = 32959U;

	t86 = ((x493|x494)*(x495+x496));

	if (t86 != 1667746874U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x497 = UINT64_MAX;
	uint8_t x499 = UINT8_MAX;
	uint8_t x500 = 30U;
	volatile uint64_t t87 = 889658LLU;

	t87 = ((x497|x498)*(x499+x500));

	if (t87 != 18446744073709551331LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x502 = 238911041024654448LLU;
	int16_t x503 = 0;
	static uint32_t x504 = 7049U;

	t88 = ((x501|x502)*(x503+x504));

	if (t88 != 14653589512074782704LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x505 = 1874586U;
	uint32_t x506 = 20U;
	static uint8_t x507 = UINT8_MAX;
	uint16_t x508 = 42U;
	volatile uint32_t t89 = 62U;

	t89 = ((x505|x506)*(x507+x508));

	if (t89 != 556753230U) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint32_t x509 = 7976U;
	volatile uint64_t x510 = 76867948415LLU;
	int8_t x511 = -1;
	int32_t x512 = -1;
	uint64_t t90 = 6721815981234LLU;

	t90 = ((x509|x510)*(x511+x512));

	if (t90 != 18446743919973646594LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x513 = INT8_MIN;
	uint32_t x514 = UINT32_MAX;
	int64_t x515 = 32760748202LL;
	static volatile uint64_t x516 = 119118250367661201LLU;
	volatile uint64_t t91 = 138355262844453LLU;

	t91 = ((x513|x514)*(x515+x516));

	if (t91 != 9689595514850407109LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x517 = 426212625985392LLU;
	int8_t x518 = -1;
	int32_t x519 = -180;
	volatile uint64_t t92 = 11023686953131LLU;

	t92 = ((x517|x518)*(x519+x520));

	if (t92 != 181LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x526 = -1LL;
	int32_t x528 = -44667;
	volatile int64_t t93 = 382470LL;

	t93 = ((x525|x526)*(x527+x528));

	if (t93 != -20868LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x529 = 65220;
	volatile int16_t x530 = INT16_MIN;
	int8_t x531 = INT8_MAX;
	int16_t x532 = -1;
	int32_t t94 = 0;

	t94 = ((x529|x530)*(x531+x532));

	if (t94 != -39816) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x537 = -1;
	int16_t x538 = INT16_MIN;
	uint32_t x540 = 2U;
	volatile uint32_t t95 = 218901U;

	t95 = ((x537|x538)*(x539+x540));

	if (t95 != 4294901759U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x545 = -48;
	uint16_t x546 = 1U;
	int8_t x547 = INT8_MAX;
	int32_t x548 = -1;
	volatile int32_t t96 = 106;

	t96 = ((x545|x546)*(x547+x548));

	if (t96 != -5922) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x554 = INT8_MIN;
	int16_t x555 = 5958;
	int32_t t97 = -5;

	t97 = ((x553|x554)*(x555+x556));

	if (t97 != -762624) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x557 = 1U;
	int32_t x560 = -1;
	uint32_t t98 = 9680U;

	t98 = ((x557|x558)*(x559+x560));

	if (t98 != 4294901762U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x561 = -1;
	int32_t x562 = INT32_MIN;
	volatile int64_t x563 = 960757LL;
	volatile int64_t t99 = -32847320123760LL;

	t99 = ((x561|x562)*(x563+x564));

	if (t99 != -963116LL) { NG(); } else { ; }
	
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

