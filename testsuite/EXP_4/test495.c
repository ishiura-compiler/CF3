#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = -1;
static int16_t x18 = -5;
static volatile int64_t x20 = 827LL;
uint16_t x31 = UINT16_MAX;
int16_t x34 = INT16_MIN;
static uint32_t x50 = UINT32_MAX;
static int8_t x58 = INT8_MAX;
int8_t x70 = -1;
volatile int8_t x73 = INT8_MIN;
static int8_t x75 = -1;
int16_t x76 = -1;
int32_t x81 = INT32_MIN;
int8_t x96 = INT8_MIN;
int64_t x102 = INT64_MIN;
static uint16_t x118 = UINT16_MAX;
uint64_t t19 = 19LLU;
uint64_t x131 = UINT64_MAX;
static uint16_t x134 = 2497U;
int16_t x135 = INT16_MIN;
int8_t x143 = 0;
static volatile int32_t t22 = -58829;
int64_t t23 = 13405569108409LL;
uint8_t x158 = 0U;
int16_t x180 = INT16_MIN;
uint16_t x184 = 21U;
static volatile uint32_t t27 = 300U;
volatile int64_t x187 = -115658LL;
uint8_t x199 = 1U;
uint16_t x213 = 241U;
volatile uint8_t x219 = 20U;
int16_t x221 = INT16_MIN;
int16_t x224 = INT16_MAX;
volatile int32_t t35 = -6685338;
uint32_t x225 = 4U;
volatile int8_t x227 = -1;
int8_t x228 = 6;
volatile uint32_t t36 = 7594083U;
uint8_t x229 = 24U;
int32_t x230 = 19;
volatile uint64_t t39 = 381LLU;
int16_t x249 = INT16_MIN;
int16_t x255 = -1;
int64_t t42 = 107112454LL;
int8_t x262 = 12;
int64_t x263 = -1LL;
int8_t x268 = INT8_MAX;
static int8_t x276 = -60;
uint16_t x281 = 1985U;
uint8_t x285 = 0U;
static volatile int8_t x287 = INT8_MAX;
int64_t x290 = -1LL;
uint8_t x292 = 60U;
uint64_t t50 = 1531LLU;
static volatile uint32_t t51 = 13U;
static int64_t x305 = 330184732824LL;
volatile int64_t x320 = 744529176825346038LL;
volatile uint32_t x330 = 2U;
uint32_t x334 = 5427470U;
int8_t x339 = INT8_MIN;
uint64_t t60 = 383365983414771590LLU;
int16_t x345 = -13698;
static volatile int64_t x348 = -1LL;
volatile uint32_t x351 = 130U;
int16_t x352 = INT16_MIN;
volatile uint64_t t64 = UINT64_MAX;
volatile int64_t x389 = -1LL;
static volatile int64_t t67 = -620653LL;
int8_t x393 = -20;
volatile int32_t x396 = 52645645;
uint64_t t68 = 12412373471810LLU;
volatile uint8_t x401 = 25U;
volatile int8_t x402 = -1;
int8_t x422 = INT8_MIN;
uint64_t t71 = 549LLU;
volatile int32_t x425 = INT32_MIN;
int64_t x426 = -1LL;
volatile int64_t t72 = -338219730958166461LL;
static uint32_t x430 = 1683827U;
uint64_t x432 = 3132LLU;
int64_t x437 = -3765LL;
static int16_t x438 = -14490;
static uint64_t x445 = 1219301391954LLU;
int8_t x456 = INT8_MAX;
int16_t x472 = -1;
volatile int32_t x475 = INT32_MAX;
int8_t x486 = -1;
uint64_t x488 = 285LLU;
volatile int64_t x492 = -1LL;
int64_t t83 = 8LL;
int16_t x493 = 3;
uint32_t x495 = 792135U;
int8_t x504 = -1;
volatile uint64_t t85 = 64023165LLU;
static int16_t x508 = -257;
int32_t x511 = -442;
int32_t x516 = -27288;
volatile uint64_t t88 = 25493851864682865LLU;
int16_t x520 = -1;
static int8_t x532 = INT8_MIN;
static int16_t x533 = 58;
static int8_t x550 = INT8_MIN;
uint64_t x563 = 4LLU;
int8_t x567 = 24;


