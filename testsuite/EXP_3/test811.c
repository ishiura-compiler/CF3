#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x8 = 1810592805U;
uint8_t x10 = 37U;
int64_t x14 = -1LL;
int8_t x26 = 1;
int64_t x28 = INT64_MAX;
uint8_t x32 = UINT8_MAX;
volatile int16_t x34 = INT16_MAX;
int32_t x35 = INT32_MAX;
static uint32_t x36 = 55659U;
uint8_t x40 = UINT8_MAX;
int32_t x48 = 13;
static int32_t x49 = INT32_MAX;
uint8_t x55 = 28U;
uint64_t x56 = 303229754615LLU;
uint64_t t12 = 7391LLU;
int32_t x64 = INT32_MAX;
int16_t x70 = INT16_MIN;
static int16_t x75 = 434;
volatile int16_t x77 = INT16_MAX;
uint8_t x81 = 1U;
uint16_t x82 = 0U;
int32_t x85 = INT32_MAX;
int16_t x97 = INT16_MIN;
int64_t t23 = -2165126LL;
int16_t x126 = INT16_MAX;
volatile uint32_t x129 = 52959261U;
int16_t x132 = INT16_MIN;
static volatile int64_t t29 = -61LL;
int32_t x152 = INT32_MIN;
volatile int64_t t31 = -2591988941383149LL;
static volatile uint16_t x158 = 54U;
volatile uint16_t x159 = 18U;
static int64_t t32 = 0LL;
int32_t x175 = -1;
uint8_t x182 = 86U;
int64_t x185 = 603606LL;
int64_t x187 = -52LL;
uint32_t x188 = 1469798889U;
volatile int64_t t37 = -7394072145LL;
volatile int64_t x189 = 15406109LL;
uint64_t t39 = 7577309412LLU;
static uint32_t x211 = 38848215U;
volatile uint64_t t42 = 2429087942328LLU;
static volatile int8_t x225 = INT8_MIN;
int32_t x229 = INT32_MIN;
volatile uint64_t t46 = 39771725499815LLU;
volatile uint64_t t47 = 31953LLU;
static int16_t x248 = -4294;
volatile int16_t x249 = -1591;
uint32_t x264 = 3U;
static volatile int64_t x274 = -1LL;
static volatile int8_t x292 = INT8_MIN;
uint64_t t56 = 29377927461163LLU;
static int64_t x318 = -1LL;
static uint16_t x319 = 10U;
int16_t x323 = INT16_MIN;
static int32_t x329 = 358931722;
volatile int64_t t63 = 28736102942943961LL;
int32_t x345 = INT32_MIN;
int8_t x346 = INT8_MIN;
uint32_t x365 = 361210U;
int8_t x367 = -1;
int8_t x369 = -1;
uint16_t x377 = 4U;
uint32_t t74 = 25389U;
volatile int32_t x387 = INT32_MAX;
volatile int64_t t76 = -443LL;
int8_t x412 = 6;
volatile int64_t t81 = 32260760323LL;
uint32_t t82 = 39560U;
int16_t x431 = INT16_MIN;
volatile int32_t x439 = 3561;
uint32_t x458 = 5650U;
static volatile int8_t x460 = INT8_MIN;
volatile int16_t x472 = INT16_MIN;
volatile int64_t x476 = INT64_MAX;
int32_t x487 = INT32_MIN;
int16_t x489 = -1;
uint8_t x490 = UINT8_MAX;
uint32_t x503 = 7U;


