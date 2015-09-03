#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = -1LL;
uint64_t t1 = 1350382356229509LLU;
static volatile int16_t x9 = INT16_MIN;
static volatile int64_t t3 = -1447764831LL;
int8_t x38 = INT8_MAX;
static uint8_t x53 = UINT8_MAX;
int8_t x55 = INT8_MIN;
static int16_t x56 = -2624;
uint16_t x62 = UINT16_MAX;
static uint32_t x78 = 512U;
uint64_t t11 = 201700358839129356LLU;
int16_t x81 = -1;
static volatile uint32_t x83 = UINT32_MAX;
volatile uint16_t x85 = 3U;
uint64_t x87 = UINT64_MAX;
uint64_t t13 = 461505LLU;
volatile uint64_t t14 = 1493162995835578612LLU;
int32_t x93 = INT32_MAX;
int32_t x97 = INT32_MIN;
int32_t x104 = -6227;
int64_t t17 = -16217762669LL;
int16_t x105 = INT16_MIN;
volatile uint32_t x107 = 264840U;
uint64_t t18 = 224066485589LLU;
static uint16_t x115 = 20277U;
uint8_t x118 = UINT8_MAX;
static uint8_t x128 = 40U;
uint16_t x130 = 15202U;
uint32_t x141 = UINT32_MAX;
static int32_t x142 = -55448028;
int64_t x143 = -1LL;
static int64_t t26 = -1LL;
int8_t x145 = INT8_MIN;
uint64_t x147 = 14LLU;
uint32_t x150 = 50524U;
volatile uint8_t x161 = 12U;
static uint16_t x162 = 5909U;
static volatile int16_t x163 = 160;
uint64_t x164 = UINT64_MAX;
static int64_t x173 = INT64_MAX;
uint8_t x177 = UINT8_MAX;
static uint16_t x178 = 3U;
int64_t x188 = -1442LL;
int16_t x194 = -1;
int32_t x197 = -1;
volatile int32_t t38 = -34709600;
uint8_t x204 = 7U;
static volatile uint32_t t40 = 13468464U;
volatile int64_t t42 = 1414113983666LL;
uint64_t x221 = 887LLU;
volatile int32_t x228 = INT32_MIN;
uint16_t x233 = 308U;
uint8_t x248 = 3U;
volatile int8_t x256 = INT8_MAX;
int8_t x264 = INT8_MAX;
static uint64_t x275 = UINT64_MAX;
int8_t x276 = INT8_MIN;
volatile uint64_t t55 = 758686966799464233LLU;
volatile int16_t x282 = -1;
int64_t t57 = 93389344554030LL;
int64_t x287 = INT64_MAX;
int32_t x289 = INT32_MIN;
int64_t t59 = 210739790LL;
volatile int32_t x299 = -64409;
static int8_t x301 = 0;
uint32_t x322 = 1275244U;
int16_t x323 = INT16_MAX;
volatile uint64_t x330 = UINT64_MAX;
uint32_t x336 = UINT32_MAX;
int32_t x361 = -1;
int16_t x363 = INT16_MIN;
int64_t x372 = -596712790087633LL;
int8_t x373 = 15;
int32_t x374 = INT32_MIN;
uint8_t x377 = UINT8_MAX;
static int8_t x380 = -3;
volatile uint16_t x385 = 240U;
uint16_t x388 = UINT16_MAX;
int64_t t76 = 11306393943739LL;
int64_t x391 = -8211055LL;
int32_t x392 = INT32_MIN;
int64_t t77 = -3947LL;
uint64_t t78 = 24169LLU;
int32_t x397 = 26;
static int64_t x398 = INT64_MIN;
int64_t x400 = 2180492735LL;
int64_t t79 = 2614925040918285842LL;
int8_t x411 = -1;
uint16_t x412 = 920U;
int8_t x414 = 1;
volatile int16_t x416 = 3385;
static volatile int32_t t83 = 123143;
int32_t x440 = -1;
int8_t x443 = INT8_MIN;
volatile uint64_t t89 = 0LLU;
uint16_t x449 = UINT16_MAX;
static int8_t x451 = 13;
volatile int64_t t91 = -2LL;
uint64_t t92 = 16618825859319LLU;
volatile int8_t x471 = -31;
volatile int64_t t95 = 4113049037LL;
volatile int64_t x489 = 3117157662LL;
uint32_t x492 = UINT32_MAX;
static volatile int64_t t98 = 1280845033379LL;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	uint64_t x2 = 2083LLU;
	static volatile int64_t x3 = -1LL;
	uint64_t t0 = 2LLU;

	t0 = (x1^(x2%(x3&x4)));

	if (t0 != 2268LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint64_t x5 = 921562554594740466LLU;
	uint16_t x6 = UINT16_MAX;
	int32_t x7 = 92007515;
	int8_t x8 = INT8_MIN;

	t1 = (x5^(x6%(x7&x8)));

	if (t1 != 921562554594703117LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x10 = 1;
	static int16_t x11 = 10212;
	int32_t x12 = INT32_MAX;
	volatile int32_t t2 = 125401556;

	t2 = (x9^(x10%(x11&x12)));

	if (t2 != -32767) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -2139923713476999777LL;
	volatile int8_t x18 = -1;
	uint16_t x19 = UINT16_MAX;
	int64_t x20 = -35436096LL;

	t3 = (x17^(x18%(x19&x20)));

	if (t3 != 2139923713476999776LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x25 = UINT32_MAX;
	uint16_t x26 = UINT16_MAX;
	static volatile uint32_t x27 = 843833718U;
	volatile int16_t x28 = INT16_MIN;
	volatile uint32_t t4 = 30369U;

	t4 = (x25^(x26%(x27&x28)));

	if (t4 != 4294901760U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x37 = INT8_MIN;
	static volatile int32_t x39 = -728875;
	int32_t x40 = INT32_MIN;
	volatile int32_t t5 = -1215505;

	t5 = (x37^(x38%(x39&x40)));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x45 = -124;
	int8_t x46 = INT8_MAX;
	int8_t x47 = INT8_MIN;
	static int64_t x48 = INT64_MIN;
	static int64_t t6 = 243799964646405LL;

	t6 = (x45^(x46%(x47&x48)));

	if (t6 != -5LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x54 = INT32_MIN;
	static int32_t t7 = -45608399;

	t7 = (x53^(x54%(x55&x56)));

	if (t7 != -129) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x61 = 0U;
	static int32_t x63 = INT32_MAX;
	uint8_t x64 = 37U;
	volatile int32_t t8 = 3044;

	t8 = (x61^(x62%(x63&x64)));

	if (t8 != 8) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x65 = INT16_MAX;
	int16_t x66 = 23;
	volatile uint32_t x67 = UINT32_MAX;
	static uint16_t x68 = 210U;
	volatile uint32_t t9 = 0U;

	t9 = (x65^(x66%(x67&x68)));

	if (t9 != 32744U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x69 = 239166056178081LLU;
	int64_t x70 = 15594908612444223LL;
	uint64_t x71 = 8LLU;
	static int64_t x72 = -1LL;
	volatile uint64_t t10 = 3599193367097610255LLU;

	t10 = (x69^(x70%(x71&x72)));

	if (t10 != 239166056178086LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x77 = 98703392LLU;
	int8_t x79 = INT8_MIN;
	uint64_t x80 = UINT64_MAX;

	t11 = (x77^(x78%(x79&x80)));

	if (t11 != 98703904LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x82 = INT16_MIN;
	int8_t x84 = -11;
	static uint32_t t12 = 4492U;

	t12 = (x81^(x82%(x83&x84)));

	if (t12 != 32767U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x86 = INT8_MAX;
	int32_t x88 = -1;

	t13 = (x85^(x86%(x87&x88)));

	if (t13 != 124LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x89 = 85U;
	volatile uint16_t x90 = 9U;
	uint8_t x91 = UINT8_MAX;
	uint64_t x92 = 2631864LLU;

	t14 = (x89^(x90%(x91&x92)));

	if (t14 != 92LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x94 = -1;
	static int16_t x95 = INT16_MIN;
	int16_t x96 = -1;
	volatile int32_t t15 = INT32_MIN;

	t15 = (x93^(x94%(x95&x96)));

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x98 = -120906;
	int16_t x99 = INT16_MIN;
	int64_t x100 = -1LL;
	volatile int64_t t16 = 365119568461LL;

	t16 = (x97^(x98%(x99&x100)));

	if (t16 != 2147461046LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x101 = 0U;
	volatile int16_t x102 = 8286;
	int64_t x103 = 333823547LL;

	t17 = (x101^(x102%(x103&x104)));

	if (t17 != 8286LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x106 = -47;
	uint64_t x108 = 515475554191492510LLU;

	t18 = (x105^(x106%(x107&x108)));

	if (t18 != 18446744073709518921LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x109 = UINT32_MAX;
	static volatile uint8_t x110 = 26U;
	int64_t x111 = INT64_MIN;
	int8_t x112 = INT8_MIN;
	static int64_t t19 = -13LL;

	t19 = (x109^(x110%(x111&x112)));

	if (t19 != 4294967269LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x113 = UINT8_MAX;
	int8_t x114 = INT8_MIN;
	static volatile uint32_t x116 = 14U;
	static volatile uint32_t t20 = 917U;

	t20 = (x113^(x114%(x115&x116)));

	if (t20 != 255U) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x117 = 27;
	int64_t x119 = INT64_MAX;
	int16_t x120 = INT16_MAX;
	int64_t t21 = -61LL;

	t21 = (x117^(x118%(x119&x120)));

	if (t21 != 228LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x121 = -13848;
	uint32_t x122 = 91U;
	volatile int32_t x123 = INT32_MIN;
	static uint32_t x124 = UINT32_MAX;
	volatile uint32_t t22 = 210511794U;

	t22 = (x121^(x122%(x123&x124)));

	if (t22 != 4294953395U) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x125 = -188;
	volatile int8_t x126 = INT8_MIN;
	uint64_t x127 = UINT64_MAX;
	volatile uint64_t t23 = 10792458LLU;

	t23 = (x125^(x126%(x127&x128)));

	if (t23 != 18446744073709551436LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x129 = -1LL;
	volatile int8_t x131 = -57;
	volatile int8_t x132 = INT8_MAX;
	static int64_t t24 = 1856046753823LL;

	t24 = (x129^(x130%(x131&x132)));

	if (t24 != -9LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x137 = -1;
	static int8_t x138 = 20;
	static int8_t x139 = -7;
	volatile int16_t x140 = INT16_MAX;
	volatile int32_t t25 = -981677368;

	t25 = (x137^(x138%(x139&x140)));

	if (t25 != -21) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x144 = UINT8_MAX;

	t26 = (x141^(x142%(x143&x144)));

	if (t26 != -4294967234LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x146 = INT16_MIN;
	int8_t x148 = -6;
	volatile uint64_t t27 = 14920LLU;

	t27 = (x145^(x146%(x147&x148)));

	if (t27 != 18446744073709551496LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x149 = 179U;
	static int64_t x151 = INT64_MIN;
	int64_t x152 = INT64_MIN;
	int64_t t28 = 26274635LL;

	t28 = (x149^(x150%(x151&x152)));

	if (t28 != 50671LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x157 = 13U;
	int16_t x158 = INT16_MIN;
	uint16_t x159 = UINT16_MAX;
	volatile uint32_t x160 = UINT32_MAX;
	static volatile uint32_t t29 = 528U;

	t29 = (x157^(x158%(x159&x160)));

	if (t29 != 32781U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t t30 = 82515031562464389LLU;

	t30 = (x161^(x162%(x163&x164)));

	if (t30 != 153LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x165 = INT16_MIN;
	uint64_t x166 = 3334638676LLU;
	volatile uint64_t x167 = 6506338995116LLU;
	static int8_t x168 = -1;
	volatile uint64_t t31 = 610404583198LLU;

	t31 = (x165^(x166%(x167&x168)));

	if (t31 != 18446744070374886484LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x174 = INT8_MIN;
	int32_t x175 = INT32_MAX;
	int16_t x176 = -1;
	static int64_t t32 = 65142339324LL;

	t32 = (x173^(x174%(x175&x176)));

	if (t32 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x179 = -1LL;
	static int64_t x180 = -591770255915172LL;
	volatile int64_t t33 = 3344027859176078028LL;

	t33 = (x177^(x178%(x179&x180)));

	if (t33 != 252LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x181 = INT8_MIN;
	volatile int64_t x182 = INT64_MIN;
	uint16_t x183 = 19819U;
	uint16_t x184 = 27909U;
	volatile int64_t t34 = -31521LL;

	t34 = (x181^(x182%(x183&x184)));

	if (t34 != 4084LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x185 = UINT32_MAX;
	static uint64_t x186 = 254111LLU;
	uint8_t x187 = UINT8_MAX;
	volatile uint64_t t35 = 741245LLU;

	t35 = (x185^(x186%(x187&x188)));

	if (t35 != 4294967266LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x189 = 490178605LLU;
	static int64_t x190 = -231369691646131LL;
	static int8_t x191 = -30;
	int32_t x192 = 10970675;
	uint64_t t36 = 131128601874LLU;

	t36 = (x189^(x190%(x191&x192)));

	if (t36 != 18446744073217393904LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x193 = 100755465954845257LL;
	volatile int64_t x195 = -5029729LL;
	static int16_t x196 = INT16_MIN;
	int64_t t37 = -508576284100LL;

	t37 = (x193^(x194%(x195&x196)));

	if (t37 != -100755465954845258LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x198 = -1;
	static volatile uint16_t x199 = UINT16_MAX;
	volatile int16_t x200 = -1;

	t38 = (x197^(x198%(x199&x200)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x201 = INT32_MAX;
	int8_t x202 = -1;
	volatile int32_t x203 = INT32_MAX;
	int32_t t39 = INT32_MIN;

	t39 = (x201^(x202%(x203&x204)));

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x209 = 3U;
	int32_t x210 = INT32_MAX;
	static uint16_t x211 = UINT16_MAX;
	volatile uint32_t x212 = UINT32_MAX;

	t40 = (x209^(x210%(x211&x212)));

	if (t40 != 32764U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x213 = 0U;
	int32_t x214 = -1;
	int16_t x215 = -242;
	int64_t x216 = 6LL;
	int64_t t41 = 159782657897942LL;

	t41 = (x213^(x214%(x215&x216)));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x217 = -63342802093LL;
	volatile int64_t x218 = -1013273123720558231LL;
	int8_t x219 = -3;
	int16_t x220 = INT16_MIN;

	t42 = (x217^(x218%(x219&x220)));

	if (t42 != 63342772794LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x222 = INT8_MIN;
	int32_t x223 = INT32_MIN;
	uint64_t x224 = UINT64_MAX;
	uint64_t t43 = 9LLU;

	t43 = (x221^(x222%(x223&x224)));

	if (t43 != 2147482871LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x225 = 61U;
	static uint64_t x226 = 20800LLU;
	int8_t x227 = -1;
	static volatile uint64_t t44 = 609043393LLU;

	t44 = (x225^(x226%(x227&x228)));

	if (t44 != 20861LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x229 = INT8_MIN;
	int16_t x230 = -1;
	static volatile uint64_t x231 = 172866528LLU;
	volatile int32_t x232 = INT32_MAX;
	volatile uint64_t t45 = 18820716679LLU;

	t45 = (x229^(x230%(x231&x232)));

	if (t45 != 18446744073549564639LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x234 = 97;
	volatile int64_t x235 = 559684070335166413LL;
	static uint32_t x236 = UINT32_MAX;
	static volatile int64_t t46 = -8658LL;

	t46 = (x233^(x234%(x235&x236)));

	if (t46 != 341LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x237 = 70U;
	static volatile uint16_t x238 = UINT16_MAX;
	int64_t x239 = INT64_MAX;
	int32_t x240 = 60076;
	volatile int64_t t47 = -96174573319LL;

	t47 = (x237^(x238%(x239&x240)));

	if (t47 != 5397LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x241 = -1LL;
	static int32_t x242 = INT32_MIN;
	int16_t x243 = INT16_MIN;
	int8_t x244 = INT8_MIN;
	int64_t t48 = -533446061878154354LL;

	t48 = (x241^(x242%(x243&x244)));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x245 = -4;
	int32_t x246 = INT32_MIN;
	int16_t x247 = -4611;
	static int32_t t49 = -7029;

	t49 = (x245^(x246%(x247&x248)));

	if (t49 != -4) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x249 = INT64_MIN;
	int32_t x250 = -4826;
	int16_t x251 = -12;
	static int8_t x252 = -1;
	volatile int64_t t50 = -270781943380LL;

	t50 = (x249^(x250%(x251&x252)));

	if (t50 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x253 = INT8_MIN;
	int16_t x254 = INT16_MIN;
	int16_t x255 = -1;
	int32_t t51 = 172685828;

	t51 = (x253^(x254%(x255&x256)));

	if (t51 != 126) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x257 = INT32_MAX;
	int8_t x258 = -1;
	uint16_t x259 = 1U;
	volatile int8_t x260 = -1;
	volatile int32_t t52 = INT32_MAX;

	t52 = (x257^(x258%(x259&x260)));

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x261 = -1;
	int8_t x262 = 47;
	int32_t x263 = 48844;
	int32_t t53 = -1045368992;

	t53 = (x261^(x262%(x263&x264)));

	if (t53 != -48) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x265 = -1;
	int32_t x266 = 86;
	int64_t x267 = INT64_MIN;
	int64_t x268 = -1LL;
	static int64_t t54 = -7766406467153LL;

	t54 = (x265^(x266%(x267&x268)));

	if (t54 != -87LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x273 = 1;
	int8_t x274 = INT8_MAX;

	t55 = (x273^(x274%(x275&x276)));

	if (t55 != 126LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x277 = 194U;
	int16_t x278 = 3;
	volatile uint16_t x279 = 28243U;
	uint64_t x280 = 110033981634965LLU;
	volatile uint64_t t56 = 6LLU;

	t56 = (x277^(x278%(x279&x280)));

	if (t56 != 193LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x281 = -6106086LL;
	uint32_t x283 = 117U;
	uint32_t x284 = 125690531U;

	t57 = (x281^(x282%(x283&x284)));

	if (t57 != -6106087LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x285 = INT16_MIN;
	int64_t x286 = INT64_MIN;
	uint32_t x288 = 44245U;
	int64_t t58 = -15470843300029LL;

	t58 = (x285^(x286%(x287&x288)));

	if (t58 != 29675LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x290 = -4715447018LL;
	static int16_t x291 = -1;
	uint8_t x292 = 2U;

	t59 = (x289^(x290%(x291&x292)));

	if (t59 != -2147483648LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x293 = 1U;
	volatile int32_t x294 = -1;
	uint32_t x295 = 980005093U;
	volatile uint8_t x296 = UINT8_MAX;
	volatile uint32_t t60 = 0U;

	t60 = (x293^(x294%(x295&x296)));

	if (t60 != 161U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x297 = INT64_MIN;
	int32_t x298 = INT32_MIN;
	uint32_t x300 = UINT32_MAX;
	int64_t t61 = -4217050279963LL;

	t61 = (x297^(x298%(x299&x300)));

	if (t61 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x302 = INT64_MAX;
	static volatile uint16_t x303 = 45U;
	volatile uint32_t x304 = 794062641U;
	volatile int64_t t62 = 33113LL;

	t62 = (x301^(x302%(x303&x304)));

	if (t62 != 7LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x321 = -2;
	volatile int8_t x324 = 3;
	static volatile uint32_t t63 = UINT32_MAX;

	t63 = (x321^(x322%(x323&x324)));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x325 = 198767236LL;
	volatile int32_t x326 = INT32_MAX;
	int8_t x327 = -1;
	int32_t x328 = 10920;
	int64_t t64 = -3LL;

	t64 = (x325^(x326%(x327&x328)));

	if (t64 != 198767355LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x329 = INT16_MIN;
	int64_t x331 = -114434528LL;
	int16_t x332 = -1;
	volatile uint64_t t65 = 21997LLU;

	t65 = (x329^(x330%(x331&x332)));

	if (t65 != 18446744073595101663LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x333 = INT16_MIN;
	volatile int16_t x334 = 1361;
	int8_t x335 = INT8_MIN;
	volatile uint32_t t66 = 361U;

	t66 = (x333^(x334%(x335&x336)));

	if (t66 != 4294935889U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x337 = -1;
	int64_t x338 = INT64_MIN;
	uint8_t x339 = 1U;
	int8_t x340 = INT8_MAX;
	static int64_t t67 = 0LL;

	t67 = (x337^(x338%(x339&x340)));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x349 = UINT64_MAX;
	uint8_t x350 = UINT8_MAX;
	uint16_t x351 = 2107U;
	uint8_t x352 = 11U;
	volatile uint64_t t68 = 8224816300LLU;

	t68 = (x349^(x350%(x351&x352)));

	if (t68 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x353 = INT8_MAX;
	int64_t x354 = -1LL;
	uint64_t x355 = 1380349LLU;
	int16_t x356 = INT16_MIN;
	volatile uint64_t t69 = 805705009010543LLU;

	t69 = (x353^(x354%(x355&x356)));

	if (t69 != 65408LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x362 = 13116U;
	int8_t x364 = INT8_MIN;
	uint32_t t70 = 66713U;

	t70 = (x361^(x362%(x363&x364)));

	if (t70 != 4294954179U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x365 = INT8_MAX;
	int8_t x366 = -1;
	uint8_t x367 = 62U;
	uint32_t x368 = 3998072U;
	static uint32_t t71 = 9580972U;

	t71 = (x365^(x366%(x367&x368)));

	if (t71 != 96U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x369 = -3158200638LL;
	static uint64_t x370 = UINT64_MAX;
	int16_t x371 = INT16_MIN;
	uint64_t t72 = 15644LLU;

	t72 = (x369^(x370%(x371&x372)));

	if (t72 != 18446147357899968829LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x375 = 88875;
	volatile int16_t x376 = -1;
	int32_t t73 = -177717;

	t73 = (x373^(x374%(x375&x376)));

	if (t73 != -85895) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x378 = -3926664;
	uint64_t x379 = 6864LLU;
	uint64_t t74 = 65171636917LLU;

	t74 = (x377^(x378%(x379&x380)));

	if (t74 != 6631LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x381 = INT64_MIN;
	int8_t x382 = INT8_MAX;
	static volatile uint32_t x383 = 2595521U;
	int8_t x384 = -7;
	int64_t t75 = -56LL;

	t75 = (x381^(x382%(x383&x384)));

	if (t75 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x386 = INT64_MIN;
	uint16_t x387 = UINT16_MAX;

	t76 = (x385^(x386%(x387&x388)));

	if (t76 != -32528LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x389 = -1LL;
	uint32_t x390 = UINT32_MAX;

	t77 = (x389^(x390%(x391&x392)));

	if (t77 != -2147483648LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x393 = INT32_MAX;
	uint64_t x394 = 1702767940193451LLU;
	int8_t x395 = -1;
	int16_t x396 = INT16_MAX;

	t78 = (x393^(x394%(x395&x396)));

	if (t78 != 2147476502LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x399 = UINT8_MAX;

	t79 = (x397^(x398%(x399&x400)));

	if (t79 != -23LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x401 = -1;
	int64_t x402 = INT64_MIN;
	int16_t x403 = INT16_MIN;
	volatile int32_t x404 = -1;
	int64_t t80 = 426LL;

	t80 = (x401^(x402%(x403&x404)));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x405 = -30151859;
	uint8_t x406 = UINT8_MAX;
	uint8_t x407 = 1U;
	int32_t x408 = 2914467;
	int32_t t81 = -70508;

	t81 = (x405^(x406%(x407&x408)));

	if (t81 != -30151859) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x409 = INT8_MIN;
	int64_t x410 = 29422604LL;
	volatile int64_t t82 = -794919866LL;

	t82 = (x409^(x410%(x411&x412)));

	if (t82 != -44LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x413 = 0;
	static volatile int16_t x415 = 3;

	t83 = (x413^(x414%(x415&x416)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x417 = UINT16_MAX;
	uint8_t x418 = UINT8_MAX;
	int32_t x419 = INT32_MAX;
	static volatile uint8_t x420 = UINT8_MAX;
	int32_t t84 = -79321;

	t84 = (x417^(x418%(x419&x420)));

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x421 = UINT32_MAX;
	int8_t x422 = INT8_MIN;
	volatile int32_t x423 = INT32_MAX;
	int16_t x424 = INT16_MAX;
	volatile uint32_t t85 = 269U;

	t85 = (x421^(x422%(x423&x424)));

	if (t85 != 127U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x425 = -156837628;
	static uint16_t x426 = 146U;
	volatile uint16_t x427 = UINT16_MAX;
	volatile uint32_t x428 = UINT32_MAX;
	volatile uint32_t t86 = 1073314U;

	t86 = (x425^(x426%(x427&x428)));

	if (t86 != 4138129814U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x433 = 2U;
	static uint16_t x434 = 3522U;
	volatile uint16_t x435 = UINT16_MAX;
	uint8_t x436 = 58U;
	static volatile int32_t t87 = -64;

	t87 = (x433^(x434%(x435&x436)));

	if (t87 != 40) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x437 = 3;
	int8_t x438 = INT8_MAX;
	int16_t x439 = -1;
	volatile int32_t t88 = -60;

	t88 = (x437^(x438%(x439&x440)));

	if (t88 != 3) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x441 = UINT64_MAX;
	uint16_t x442 = UINT16_MAX;
	int32_t x444 = INT32_MIN;

	t89 = (x441^(x442%(x443&x444)));

	if (t89 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x445 = UINT32_MAX;
	int32_t x446 = INT32_MAX;
	uint64_t x447 = UINT64_MAX;
	volatile int16_t x448 = INT16_MAX;
	uint64_t t90 = 1032705713981LLU;

	t90 = (x445^(x446%(x447&x448)));

	if (t90 != 4294967294LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x450 = INT64_MIN;
	uint16_t x452 = 31U;

	t91 = (x449^(x450%(x451&x452)));

	if (t91 != -65529LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x461 = INT32_MAX;
	int16_t x462 = INT16_MIN;
	volatile uint32_t x463 = 16709063U;
	uint64_t x464 = 11204617987LLU;

	t92 = (x461^(x462%(x463&x464)));

	if (t92 != 2142256613LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x465 = INT64_MIN;
	uint8_t x466 = UINT8_MAX;
	static uint8_t x467 = UINT8_MAX;
	static uint64_t x468 = UINT64_MAX;
	volatile uint64_t t93 = 467429503LLU;

	t93 = (x465^(x466%(x467&x468)));

	if (t93 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x469 = INT32_MAX;
	volatile uint64_t x470 = UINT64_MAX;
	uint16_t x472 = UINT16_MAX;
	volatile uint64_t t94 = 183701LLU;

	t94 = (x469^(x470%(x471&x472)));

	if (t94 != 2147477197LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x473 = INT64_MIN;
	int64_t x474 = INT64_MIN;
	static uint8_t x475 = UINT8_MAX;
	int16_t x476 = 1563;

	t95 = (x473^(x474%(x475&x476)));

	if (t95 != 9223372036854775782LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x477 = INT8_MAX;
	int64_t x478 = INT64_MIN;
	static uint32_t x479 = UINT32_MAX;
	int8_t x480 = -1;
	volatile int64_t t96 = -6664LL;

	t96 = (x477^(x478%(x479&x480)));

	if (t96 != -2147483521LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x485 = INT16_MIN;
	static volatile int32_t x486 = INT32_MAX;
	int8_t x487 = INT8_MIN;
	int16_t x488 = INT16_MIN;
	int32_t t97 = 1940;

	t97 = (x485^(x486%(x487&x488)));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x490 = 258555594LL;
	volatile int16_t x491 = INT16_MIN;

	t98 = (x489^(x490%(x491&x492)));

	if (t98 != 3064280020LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x501 = -1LL;
	uint16_t x502 = 21185U;
	int8_t x503 = INT8_MIN;
	int64_t x504 = 7128524479LL;
	static int64_t t99 = 38331770027525LL;

	t99 = (x501^(x502%(x503&x504)));

	if (t99 != -21186LL) { NG(); } else { ; }
	
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