void f0(void) {
	int64_t x6 = INT64_MAX;
	int64_t x7 = -1369899LL;
	static int32_t x8 = 46;
	static volatile int64_t t0 = -380841421329336LL;

	t0 = (x5+(x6^(x7*x8)));

	if (t0 != -9223372036791760456LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = 7;
	int8_t x10 = -54;
	static uint64_t x11 = 2309402970220762965LLU;
	static int16_t x12 = 1668;
	uint64_t t1 = 6LLU;

	t1 = (x9+(x10^(x11*x12)));

	if (t1 != 3285357077063662117LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = INT16_MIN;
	uint64_t x19 = 701LLU;
	static uint64_t t2 = 1294116260607LLU;

	t2 = (x17+(x18^(x19*x20)));

	if (t2 != 18446744073708939124LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x29 = INT64_MAX;
	int16_t x30 = 7;
	uint64_t x32 = UINT64_MAX;
	uint64_t t3 = 4898LLU;

	t3 = (x29+(x30^(x31*x32)));

	if (t3 != 9223372036854710277LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x33 = INT64_MAX;
	int16_t x35 = INT16_MIN;
	volatile int64_t x36 = -1LL;
	int64_t t4 = 242LL;

	t4 = (x33+(x34^(x35*x36)));

	if (t4 != 9223372036854710271LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x45 = UINT64_MAX;
	int32_t x46 = -756;
	volatile int32_t x47 = -1;
	int64_t x48 = 18571490946712300LL;
	volatile uint64_t t5 = 366955991105LLU;

	t5 = (x45+(x46^(x47*x48)));

	if (t5 != 18571490946711575LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x49 = INT32_MIN;
	static volatile uint16_t x51 = UINT16_MAX;
	int8_t x52 = INT8_MAX;
	uint32_t t6 = 1735280U;

	t6 = (x49+(x50^(x51*x52)));

	if (t6 != 2139160702U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x57 = INT16_MIN;
	int64_t x59 = 58374638733059LL;
	int64_t x60 = -1LL;
	int64_t t7 = 1937807LL;

	t7 = (x57+(x58^(x59*x60)));

	if (t7 != -58374638765950LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x61 = -125;
	static volatile int16_t x62 = -1643;
	volatile int8_t x63 = 1;
	uint8_t x64 = 0U;
	int32_t t8 = 1;

	t8 = (x61+(x62^(x63*x64)));

	if (t8 != -1768) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x69 = UINT16_MAX;
	int8_t x71 = -1;
	int8_t x72 = 0;
	volatile int32_t t9 = 267;

	t9 = (x69+(x70^(x71*x72)));

	if (t9 != 65534) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x74 = -1;
	volatile int32_t t10 = 280160147;

	t10 = (x73+(x74^(x75*x76)));

	if (t10 != -130) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x82 = INT32_MIN;
	int64_t x83 = -1LL;
	int16_t x84 = INT16_MAX;
	int64_t t11 = 8146430167137LL;

	t11 = (x81+(x82^(x83*x84)));

	if (t11 != -32767LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x85 = 1;
	uint64_t x86 = 5581953841LLU;
	int16_t x87 = INT16_MAX;
	uint64_t x88 = UINT64_MAX;
	volatile uint64_t t12 = 17980666LLU;

	t12 = (x85+(x86^(x87*x88)));

	if (t12 != 18446744068127611697LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x89 = -53;
	int64_t x90 = INT64_MAX;
	volatile uint32_t x91 = 452152757U;
	volatile int64_t x92 = -1LL;
	int64_t t13 = -4799815042839134LL;

	t13 = (x89+(x90^(x91*x92)));

	if (t13 != -9223372036402623105LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x93 = -226;
	int16_t x94 = INT16_MIN;
	static uint64_t x95 = 397418748840LLU;
	volatile uint64_t t14 = 240LLU;

	t14 = (x93+(x94^(x95*x96)));

	if (t14 != 50869599841054LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x101 = -2;
	volatile int16_t x103 = -6;
	int8_t x104 = INT8_MIN;
	static volatile int64_t t15 = 122353LL;

	t15 = (x101+(x102^(x103*x104)));

	if (t15 != -9223372036854775042LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x113 = 0;
	static uint64_t x114 = UINT64_MAX;
	volatile uint8_t x115 = UINT8_MAX;
	int16_t x116 = -1;
	uint64_t t16 = 2393279660358LLU;

	t16 = (x113+(x114^(x115*x116)));

	if (t16 != 254LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x117 = -11766691893979LL;
	int8_t x119 = 2;
	static int64_t x120 = -1LL;
	volatile int64_t t17 = 441551755368546LL;

	t17 = (x117+(x118^(x119*x120)));

	if (t17 != -11766691959514LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x121 = 5U;
	int64_t x122 = INT64_MIN;
	int8_t x123 = -60;
	volatile uint16_t x124 = UINT16_MAX;
	int64_t t18 = 1202821716589961821LL;

	t18 = (x121+(x122^(x123*x124)));

	if (t18 != 9223372036850843713LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x125 = -1;
	volatile uint64_t x126 = 3LLU;
	int32_t x127 = INT32_MAX;
	static int8_t x128 = -1;

	t19 = (x125+(x126^(x127*x128)));

	if (t19 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x129 = INT64_MAX;
	volatile uint32_t x130 = 111512631U;
	int16_t x132 = INT16_MAX;
	static volatile uint64_t t20 = 564LLU;

	t20 = (x129+(x130^(x131*x132)));

	if (t20 != 9223372036743236661LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x133 = 10;
	static uint8_t x136 = 0U;
	volatile int32_t t21 = -1;

	t21 = (x133+(x134^(x135*x136)));

	if (t21 != 2507) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x141 = 1U;
	uint8_t x142 = 65U;
	int8_t x144 = 1;

	t22 = (x141+(x142^(x143*x144)));

	if (t22 != 66) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x149 = -244;
	static volatile int16_t x150 = -1;
	int16_t x151 = INT16_MAX;
	int64_t x152 = -181478422LL;

	t23 = (x149+(x150^(x151*x152)));

	if (t23 != 5946503453429LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x157 = 81U;
	int16_t x159 = INT16_MIN;
	static int32_t x160 = -1;
	static uint32_t t24 = 20551296U;

	t24 = (x157+(x158^(x159*x160)));

	if (t24 != 32849U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x161 = INT64_MAX;
	static uint64_t x162 = 578517680LLU;
	volatile uint8_t x163 = 12U;
	static int16_t x164 = -11094;
	static uint64_t t25 = 3245157LLU;

	t25 = (x161+(x162^(x163*x164)));

	if (t25 != 9223372036276391239LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x177 = 107;
	volatile int32_t x178 = INT32_MIN;
	int16_t x179 = 112;
	int32_t t26 = -519;

	t26 = (x177+(x178^(x179*x180)));

	if (t26 != 2143813739) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x181 = INT16_MIN;
	uint32_t x182 = UINT32_MAX;
	uint8_t x183 = 29U;

	t27 = (x181+(x182^(x183*x184)));

	if (t27 != 4294933918U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x185 = 27799U;
	int32_t x186 = INT32_MIN;
	int32_t x188 = -1;
	volatile int64_t t28 = 520116095LL;

	t28 = (x185+(x186^(x187*x188)));

	if (t28 != -2147340191LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x189 = -1;
	uint8_t x190 = 11U;
	int8_t x191 = INT8_MAX;
	int8_t x192 = INT8_MIN;
	static volatile int32_t t29 = -14;

	t29 = (x189+(x190^(x191*x192)));

	if (t29 != -16246) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x193 = INT64_MIN;
	int64_t x194 = -3197494774241LL;
	int8_t x195 = INT8_MAX;
	int32_t x196 = -1;
	int64_t t30 = -508LL;

	t30 = (x193+(x194^(x195*x196)));

	if (t30 != -9223368839360001634LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x197 = 1U;
	static volatile uint16_t x198 = 3U;
	uint8_t x200 = 9U;
	volatile int32_t t31 = -1237;

	t31 = (x197+(x198^(x199*x200)));

	if (t31 != 11) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x209 = 1472877;
	volatile uint32_t x210 = 905844U;
	volatile int32_t x211 = INT32_MIN;
	volatile uint64_t x212 = UINT64_MAX;
	volatile uint64_t t32 = 2LLU;

	t32 = (x209+(x210^(x211*x212)));

	if (t32 != 2149862369LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x214 = 2356875;
	uint8_t x215 = 7U;
	static volatile int32_t x216 = -2073;
	static volatile int32_t t33 = 21379320;

	t33 = (x213+(x214^(x215*x216)));

	if (t33 != -2346293) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x217 = INT32_MIN;
	static int8_t x218 = INT8_MAX;
	static uint8_t x220 = 5U;
	int32_t t34 = -29991;

	t34 = (x217+(x218^(x219*x220)));

	if (t34 != -2147483621) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x222 = INT8_MIN;
	int16_t x223 = -155;

	t35 = (x221+(x222^(x223*x224)));

	if (t35 != 5046043) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x226 = 7;

	t36 = (x225+(x226^(x227*x228)));

	if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x231 = 126940U;
	static int8_t x232 = INT8_MIN;
	uint32_t t37 = 10339U;

	t37 = (x229+(x230^(x231*x232)));

	if (t37 != 4278719019U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x237 = INT8_MAX;
	int64_t x238 = -1LL;
	int32_t x239 = 228;
	static volatile uint64_t x240 = 5683895087423759312LLU;
	uint64_t t38 = 0LLU;

	t38 = (x237+(x238^(x239*x240)));

	if (t38 != 13790749300761041726LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x245 = -1LL;
	static int8_t x246 = INT8_MIN;
	static uint64_t x247 = UINT64_MAX;
	static int32_t x248 = -1;

	t39 = (x245+(x246^(x247*x248)));

	if (t39 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x250 = 0U;
	int16_t x251 = 1;
	uint16_t x252 = 26256U;
	int32_t t40 = 1732546;

	t40 = (x249+(x250^(x251*x252)));

	if (t40 != -6512) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x253 = INT8_MAX;
	int64_t x254 = -4706549197073169LL;
	int32_t x256 = -1;
	volatile int64_t t41 = -2425162218206389748LL;

	t41 = (x253+(x254^(x255*x256)));

	if (t41 != -4706549197073043LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x257 = INT64_MAX;
	volatile int32_t x258 = INT32_MIN;
	uint16_t x259 = 37U;
	static int8_t x260 = 0;

	t42 = (x257+(x258^(x259*x260)));

	if (t42 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x261 = INT8_MIN;
	volatile uint64_t x264 = UINT64_MAX;
	static volatile uint64_t t43 = 31980814LLU;

	t43 = (x261+(x262^(x263*x264)));

	if (t43 != 18446744073709551501LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x265 = INT16_MAX;
	volatile uint32_t x266 = 247129396U;
	int16_t x267 = INT16_MIN;
	volatile uint32_t t44 = 243U;

	t44 = (x265+(x266^(x267*x268)));

	if (t44 != 4051363123U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x269 = UINT8_MAX;
	static uint64_t x270 = 196976475359911289LLU;
	uint16_t x271 = 0U;
	static int64_t x272 = INT64_MAX;
	uint64_t t45 = 2459701LLU;

	t45 = (x269+(x270^(x271*x272)));

	if (t45 != 196976475359911544LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x273 = 893267481228852674LLU;
	int64_t x274 = 2979568137430325LL;
	int8_t x275 = INT8_MIN;
	volatile uint64_t t46 = 2464452097LLU;

	t46 = (x273+(x274^(x275*x276)));

	if (t46 != 896247049366288631LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x277 = INT8_MIN;
	int16_t x278 = INT16_MIN;
	uint64_t x279 = UINT64_MAX;
	volatile int8_t x280 = INT8_MAX;
	uint64_t t47 = 7535LLU;

	t47 = (x277+(x278^(x279*x280)));

	if (t47 != 32513LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint16_t x282 = UINT16_MAX;
	int64_t x283 = -1LL;
	uint8_t x284 = 57U;
	volatile int64_t t48 = 8667LL;

	t48 = (x281+(x282^(x283*x284)));

	if (t48 != -63495LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x286 = 3U;
	uint32_t x288 = 28964U;
	volatile uint32_t t49 = 1387509U;

	t49 = (x285+(x286^(x287*x288)));

	if (t49 != 3678431U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x289 = 4147924644475162LLU;
	int16_t x291 = 1954;

	t50 = (x289+(x290^(x291*x292)));

	if (t50 != 4147924644357921LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x297 = INT32_MAX;
	int16_t x298 = INT16_MIN;
	uint32_t x299 = UINT32_MAX;
	int16_t x300 = INT16_MIN;

	t51 = (x297+(x298^(x299*x300)));

	if (t51 != 2147418111U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x301 = -14621000231372LL;
	uint32_t x302 = 84840U;
	uint64_t x303 = 1062149060LLU;
	int64_t x304 = 55LL;
	volatile uint64_t t52 = 3LLU;

	t52 = (x301+(x302^(x303*x304)));

	if (t52 != 18446729511127569064LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x306 = 174048LLU;
	int32_t x307 = 16952934;
	volatile int16_t x308 = -1;
	uint64_t t53 = 147857575LLU;

	t53 = (x305+(x306^(x307*x308)));

	if (t53 != 330167953170LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x317 = -5824455;
	int32_t x318 = -759279;
	uint64_t x319 = 883306LLU;
	uint64_t t54 = 4181685787850797LLU;

	t54 = (x317+(x318^(x319*x320)));

	if (t54 != 16230651003820322310LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x321 = UINT8_MAX;
	static int32_t x322 = 843648846;
	int32_t x323 = 19663;
	static uint16_t x324 = 9U;
	int32_t t55 = 0;

	t55 = (x321+(x322^(x323*x324)));

	if (t55 != 843824392) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x325 = 7052U;
	int32_t x326 = -1;
	volatile uint8_t x327 = 11U;
	int64_t x328 = -1LL;
	static volatile int64_t t56 = 3976374LL;

	t56 = (x325+(x326^(x327*x328)));

	if (t56 != 7062LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x329 = -25;
	int16_t x331 = -88;
	int64_t x332 = -1LL;
	volatile int64_t t57 = -12822371466123LL;

	t57 = (x329+(x330^(x331*x332)));

	if (t57 != 65LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x333 = INT8_MAX;
	volatile uint8_t x335 = 8U;
	int64_t x336 = 10409202LL;
	volatile int64_t t58 = -1188866419964LL;

	t58 = (x333+(x334^(x335*x336)));

	if (t58 != 77887261LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x337 = 4LL;
	int64_t x338 = 3439LL;
	int8_t x340 = INT8_MAX;
	int64_t t59 = 1114209LL;

	t59 = (x337+(x338^(x339*x340)));

	if (t59 != -12813LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x341 = 6380U;
	static int8_t x342 = -1;
	static int8_t x343 = -10;
	uint64_t x344 = 28080366119LLU;

	t60 = (x341+(x342^(x343*x344)));

	if (t60 != 280803667569LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x346 = 9LLU;
	static volatile int8_t x347 = INT8_MIN;
	volatile uint64_t t61 = 20LLU;

	t61 = (x345+(x346^(x347*x348)));

	if (t61 != 18446744073709538055LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x349 = INT16_MIN;
	volatile uint16_t x350 = UINT16_MAX;
	volatile uint32_t t62 = 142483U;

	t62 = (x349+(x350^(x351*x352)));

	if (t62 != 4290740223U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x353 = -1;
	volatile int16_t x354 = -30;
	int8_t x355 = INT8_MAX;
	int8_t x356 = -4;
	int32_t t63 = 2220928;

	t63 = (x353+(x354^(x355*x356)));

	if (t63 != 485) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x357 = 1U;
	static uint64_t x358 = UINT64_MAX;
	volatile int64_t x359 = -1LL;
	int64_t x360 = -1LL;

	t64 = (x357+(x358^(x359*x360)));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x381 = -78839656;
	volatile uint32_t x382 = 24056416U;
	uint64_t x383 = 3547834994545224838LLU;
	int32_t x384 = INT32_MIN;
	uint64_t t65 = 1732589147LLU;

	t65 = (x381+(x382^(x383*x384)));

	if (t65 != 5924284910872040184LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x385 = INT16_MIN;
	static int64_t x386 = INT64_MIN;
	int64_t x387 = INT64_MIN;
	static uint64_t x388 = 1143744774493050538LLU;
	volatile uint64_t t66 = 625716248452554LLU;

	t66 = (x385+(x386^(x387*x388)));

	if (t66 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x390 = INT64_MAX;
	int8_t x391 = -16;
	volatile int8_t x392 = INT8_MAX;

	t67 = (x389+(x390^(x391*x392)));

	if (t67 != -9223372036854773778LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x394 = -1;
	static uint64_t x395 = 21279704248820026LLU;

	t68 = (x393+(x394^(x395*x396)));

	if (t68 != 5458752084021504505LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x403 = 61U;
	int32_t x404 = -1;
	int32_t t69 = 5;

	t69 = (x401+(x402^(x403*x404)));

	if (t69 != 85) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x413 = -1;
	int64_t x414 = 38983569LL;
	uint64_t x415 = 81197409LLU;
	int16_t x416 = 56;
	volatile uint64_t t70 = 2659043798425LLU;

	t70 = (x413+(x414^(x415*x416)));

	if (t70 != 4518599336LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x421 = 11562705U;
	static uint64_t x423 = 1750673901LLU;
	volatile int64_t x424 = INT64_MIN;

	t71 = (x421+(x422^(x423*x424)));

	if (t71 != 9223372036866338385LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x427 = UINT16_MAX;
	int16_t x428 = INT16_MIN;

	t72 = (x425+(x426^(x427*x428)));

	if (t72 != -32769LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x429 = -1;
	static int32_t x431 = 7473;
	uint64_t t73 = 3674587907506690569LLU;

	t73 = (x429+(x430^(x431*x432)));

	if (t73 != 24941070LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x439 = 0;
	int64_t x440 = INT64_MAX;
	int64_t t74 = -605356889377LL;

	t74 = (x437+(x438^(x439*x440)));

	if (t74 != -18255LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x446 = 7626;
	uint64_t x447 = 637897581262LLU;
	uint8_t x448 = 6U;
	volatile uint64_t t75 = 1LLU;

	t75 = (x445+(x446^(x447*x448)));

	if (t75 != 5046686878576LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x453 = 8LL;
	int16_t x454 = 6;
	int16_t x455 = 21;
	int64_t t76 = -9345886942LL;

	t76 = (x453+(x454^(x455*x456)));

	if (t76 != 2677LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x457 = 1U;
	static uint8_t x458 = 0U;
	int16_t x459 = INT16_MAX;
	uint8_t x460 = UINT8_MAX;
	volatile int32_t t77 = 1;

	t77 = (x457+(x458^(x459*x460)));

	if (t77 != 8355586) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x469 = INT16_MAX;
	uint64_t x470 = 3LLU;
	uint64_t x471 = 124LLU;
	volatile uint64_t t78 = 73673168726842LLU;

	t78 = (x469+(x470^(x471*x472)));

	if (t78 != 32646LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x473 = INT64_MIN;
	uint32_t x474 = UINT32_MAX;
	int32_t x476 = 1;
	volatile int64_t t79 = 14210LL;

	t79 = (x473+(x474^(x475*x476)));

	if (t79 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x477 = 12;
	int16_t x478 = -4;
	int64_t x479 = -18167462LL;
	uint16_t x480 = 23301U;
	int64_t t80 = -21312762428265682LL;

	t80 = (x477+(x478^(x479*x480)));

	if (t80 != 423320032074LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x481 = 4655;
	uint8_t x482 = 0U;
	uint64_t x483 = 3003673LLU;
	uint32_t x484 = 163442883U;
	static volatile uint64_t t81 = 78LLU;

	t81 = (x481+(x482^(x483*x484)));

	if (t81 != 490928974713914LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x485 = 3LL;
	int8_t x487 = INT8_MIN;
	uint64_t t82 = 2072694512376974LLU;

	t82 = (x485+(x486^(x487*x488)));

	if (t82 != 36482LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x489 = 3U;
	static int8_t x490 = INT8_MIN;
	int64_t x491 = INT64_MAX;

	t83 = (x489+(x490^(x491*x492)));

	if (t83 != 9223372036854775684LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x494 = 0;
	static int32_t x496 = -1;
	volatile uint32_t t84 = 63047U;

	t84 = (x493+(x494^(x495*x496)));

	if (t84 != 4294175164U) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x501 = -10515647959844LL;
	volatile int64_t x502 = 4LL;
	uint64_t x503 = UINT64_MAX;

	t85 = (x501+(x502^(x503*x504)));

	if (t85 != 18446733558061591777LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x505 = -1LL;
	int8_t x506 = INT8_MIN;
	int8_t x507 = -1;
	int64_t t86 = 606111001360LL;

	t86 = (x505+(x506^(x507*x508)));

	if (t86 != -384LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x509 = -1LL;
	int32_t x510 = INT32_MAX;
	uint64_t x512 = UINT64_MAX;
	uint64_t t87 = 685016792228LLU;

	t87 = (x509+(x510^(x511*x512)));

	if (t87 != 2147483204LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x513 = -51978105;
	volatile uint64_t x514 = UINT64_MAX;
	static uint8_t x515 = UINT8_MAX;

	t88 = (x513+(x514^(x515*x516)));

	if (t88 != 18446744073664531950LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x517 = -1036740171856LL;
	uint8_t x518 = 62U;
	static int32_t x519 = INT32_MAX;
	static int64_t t89 = 47036437540005624LL;

	t89 = (x517+(x518^(x519*x520)));

	if (t89 != -1038887655441LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x521 = 44161353U;
	static int8_t x522 = INT8_MAX;
	uint8_t x523 = UINT8_MAX;
	int8_t x524 = -1;
	uint32_t t90 = 243869U;

	t90 = (x521+(x522^(x523*x524)));

	if (t90 != 44161223U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x525 = 2;
	int16_t x526 = INT16_MIN;
	int8_t x527 = INT8_MAX;
	static uint16_t x528 = UINT16_MAX;
	int32_t t91 = 10;

	t91 = (x525+(x526^(x527*x528)));

	if (t91 != -8290429) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x529 = INT32_MIN;
	uint8_t x530 = 0U;
	static uint64_t x531 = 7426965076LLU;
	volatile uint64_t t92 = 20076712616201LLU;

	t92 = (x529+(x530^(x531*x532)));

	if (t92 != 18446743120910538240LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x534 = INT8_MIN;
	int8_t x535 = INT8_MIN;
	int16_t x536 = INT16_MIN;
	volatile int32_t t93 = -44272667;

	t93 = (x533+(x534^(x535*x536)));

	if (t93 != -4194374) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x545 = 24333U;
	int32_t x546 = 110;
	int8_t x547 = -1;
	int32_t x548 = -1;
	int32_t t94 = 17953604;

	t94 = (x545+(x546^(x547*x548)));

	if (t94 != 24444) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x549 = 29U;
	static volatile int16_t x551 = INT16_MIN;
	int16_t x552 = INT16_MAX;
	volatile int32_t t95 = -427353416;

	t95 = (x549+(x550^(x551*x552)));

	if (t95 != 1073708957) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x553 = INT32_MIN;
	uint32_t x554 = 8195U;
	volatile uint64_t x555 = 55052LLU;
	uint16_t x556 = 1919U;
	uint64_t t96 = 22674LLU;

	t96 = (x553+(x554^(x555*x556)));

	if (t96 != 18446744071667720951LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x561 = 110U;
	int8_t x562 = INT8_MIN;
	volatile uint32_t x564 = UINT32_MAX;
	uint64_t t97 = 364601LLU;

	t97 = (x561+(x562^(x563*x564)));

	if (t97 != 18446744056529682666LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x565 = 16023U;
	uint64_t x566 = UINT64_MAX;
	int8_t x568 = INT8_MIN;
	uint64_t t98 = 33062382278203778LLU;

	t98 = (x565+(x566^(x567*x568)));

	if (t98 != 19094LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x577 = 1LLU;
	int64_t x578 = INT64_MAX;
	int64_t x579 = -1LL;
	int32_t x580 = 1;
	uint64_t t99 = 180413664736050LLU;

	t99 = (x577+(x578^(x579*x580)));

	if (t99 != 9223372036854775809LLU) { NG(); } else { ; }
	
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