void f0(void) {
	static int64_t x1 = 105441820862070LL;
	uint32_t x2 = 954575055U;
	int16_t x3 = INT16_MAX;
	int64_t x4 = 1746LL;
	int64_t t0 = -185LL;

	t0 = ((x1&x2)%(x3%x4));

	if (t0 != 547LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int64_t x6 = 7LL;
	int64_t x7 = 202587309839722180LL;
	volatile int64_t t1 = -50310357612654LL;

	t1 = ((x5&x6)%(x7%x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -1;
	int8_t x11 = -1;
	uint16_t x12 = 7U;
	int32_t t2 = 31960;

	t2 = ((x9&x10)%(x11%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = UINT16_MAX;
	int8_t x15 = 30;
	static uint16_t x16 = UINT16_MAX;
	volatile int64_t t3 = -16886123652892423LL;

	t3 = ((x13&x14)%(x15%x16));

	if (t3 != 15LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x25 = 6867916722301650405LLU;
	static int64_t x27 = INT64_MIN;
	static volatile uint64_t t4 = 29461LLU;

	t4 = ((x25&x26)%(x27%x28));

	if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x29 = 56U;
	int32_t x30 = -9587;
	int32_t x31 = INT32_MAX;
	volatile int32_t t5 = -1569263;

	t5 = ((x29&x30)%(x31%x32));

	if (t5 != 8) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x33 = 30433U;
	uint32_t t6 = 16U;

	t6 = ((x33&x34)%(x35%x36));

	if (t6 != 30433U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x37 = 3U;
	uint64_t x38 = UINT64_MAX;
	int32_t x39 = INT32_MAX;
	volatile uint64_t t7 = 132942536394647982LLU;

	t7 = ((x37&x38)%(x39%x40));

	if (t7 != 3LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = -475038125005LL;
	uint64_t x42 = 5LLU;
	int32_t x43 = INT32_MAX;
	int16_t x44 = INT16_MIN;
	volatile uint64_t t8 = 24612745554587LLU;

	t8 = ((x41&x42)%(x43%x44));

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = INT8_MIN;
	int8_t x46 = -1;
	uint32_t x47 = UINT32_MAX;
	uint32_t t9 = 11499042U;

	t9 = ((x45&x46)%(x47%x48));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x50 = INT32_MIN;
	int16_t x51 = INT16_MAX;
	uint16_t x52 = UINT16_MAX;
	int32_t t10 = -18;

	t10 = ((x49&x50)%(x51%x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = -1;
	volatile int64_t x54 = INT64_MIN;
	volatile uint64_t t11 = 3474654489LLU;

	t11 = ((x53&x54)%(x55%x56));

	if (t11 != 8LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x57 = 0;
	int8_t x58 = -1;
	static uint64_t x59 = UINT64_MAX;
	static int64_t x60 = INT64_MIN;

	t12 = ((x57&x58)%(x59%x60));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x61 = INT32_MIN;
	int64_t x62 = -1LL;
	int32_t x63 = -1;
	int64_t t13 = 393336549LL;

	t13 = ((x61&x62)%(x63%x64));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x65 = 3U;
	volatile int8_t x66 = -1;
	uint16_t x67 = 310U;
	static uint8_t x68 = 56U;
	uint32_t t14 = 22U;

	t14 = ((x65&x66)%(x67%x68));

	if (t14 != 3U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = -18257;
	uint32_t x71 = UINT32_MAX;
	static int64_t x72 = INT64_MIN;
	volatile int64_t t15 = 132108619987LL;

	t15 = ((x69&x70)%(x71%x72));

	if (t15 != -32768LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x73 = 949584578LLU;
	volatile uint16_t x74 = 10U;
	volatile uint8_t x76 = 3U;
	uint64_t t16 = 66883048422LLU;

	t16 = ((x73&x74)%(x75%x76));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x78 = INT64_MIN;
	int32_t x79 = -1;
	static int64_t x80 = -555005LL;
	volatile int64_t t17 = -90969760065118436LL;

	t17 = ((x77&x78)%(x79%x80));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x83 = 19U;
	int64_t x84 = -62LL;
	volatile int64_t t18 = -1986178511LL;

	t18 = ((x81&x82)%(x83%x84));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x86 = 246U;
	uint64_t x87 = 296248383787LLU;
	uint64_t x88 = 8500286682LLU;
	volatile uint64_t t19 = 47LLU;

	t19 = ((x85&x86)%(x87%x88));

	if (t19 != 246LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x89 = 233U;
	int32_t x90 = -43;
	int16_t x91 = -1;
	uint8_t x92 = 3U;
	static volatile int32_t t20 = 509717699;

	t20 = ((x89&x90)%(x91%x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = 1;
	static uint16_t x94 = UINT16_MAX;
	int32_t x95 = INT32_MAX;
	static int16_t x96 = INT16_MIN;
	int32_t t21 = -8;

	t21 = ((x93&x94)%(x95%x96));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x98 = 24U;
	volatile int8_t x99 = INT8_MIN;
	volatile uint16_t x100 = 15742U;
	volatile int32_t t22 = -49296;

	t22 = ((x97&x98)%(x99%x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x101 = -44431329046069622LL;
	uint8_t x102 = UINT8_MAX;
	int64_t x103 = INT64_MIN;
	uint8_t x104 = 23U;

	t23 = ((x101&x102)%(x103%x104));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = INT32_MIN;
	uint64_t x110 = UINT64_MAX;
	uint64_t x111 = 55816412LLU;
	int64_t x112 = INT64_MIN;
	volatile uint64_t t24 = 934506321877LLU;

	t24 = ((x109&x110)%(x111%x112));

	if (t24 != 6159180LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = INT8_MAX;
	uint64_t x114 = 3195839429519LLU;
	int32_t x115 = INT32_MAX;
	int16_t x116 = INT16_MIN;
	uint64_t t25 = 1127LLU;

	t25 = ((x113&x114)%(x115%x116));

	if (t25 != 15LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = 1;
	static volatile int16_t x118 = INT16_MIN;
	int16_t x119 = INT16_MIN;
	uint64_t x120 = 423761LLU;
	uint64_t t26 = 1179733232LLU;

	t26 = ((x117&x118)%(x119%x120));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = INT16_MIN;
	static uint64_t x122 = 401992LLU;
	int64_t x123 = 2020358133364LL;
	int8_t x124 = INT8_MIN;
	uint64_t t27 = 14195661448LLU;

	t27 = ((x121&x122)%(x123%x124));

	if (t27 != 92LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = 1;
	int16_t x127 = 2870;
	int8_t x128 = INT8_MAX;
	volatile int32_t t28 = 10;

	t28 = ((x125&x126)%(x127%x128));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x130 = -1LL;
	int64_t x131 = -1LL;

	t29 = ((x129&x130)%(x131%x132));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x149 = 53624171201158982LLU;
	int64_t x150 = 9165132545627LL;
	int32_t x151 = INT32_MAX;
	volatile uint64_t t30 = 25702283528616LLU;

	t30 = ((x149&x150)%(x151%x152));

	if (t30 != 1213210314LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint32_t x153 = 342544U;
	volatile int32_t x154 = -1;
	int8_t x155 = -1;
	int64_t x156 = -2LL;

	t31 = ((x153&x154)%(x155%x156));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x157 = INT16_MIN;
	volatile int64_t x160 = -8146976355063LL;

	t32 = ((x157&x158)%(x159%x160));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x165 = -1;
	int32_t x166 = INT32_MIN;
	static uint16_t x167 = 62U;
	int64_t x168 = INT64_MIN;
	static volatile int64_t t33 = 1LL;

	t33 = ((x165&x166)%(x167%x168));

	if (t33 != -2LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x169 = -1;
	uint64_t x170 = UINT64_MAX;
	int8_t x171 = INT8_MAX;
	static volatile uint64_t x172 = 8792793777905840205LLU;
	static uint64_t t34 = 214215LLU;

	t34 = ((x169&x170)%(x171%x172));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x173 = 1U;
	uint16_t x174 = 2U;
	int32_t x176 = INT32_MIN;
	int32_t t35 = 53;

	t35 = ((x173&x174)%(x175%x176));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x181 = INT64_MAX;
	volatile int16_t x183 = -1;
	volatile uint32_t x184 = 1919196U;
	int64_t t36 = -129132378852LL;

	t36 = ((x181&x182)%(x183%x184));

	if (t36 != 86LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x186 = -1LL;

	t37 = ((x185&x186)%(x187%x188));

	if (t37 != 42LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x190 = 83881064U;
	volatile uint32_t x191 = 416809U;
	uint16_t x192 = 9U;
	int64_t t38 = -448LL;

	t38 = ((x189&x190)%(x191%x192));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x197 = 19357023648LLU;
	int16_t x198 = INT16_MAX;
	uint8_t x199 = 94U;
	uint64_t x200 = 49537825193470533LLU;

	t39 = ((x197&x198)%(x199%x200));

	if (t39 != 78LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x201 = 2;
	volatile int8_t x202 = INT8_MIN;
	uint64_t x203 = 639024869LLU;
	int8_t x204 = INT8_MIN;
	uint64_t t40 = 7761327595722LLU;

	t40 = ((x201&x202)%(x203%x204));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x209 = 50633396U;
	volatile int64_t x210 = -1LL;
	volatile int64_t x212 = INT64_MAX;
	static volatile int64_t t41 = -130081825758133LL;

	t41 = ((x209&x210)%(x211%x212));

	if (t41 != 11785181LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint32_t x217 = 11509735U;
	static volatile uint32_t x218 = 1278U;
	uint64_t x219 = UINT64_MAX;
	volatile int64_t x220 = INT64_MAX;

	t42 = ((x217&x218)%(x219%x220));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x221 = UINT64_MAX;
	int64_t x222 = INT64_MIN;
	uint32_t x223 = 71U;
	uint64_t x224 = 8183039169666127800LLU;
	uint64_t t43 = 97484LLU;

	t43 = ((x221&x222)%(x223%x224));

	if (t43 != 5LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint8_t x226 = 64U;
	uint64_t x227 = UINT64_MAX;
	static int16_t x228 = 3488;
	volatile uint64_t t44 = 0LLU;

	t44 = ((x225&x226)%(x227%x228));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x230 = INT32_MAX;
	int16_t x231 = INT16_MIN;
	int32_t x232 = INT32_MAX;
	static int32_t t45 = -2512;

	t45 = ((x229&x230)%(x231%x232));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x233 = 10U;
	uint64_t x234 = UINT64_MAX;
	uint32_t x235 = 157444219U;
	uint32_t x236 = UINT32_MAX;

	t46 = ((x233&x234)%(x235%x236));

	if (t46 != 10LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x237 = 160311810LL;
	static int16_t x238 = INT16_MAX;
	uint64_t x239 = 3543391880322LLU;
	int16_t x240 = -1;

	t47 = ((x237&x238)%(x239%x240));

	if (t47 != 10754LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x245 = 111U;
	int64_t x246 = INT64_MAX;
	static uint8_t x247 = UINT8_MAX;
	static int64_t t48 = 8305400434934LL;

	t48 = ((x245&x246)%(x247%x248));

	if (t48 != 111LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x250 = 3;
	volatile uint64_t x251 = 1732803861215LLU;
	int16_t x252 = INT16_MAX;
	volatile uint64_t t49 = 15111LLU;

	t49 = ((x249&x250)%(x251%x252));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x261 = INT64_MIN;
	volatile uint64_t x262 = UINT64_MAX;
	uint8_t x263 = 1U;
	volatile uint64_t t50 = 297247LLU;

	t50 = ((x261&x262)%(x263%x264));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x265 = INT16_MIN;
	uint16_t x266 = 569U;
	uint64_t x267 = 277110043582242196LLU;
	static uint16_t x268 = 815U;
	static volatile uint64_t t51 = 154859198LLU;

	t51 = ((x265&x266)%(x267%x268));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x273 = -1;
	uint16_t x275 = UINT16_MAX;
	uint64_t x276 = 25LLU;
	uint64_t t52 = 363323898624204443LLU;

	t52 = ((x273&x274)%(x275%x276));

	if (t52 != 5LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x277 = 4U;
	int16_t x278 = INT16_MAX;
	int32_t x279 = INT32_MAX;
	int8_t x280 = 52;
	int32_t t53 = -542666401;

	t53 = ((x277&x278)%(x279%x280));

	if (t53 != 4) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x285 = INT8_MIN;
	int8_t x286 = -54;
	int16_t x287 = INT16_MIN;
	int8_t x288 = 47;
	static volatile int32_t t54 = -2;

	t54 = ((x285&x286)%(x287%x288));

	if (t54 != -2) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x289 = 43088644LL;
	uint64_t x290 = UINT64_MAX;
	int8_t x291 = -1;
	volatile uint64_t t55 = 4816180191680006503LLU;

	t55 = ((x289&x290)%(x291%x292));

	if (t55 != 43088644LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x293 = INT8_MIN;
	uint64_t x294 = 101303LLU;
	static int16_t x295 = -1;
	volatile int8_t x296 = 5;

	t56 = ((x293&x294)%(x295%x296));

	if (t56 != 101248LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x297 = 391U;
	volatile int16_t x298 = INT16_MIN;
	static int32_t x299 = INT32_MAX;
	volatile uint32_t x300 = 853127445U;
	uint32_t t57 = 0U;

	t57 = ((x297&x298)%(x299%x300));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x301 = INT64_MIN;
	uint64_t x302 = 900476LLU;
	uint16_t x303 = 7U;
	uint64_t x304 = 889627LLU;
	uint64_t t58 = 0LLU;

	t58 = ((x301&x302)%(x303%x304));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x305 = INT8_MIN;
	static int16_t x306 = -1;
	int32_t x307 = INT32_MAX;
	uint8_t x308 = UINT8_MAX;
	static int32_t t59 = -104204;

	t59 = ((x305&x306)%(x307%x308));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x317 = 7U;
	uint64_t x320 = 594430951701686LLU;
	uint64_t t60 = 3531487LLU;

	t60 = ((x317&x318)%(x319%x320));

	if (t60 != 7LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x321 = 1;
	int16_t x322 = INT16_MAX;
	uint16_t x324 = UINT16_MAX;
	int32_t t61 = -1;

	t61 = ((x321&x322)%(x323%x324));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x325 = 1371;
	uint64_t x326 = 247519829714LLU;
	volatile int64_t x327 = INT64_MAX;
	static volatile int8_t x328 = INT8_MIN;
	volatile uint64_t t62 = 1016421389225994LLU;

	t62 = ((x325&x326)%(x327%x328));

	if (t62 != 90LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x330 = -191616551167LL;
	int32_t x331 = -1;
	static uint16_t x332 = 2U;

	t63 = ((x329&x330)%(x331%x332));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x333 = INT8_MIN;
	volatile int32_t x334 = INT32_MAX;
	int16_t x335 = 467;
	int8_t x336 = INT8_MIN;
	static int32_t t64 = 22149974;

	t64 = ((x333&x334)%(x335%x336));

	if (t64 != 35) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x337 = UINT64_MAX;
	uint8_t x338 = 87U;
	uint64_t x339 = UINT64_MAX;
	int16_t x340 = INT16_MAX;
	volatile uint64_t t65 = 164366715530371LLU;

	t65 = ((x337&x338)%(x339%x340));

	if (t65 != 12LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x347 = INT32_MAX;
	static uint64_t x348 = UINT64_MAX;
	volatile uint64_t t66 = 135786176117LLU;

	t66 = ((x345&x346)%(x347%x348));

	if (t66 != 3LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x349 = 210;
	volatile int16_t x350 = INT16_MIN;
	int8_t x351 = -3;
	volatile uint16_t x352 = 8377U;
	volatile int32_t t67 = -570;

	t67 = ((x349&x350)%(x351%x352));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x353 = 694;
	static int64_t x354 = INT64_MIN;
	uint32_t x355 = 7786U;
	volatile int32_t x356 = -983839878;
	volatile int64_t t68 = 68487806464LL;

	t68 = ((x353&x354)%(x355%x356));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x361 = INT16_MIN;
	int32_t x362 = -1;
	int16_t x363 = INT16_MIN;
	int64_t x364 = INT64_MIN;
	volatile int64_t t69 = -44738099833LL;

	t69 = ((x361&x362)%(x363%x364));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x366 = 2LL;
	static int64_t x368 = INT64_MIN;
	static int64_t t70 = 1084877231872326095LL;

	t70 = ((x365&x366)%(x367%x368));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x370 = 174U;
	uint64_t x371 = 1070081857897989LLU;
	uint32_t x372 = UINT32_MAX;
	volatile uint64_t t71 = 3059LLU;

	t71 = ((x369&x370)%(x371%x372));

	if (t71 != 174LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x373 = 109134830LL;
	int16_t x374 = INT16_MIN;
	int8_t x375 = INT8_MIN;
	uint64_t x376 = UINT64_MAX;
	volatile uint64_t t72 = 15514232LLU;

	t72 = ((x373&x374)%(x375%x376));

	if (t72 != 109117440LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x378 = 7;
	static int64_t x379 = -486378769100LL;
	volatile uint16_t x380 = UINT16_MAX;
	int64_t t73 = -15673523984LL;

	t73 = ((x377&x378)%(x379%x380));

	if (t73 != 4LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x381 = INT8_MAX;
	int16_t x382 = 166;
	volatile int8_t x383 = INT8_MIN;
	uint32_t x384 = 522179129U;

	t74 = ((x381&x382)%(x383%x384));

	if (t74 != 38U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x385 = -1;
	static int8_t x386 = INT8_MAX;
	int32_t x388 = 471;
	volatile int32_t t75 = -106269;

	t75 = ((x385&x386)%(x387%x388));

	if (t75 != 3) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x389 = -297LL;
	int16_t x390 = -1;
	uint8_t x391 = 127U;
	static int64_t x392 = INT64_MIN;

	t76 = ((x389&x390)%(x391%x392));

	if (t76 != -43LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x397 = -1;
	int16_t x398 = 1;
	int16_t x399 = INT16_MAX;
	int64_t x400 = -1646LL;
	int64_t t77 = 33LL;

	t77 = ((x397&x398)%(x399%x400));

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x401 = 15;
	static int64_t x402 = -511791507745414LL;
	int64_t x403 = -1LL;
	static int16_t x404 = INT16_MAX;
	int64_t t78 = 1935659533958LL;

	t78 = ((x401&x402)%(x403%x404));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x405 = INT64_MAX;
	int16_t x406 = -4;
	uint32_t x407 = 13U;
	int64_t x408 = INT64_MIN;
	volatile int64_t t79 = 13727310683LL;

	t79 = ((x405&x406)%(x407%x408));

	if (t79 != 4LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x409 = INT16_MIN;
	int32_t x410 = INT32_MIN;
	volatile int16_t x411 = 4;
	int32_t t80 = 1704;

	t80 = ((x409&x410)%(x411%x412));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x413 = -2;
	int32_t x414 = INT32_MIN;
	volatile int64_t x415 = INT64_MIN;
	int8_t x416 = 3;

	t81 = ((x413&x414)%(x415%x416));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x417 = 14285U;
	volatile int32_t x418 = INT32_MIN;
	int16_t x419 = INT16_MAX;
	volatile int32_t x420 = INT32_MIN;

	t82 = ((x417&x418)%(x419%x420));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x421 = 0LLU;
	static int64_t x422 = 85286448212LL;
	uint32_t x423 = 15U;
	static uint16_t x424 = 18771U;
	uint64_t t83 = 35LLU;

	t83 = ((x421&x422)%(x423%x424));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x425 = 0;
	int64_t x426 = INT64_MAX;
	int64_t x427 = 716639939LL;
	volatile uint16_t x428 = 7U;
	volatile int64_t t84 = -88688684LL;

	t84 = ((x425&x426)%(x427%x428));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x429 = INT64_MAX;
	int8_t x430 = -21;
	volatile int64_t x432 = 17LL;
	int64_t t85 = -3051517742718847872LL;

	t85 = ((x429&x430)%(x431%x432));

	if (t85 != 5LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x433 = UINT64_MAX;
	int32_t x434 = -170043145;
	int16_t x435 = INT16_MIN;
	int16_t x436 = INT16_MAX;
	uint64_t t86 = 112612433857069LLU;

	t86 = ((x433&x434)%(x435%x436));

	if (t86 != 18446744073539508471LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x437 = 58397LL;
	volatile uint8_t x438 = 1U;
	uint64_t x440 = UINT64_MAX;
	uint64_t t87 = 592888LLU;

	t87 = ((x437&x438)%(x439%x440));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x441 = 2478242855LL;
	int16_t x442 = 3;
	uint8_t x443 = UINT8_MAX;
	static uint16_t x444 = UINT16_MAX;
	int64_t t88 = 464097498968369LL;

	t88 = ((x441&x442)%(x443%x444));

	if (t88 != 3LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x445 = 75660461U;
	uint64_t x446 = 935576993629360LLU;
	static int64_t x447 = -1LL;
	volatile int8_t x448 = INT8_MIN;
	volatile uint64_t t89 = 7695507LLU;

	t89 = ((x445&x446)%(x447%x448));

	if (t89 != 67110048LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x449 = 80223;
	int64_t x450 = INT64_MIN;
	volatile int64_t x451 = -1LL;
	volatile int64_t x452 = INT64_MIN;
	int64_t t90 = 7LL;

	t90 = ((x449&x450)%(x451%x452));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x457 = INT16_MIN;
	int16_t x459 = 923;
	uint32_t t91 = 1U;

	t91 = ((x457&x458)%(x459%x460));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x469 = INT32_MIN;
	int8_t x470 = -1;
	volatile int64_t x471 = -6LL;
	volatile int64_t t92 = 8643451LL;

	t92 = ((x469&x470)%(x471%x472));

	if (t92 != -2LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x473 = 39;
	volatile int8_t x474 = INT8_MIN;
	int16_t x475 = INT16_MIN;
	volatile int64_t t93 = 28643789LL;

	t93 = ((x473&x474)%(x475%x476));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x477 = INT8_MAX;
	static int8_t x478 = INT8_MIN;
	volatile uint8_t x479 = 29U;
	uint32_t x480 = UINT32_MAX;
	uint32_t t94 = 123774U;

	t94 = ((x477&x478)%(x479%x480));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x481 = INT16_MIN;
	int8_t x482 = -1;
	int64_t x483 = 142493641654446724LL;
	uint16_t x484 = 5U;
	static int64_t t95 = 427625840LL;

	t95 = ((x481&x482)%(x483%x484));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x485 = -1;
	static uint8_t x486 = 57U;
	uint8_t x488 = 5U;
	int32_t t96 = 8531;

	t96 = ((x485&x486)%(x487%x488));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x491 = INT8_MIN;
	volatile int64_t x492 = INT64_MIN;
	static int64_t t97 = 64LL;

	t97 = ((x489&x490)%(x491%x492));

	if (t97 != 127LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x501 = -1;
	int16_t x502 = INT16_MIN;
	int16_t x504 = INT16_MIN;
	static volatile uint32_t t98 = 5U;

	t98 = ((x501&x502)%(x503%x504));

	if (t98 != 3U) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x505 = -1;
	int32_t x506 = INT32_MIN;
	uint32_t x507 = 1U;
	int16_t x508 = -3832;
	uint32_t t99 = 62345U;

	t99 = ((x505&x506)%(x507%x508));

	if (t99 != 0U) { NG(); } else { ; }
	
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

