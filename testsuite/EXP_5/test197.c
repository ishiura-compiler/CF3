#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x26 = 5;
int8_t x27 = INT8_MIN;
uint64_t x29 = 4100526671LLU;
int16_t x30 = INT16_MIN;
uint8_t x32 = UINT8_MAX;
int8_t x33 = 1;
uint32_t x36 = UINT32_MAX;
int8_t x50 = INT8_MIN;
volatile int64_t t9 = INT64_MIN;
int8_t x74 = -3;
int64_t t11 = -6789828743346120LL;
uint32_t x90 = 1239155U;
int16_t x91 = INT16_MAX;
uint64_t x98 = 1568592064LLU;
static int64_t x101 = INT64_MIN;
volatile int64_t t16 = -1986LL;
static int32_t x121 = 124279;
static int64_t x123 = -1LL;
int16_t x137 = INT16_MIN;
int32_t x140 = -3916;
volatile uint64_t t19 = 107911217537042131LLU;
static uint8_t x149 = 24U;
static uint16_t x154 = 13U;
int8_t x156 = INT8_MIN;
static int32_t x170 = -1;
volatile uint64_t t23 = 1LLU;
static int32_t x189 = -1;
int16_t x192 = INT16_MIN;
static int8_t x196 = -13;
static uint16_t x201 = UINT16_MAX;
uint32_t x206 = 17894862U;
uint8_t x207 = 26U;
int32_t x212 = -1;
int64_t x237 = INT64_MIN;
uint64_t x238 = UINT64_MAX;
int32_t x241 = INT32_MIN;
volatile uint8_t x254 = 94U;
int8_t x255 = INT8_MIN;
uint16_t x260 = UINT16_MAX;
static uint32_t t40 = 4U;
volatile uint16_t x272 = 2993U;
int16_t x274 = INT16_MIN;
static volatile int8_t x277 = -8;
uint64_t t45 = 4220592631LLU;
int8_t x289 = -1;
int8_t x296 = 1;
static uint64_t t49 = 50585984LLU;
volatile int32_t x305 = -1;
static volatile uint8_t x309 = 1U;
volatile int16_t x316 = INT16_MAX;
static uint32_t x328 = 427420292U;
int64_t x337 = -41LL;
int32_t x345 = -1;
uint64_t t58 = 4621207452LLU;
int8_t x358 = 5;
static volatile uint64_t t60 = 136927404992165LLU;
static int64_t t61 = -7593LL;
volatile int64_t t63 = 0LL;
static uint64_t x383 = UINT64_MAX;
int64_t x386 = INT64_MIN;
int8_t x389 = INT8_MIN;
int8_t x390 = INT8_MIN;
static volatile int32_t x391 = -1;
static volatile uint64_t t70 = 690175LLU;
uint64_t x447 = UINT64_MAX;
volatile uint32_t x448 = 1272U;
uint64_t x468 = 1LLU;
int16_t x469 = 28;
uint16_t x481 = UINT16_MAX;
int32_t x503 = -1;
int64_t x505 = INT64_MIN;
int64_t t86 = -7933237577LL;
static volatile int64_t t89 = 23794684278LL;
uint8_t x539 = 111U;
uint8_t x541 = 10U;
int32_t x552 = INT32_MAX;
int64_t x561 = -3896439291746LL;
static volatile int32_t x563 = -1;
static volatile int8_t x564 = INT8_MIN;
static int16_t x574 = INT16_MAX;
int32_t x575 = 857;
static uint32_t x577 = 306907U;
volatile int32_t t98 = 0;
int16_t x595 = INT16_MIN;


void f0(void) {
	int8_t x5 = -1;
	int16_t x6 = INT16_MIN;
	volatile int8_t x7 = INT8_MIN;
	uint32_t x8 = 15531143U;
	uint32_t t0 = 54644918U;

	t0 = (x5-((x6-x7)*x8));

	if (t0 != 130366591U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x17 = UINT32_MAX;
	int8_t x18 = INT8_MIN;
	volatile uint64_t x19 = 1134861481306620LLU;
	volatile int64_t x20 = INT64_MAX;
	static uint64_t t1 = 41291701668LLU;

	t1 = (x17-((x18-x19)*x20));

	if (t1 != 18445609216523212163LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x21 = 13LLU;
	static int8_t x22 = INT8_MIN;
	int8_t x23 = -1;
	static uint16_t x24 = 29646U;
	volatile uint64_t t2 = 7820262259942510131LLU;

	t2 = (x21-((x22-x23)*x24));

	if (t2 != 3765055LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x25 = UINT8_MAX;
	static int8_t x28 = INT8_MIN;
	static volatile int32_t t3 = -1;

	t3 = (x25-((x26-x27)*x28));

	if (t3 != 17279) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x31 = UINT8_MAX;
	uint64_t t4 = 329563425955LLU;

	t4 = (x29-((x30-x31)*x32));

	if (t4 != 4108947536LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x34 = 1U;
	static uint64_t x35 = UINT64_MAX;
	volatile uint64_t t5 = 32969077750387LLU;

	t5 = (x33-((x34-x35)*x36));

	if (t5 != 18446744065119617027LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x37 = INT32_MIN;
	int64_t x38 = INT64_MAX;
	volatile int64_t x39 = 7412565LL;
	static int64_t x40 = -1LL;
	int64_t t6 = -32423058580932492LL;

	t6 = (x37-((x38-x39)*x40));

	if (t6 != 9223372034699879594LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x41 = 10U;
	int16_t x42 = INT16_MIN;
	volatile uint8_t x43 = UINT8_MAX;
	static int32_t x44 = -1;
	int32_t t7 = -443;

	t7 = (x41-((x42-x43)*x44));

	if (t7 != -33013) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x49 = -40731454484238LL;
	int16_t x51 = -1;
	volatile int16_t x52 = -79;
	volatile int64_t t8 = 605LL;

	t8 = (x49-((x50-x51)*x52));

	if (t8 != -40731454494271LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x53 = INT64_MIN;
	uint32_t x54 = 30808659U;
	uint8_t x55 = UINT8_MAX;
	int32_t x56 = INT32_MIN;

	t9 = (x53-((x54-x55)*x56));

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x73 = 1U;
	volatile int64_t x75 = 506641LL;
	uint32_t x76 = 966308U;
	volatile int64_t t10 = 244483LL;

	t10 = (x73-((x74-x75)*x76));

	if (t10 != 489574150353LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x85 = 297;
	uint8_t x86 = UINT8_MAX;
	int64_t x87 = 128724916LL;
	volatile int32_t x88 = -1;

	t11 = (x85-((x86-x87)*x88));

	if (t11 != -128724364LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x89 = -263406744;
	int8_t x92 = INT8_MIN;
	volatile uint32_t t12 = 647651U;

	t12 = (x89-((x90-x91)*x92));

	if (t12 != 4185978216U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x97 = INT32_MIN;
	volatile int8_t x99 = INT8_MAX;
	volatile uint32_t x100 = 47607U;
	volatile uint64_t t13 = 396131818665405000LLU;

	t13 = (x97-((x98-x99)*x100));

	if (t13 != 18446669395605723209LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x102 = UINT16_MAX;
	int8_t x103 = INT8_MIN;
	int64_t x104 = -1LL;
	volatile int64_t t14 = 24526533754339640LL;

	t14 = (x101-((x102-x103)*x104));

	if (t14 != -9223372036854710145LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x105 = UINT64_MAX;
	int8_t x106 = -1;
	volatile uint16_t x107 = 24224U;
	uint32_t x108 = UINT32_MAX;
	uint64_t t15 = 491926266LLU;

	t15 = (x105-((x106-x107)*x108));

	if (t15 != 18446744073709527390LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x109 = 312U;
	int64_t x110 = -102785692LL;
	uint16_t x111 = 18489U;
	int16_t x112 = INT16_MIN;

	t16 = (x109-((x110-x111)*x112));

	if (t16 != -3368687402696LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x113 = -1LL;
	volatile int16_t x114 = INT16_MAX;
	int16_t x115 = INT16_MIN;
	static uint64_t x116 = 1LLU;
	static uint64_t t17 = 15556560711420627LLU;

	t17 = (x113-((x114-x115)*x116));

	if (t17 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x122 = 437;
	volatile int64_t x124 = -18018404624LL;
	volatile int64_t t18 = -52685282730LL;

	t18 = (x121-((x122-x123)*x124));

	if (t18 != 7892061349591LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x138 = 5U;
	uint64_t x139 = 407946506449505479LLU;

	t19 = (x137-((x138-x139)*x140));

	if (t19 != 7348215156467521640LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x150 = 1170;
	uint64_t x151 = UINT64_MAX;
	int32_t x152 = INT32_MIN;
	static volatile uint64_t t20 = 7154872335420120LLU;

	t20 = (x149-((x150-x151)*x152));

	if (t20 != 2514703351832LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x153 = -1;
	uint64_t x155 = 122614430720LLU;
	volatile uint64_t t21 = 16017356586700LLU;

	t21 = (x153-((x154-x155)*x156));

	if (t21 != 18446728379062421119LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x157 = 481;
	volatile int8_t x158 = -1;
	uint32_t x159 = 1008U;
	static int16_t x160 = INT16_MIN;
	uint32_t t22 = 5U;

	t22 = (x157-((x158-x159)*x160));

	if (t22 != 4261904865U) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x169 = 350953LLU;
	int32_t x171 = 2;
	volatile int16_t x172 = -5566;

	t23 = (x169-((x170-x171)*x172));

	if (t23 != 334255LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x185 = -87LL;
	volatile uint32_t x186 = UINT32_MAX;
	uint16_t x187 = 345U;
	uint64_t x188 = 113791047470812296LLU;
	static uint64_t t24 = 511760000284LLU;

	t24 = (x185-((x186-x187)*x188));

	if (t24 != 5712347981632302969LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x190 = 226934U;
	static int64_t x191 = 1148521LL;
	int64_t t25 = -4191917567609LL;

	t25 = (x189-((x190-x191)*x192));

	if (t25 != -30198562817LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x193 = 1;
	static int32_t x194 = INT32_MIN;
	uint64_t x195 = UINT64_MAX;
	static volatile uint64_t t26 = 44215042LLU;

	t26 = (x193-((x194-x195)*x196));

	if (t26 != 18446744045792264206LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x197 = UINT64_MAX;
	static int64_t x198 = -1LL;
	volatile int16_t x199 = INT16_MIN;
	uint64_t x200 = UINT64_MAX;
	uint64_t t27 = 8LLU;

	t27 = (x197-((x198-x199)*x200));

	if (t27 != 32766LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x202 = -1;
	int64_t x203 = 1LL;
	uint8_t x204 = UINT8_MAX;
	volatile int64_t t28 = 9LL;

	t28 = (x201-((x202-x203)*x204));

	if (t28 != 66045LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x205 = INT32_MIN;
	int32_t x208 = -1;
	volatile uint32_t t29 = 65133U;

	t29 = (x205-((x206-x207)*x208));

	if (t29 != 2165378484U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x209 = -1328782346351LL;
	uint32_t x210 = 127515008U;
	int8_t x211 = INT8_MIN;
	int64_t t30 = 244000262292LL;

	t30 = (x209-((x210-x211)*x212));

	if (t30 != -1332949798511LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x221 = INT8_MAX;
	static uint64_t x222 = UINT64_MAX;
	static uint64_t x223 = 123100408927246LLU;
	uint16_t x224 = UINT16_MAX;
	uint64_t t31 = 19559635012LLU;

	t31 = (x221-((x222-x223)*x224));

	if (t31 != 8067385299047132272LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x225 = INT64_MAX;
	static int32_t x226 = -1;
	uint64_t x227 = 46815272475394414LLU;
	int8_t x228 = 1;
	uint64_t t32 = 453LLU;

	t32 = (x225-((x226-x227)*x228));

	if (t32 != 9270187309330170222LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x233 = INT64_MIN;
	static uint64_t x234 = UINT64_MAX;
	int8_t x235 = INT8_MAX;
	uint8_t x236 = UINT8_MAX;
	volatile uint64_t t33 = 3134253118468LLU;

	t33 = (x233-((x234-x235)*x236));

	if (t33 != 9223372036854808448LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x239 = INT32_MIN;
	uint64_t x240 = 257651LLU;
	uint64_t t34 = 4271720LLU;

	t34 = (x237-((x238-x239)*x240));

	if (t34 != 9222818735545642611LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x242 = 3;
	volatile int16_t x243 = -1;
	static int8_t x244 = -18;
	static int32_t t35 = -1;

	t35 = (x241-((x242-x243)*x244));

	if (t35 != -2147483576) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x245 = INT8_MIN;
	static int32_t x246 = -14612460;
	uint16_t x247 = 78U;
	uint64_t x248 = 13234LLU;
	uint64_t t36 = 649LLU;

	t36 = (x245-((x246-x247)*x248));

	if (t36 != 193382327764LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x253 = INT8_MIN;
	volatile int16_t x256 = INT16_MIN;
	static volatile int32_t t37 = 50753;

	t37 = (x253-((x254-x255)*x256));

	if (t37 != 7274368) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x257 = INT64_MIN;
	int8_t x258 = INT8_MIN;
	int16_t x259 = -1;
	volatile int64_t t38 = 3654424238269328851LL;

	t38 = (x257-((x258-x259)*x260));

	if (t38 != -9223372036846452863LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x261 = -1033520725475359LL;
	uint32_t x262 = 117U;
	int16_t x263 = -1;
	volatile uint16_t x264 = 207U;
	int64_t t39 = 6478240LL;

	t39 = (x261-((x262-x263)*x264));

	if (t39 != -1033520725499785LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x265 = 3858U;
	int8_t x266 = INT8_MIN;
	volatile uint32_t x267 = UINT32_MAX;
	volatile uint16_t x268 = 52U;

	t40 = (x265-((x266-x267)*x268));

	if (t40 != 10462U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x269 = INT16_MIN;
	uint64_t x270 = 3734604593028LLU;
	int16_t x271 = -49;
	uint64_t t41 = 18371601476320LLU;

	t41 = (x269-((x270-x271)*x272));

	if (t41 != 18435566402162439387LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x273 = 306979U;
	int8_t x275 = 2;
	uint8_t x276 = UINT8_MAX;
	static volatile uint32_t t42 = 1008613753U;

	t42 = (x273-((x274-x275)*x276));

	if (t42 != 8663329U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x278 = 0;
	int32_t x279 = -18530106;
	uint32_t x280 = UINT32_MAX;
	volatile uint32_t t43 = 223U;

	t43 = (x277-((x278-x279)*x280));

	if (t43 != 18530098U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x281 = 0U;
	int32_t x282 = INT32_MIN;
	int16_t x283 = -1;
	uint64_t x284 = 927LLU;
	volatile uint64_t t44 = 522438332LLU;

	t44 = (x281-((x282-x283)*x284));

	if (t44 != 1990717340769LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x285 = -1;
	int64_t x286 = 150032LL;
	uint8_t x287 = 9U;
	uint64_t x288 = 132087412288214LLU;

	t45 = (x285-((x286-x287)*x288));

	if (t45 != 17077338293704374309LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x290 = -1;
	uint32_t x291 = 3587U;
	volatile int8_t x292 = INT8_MIN;
	uint32_t t46 = 12282U;

	t46 = (x289-((x290-x291)*x292));

	if (t46 != 4294508031U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x293 = -732617551982257103LL;
	static volatile int8_t x294 = -15;
	int32_t x295 = INT32_MIN;
	volatile int64_t t47 = 171821544233283LL;

	t47 = (x293-((x294-x295)*x296));

	if (t47 != -732617554129740736LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x297 = UINT16_MAX;
	static int8_t x298 = 28;
	int32_t x299 = -1;
	volatile int32_t x300 = -1;
	static int32_t t48 = 95888903;

	t48 = (x297-((x298-x299)*x300));

	if (t48 != 65564) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint32_t x301 = UINT32_MAX;
	volatile int64_t x302 = INT64_MIN;
	uint64_t x303 = 612388LLU;
	uint32_t x304 = 10717U;

	t49 = (x301-((x302-x303)*x304));

	if (t49 != 9223372047712705299LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x306 = UINT64_MAX;
	volatile int32_t x307 = 11227;
	volatile int32_t x308 = -1;
	volatile uint64_t t50 = 246000151LLU;

	t50 = (x305-((x306-x307)*x308));

	if (t50 != 18446744073709540387LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x310 = INT8_MIN;
	int8_t x311 = INT8_MIN;
	volatile uint16_t x312 = 6U;
	volatile int32_t t51 = 35818;

	t51 = (x309-((x310-x311)*x312));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x313 = INT8_MAX;
	int16_t x314 = INT16_MIN;
	uint64_t x315 = 4956816862251615250LLU;
	uint64_t t52 = 196238573619394LLU;

	t52 = (x313-((x314-x315)*x316));

	if (t52 != 14883300460858178669LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x325 = -1;
	uint32_t x326 = 8526950U;
	uint16_t x327 = 3116U;
	uint32_t t53 = 85U;

	t53 = (x325-((x326-x327)*x328));

	if (t53 != 2226167319U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x338 = INT16_MIN;
	static volatile int8_t x339 = INT8_MIN;
	int8_t x340 = -1;
	int64_t t54 = -2764997479LL;

	t54 = (x337-((x338-x339)*x340));

	if (t54 != -32681LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x341 = INT8_MAX;
	int16_t x342 = INT16_MIN;
	int16_t x343 = -1;
	uint16_t x344 = 1356U;
	static volatile int32_t t55 = 27378324;

	t55 = (x341-((x342-x343)*x344));

	if (t55 != 44432179) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x346 = INT8_MIN;
	volatile int32_t x347 = 7;
	int16_t x348 = -1;
	static volatile int32_t t56 = -247;

	t56 = (x345-((x346-x347)*x348));

	if (t56 != -136) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x349 = UINT32_MAX;
	int32_t x350 = INT32_MAX;
	int16_t x351 = INT16_MAX;
	volatile int32_t x352 = -1;
	volatile uint32_t t57 = 60U;

	t57 = (x349-((x350-x351)*x352));

	if (t57 != 2147450879U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x353 = UINT8_MAX;
	int32_t x354 = -1;
	uint64_t x355 = 229608LLU;
	uint16_t x356 = 1U;

	t58 = (x353-((x354-x355)*x356));

	if (t58 != 229864LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x357 = 3U;
	int16_t x359 = -1;
	int8_t x360 = INT8_MAX;
	int32_t t59 = 0;

	t59 = (x357-((x358-x359)*x360));

	if (t59 != -759) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x365 = 12;
	uint64_t x366 = 2556896919272LLU;
	int16_t x367 = INT16_MAX;
	int32_t x368 = INT32_MIN;

	t60 = (x365-((x366-x367)*x368));

	if (t60 != 12211263499862540300LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x369 = -1LL;
	static uint32_t x370 = 14U;
	static int16_t x371 = INT16_MAX;
	uint16_t x372 = 111U;

	t61 = (x369-((x370-x371)*x372));

	if (t61 != -4291331714LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x373 = UINT32_MAX;
	int32_t x374 = 125;
	static uint8_t x375 = 12U;
	int64_t x376 = -1LL;
	volatile int64_t t62 = -82107165931LL;

	t62 = (x373-((x374-x375)*x376));

	if (t62 != 4294967408LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x377 = -8610953768445062LL;
	volatile int64_t x378 = -1LL;
	int32_t x379 = -1;
	static int8_t x380 = -1;

	t63 = (x377-((x378-x379)*x380));

	if (t63 != -8610953768445062LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x381 = 0;
	volatile int64_t x382 = INT64_MIN;
	int8_t x384 = -1;
	uint64_t t64 = 46545LLU;

	t64 = (x381-((x382-x383)*x384));

	if (t64 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x385 = -1;
	static int8_t x387 = -1;
	volatile uint8_t x388 = 0U;
	volatile int64_t t65 = -315039823887LL;

	t65 = (x385-((x386-x387)*x388));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x392 = -12293;
	static int32_t t66 = -57525;

	t66 = (x389-((x390-x391)*x392));

	if (t66 != -1561339) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x393 = INT64_MIN;
	volatile uint8_t x394 = 5U;
	int64_t x395 = 880050070623218LL;
	uint32_t x396 = 3U;
	static int64_t t67 = 1995071070596676993LL;

	t67 = (x393-((x394-x395)*x396));

	if (t67 != -9220731886642906169LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x397 = 768;
	int32_t x398 = INT32_MIN;
	volatile int64_t x399 = -108751780155LL;
	volatile int8_t x400 = 1;
	int64_t t68 = 1099594868257110169LL;

	t68 = (x397-((x398-x399)*x400));

	if (t68 != -106604295739LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x401 = UINT8_MAX;
	int64_t x402 = -1812912574960027LL;
	static uint64_t x403 = UINT64_MAX;
	int64_t x404 = 32861324LL;
	uint64_t t69 = 147823657096LLU;

	t69 = (x401-((x402-x403)*x404));

	if (t69 != 10170895427559266615LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x409 = 2U;
	int64_t x410 = INT64_MAX;
	uint64_t x411 = 369485328LLU;
	volatile int64_t x412 = 123379292LL;

	t70 = (x409-((x410-x411)*x412));

	if (t70 != 45586838296407070LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x413 = 34793586;
	int64_t x414 = -266695689LL;
	int32_t x415 = 3736060;
	int16_t x416 = 6;
	static int64_t t71 = -2059144340149281316LL;

	t71 = (x413-((x414-x415)*x416));

	if (t71 != 1657384080LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x421 = -250270985634LL;
	static uint32_t x422 = 26346U;
	int8_t x423 = INT8_MAX;
	static uint32_t x424 = UINT32_MAX;
	volatile int64_t t72 = 202LL;

	t72 = (x421-((x422-x423)*x424));

	if (t72 != -254565926711LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x425 = INT64_MIN;
	uint64_t x426 = 91617LLU;
	int16_t x427 = -1;
	int8_t x428 = INT8_MAX;
	static volatile uint64_t t73 = 582692330LLU;

	t73 = (x425-((x426-x427)*x428));

	if (t73 != 9223372036843140322LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x433 = 5;
	uint8_t x434 = UINT8_MAX;
	uint16_t x435 = 0U;
	int8_t x436 = INT8_MIN;
	volatile int32_t t74 = 110055;

	t74 = (x433-((x434-x435)*x436));

	if (t74 != 32645) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x437 = -6LL;
	static int16_t x438 = -1;
	static uint64_t x439 = 4036674LLU;
	int64_t x440 = INT64_MIN;
	static volatile uint64_t t75 = 31577LLU;

	t75 = (x437-((x438-x439)*x440));

	if (t75 != 9223372036854775802LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x445 = 22U;
	int64_t x446 = -1LL;
	volatile uint64_t t76 = 48932770665LLU;

	t76 = (x445-((x446-x447)*x448));

	if (t76 != 22LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x453 = 53;
	volatile int16_t x454 = INT16_MIN;
	uint32_t x455 = 1484257004U;
	uint64_t x456 = UINT64_MAX;
	uint64_t t77 = 196087035318LLU;

	t77 = (x453-((x454-x455)*x456));

	if (t77 != 2810677577LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x461 = -123776112830937LL;
	uint32_t x462 = 64296467U;
	int16_t x463 = -1;
	static int32_t x464 = -1044118842;
	volatile int64_t t78 = -15493675143LL;

	t78 = (x461-((x462-x463)*x464));

	if (t78 != -123778735007057LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x465 = 7U;
	int8_t x466 = 43;
	volatile uint64_t x467 = 85460LLU;
	uint64_t t79 = 8LLU;

	t79 = (x465-((x466-x467)*x468));

	if (t79 != 85424LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x470 = INT64_MIN;
	volatile int64_t x471 = INT64_MIN;
	static int32_t x472 = INT32_MIN;
	volatile int64_t t80 = -115922790989LL;

	t80 = (x469-((x470-x471)*x472));

	if (t80 != 28LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x473 = -1;
	uint16_t x474 = 23149U;
	static uint16_t x475 = 37U;
	static uint64_t x476 = UINT64_MAX;
	volatile uint64_t t81 = 13818882LLU;

	t81 = (x473-((x474-x475)*x476));

	if (t81 != 23111LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x477 = 986U;
	int16_t x478 = INT16_MIN;
	uint8_t x479 = 1U;
	static int16_t x480 = -1;
	int32_t t82 = -19499;

	t82 = (x477-((x478-x479)*x480));

	if (t82 != -31783) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x482 = -34891843242LL;
	int32_t x483 = INT32_MIN;
	uint32_t x484 = 55U;
	volatile int64_t t83 = -40625LL;

	t83 = (x481-((x482-x483)*x484));

	if (t83 != 1800939843205LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x497 = 10269749800LLU;
	static int16_t x498 = -1;
	uint16_t x499 = 7U;
	static uint16_t x500 = 47U;
	uint64_t t84 = 11LLU;

	t84 = (x497-((x498-x499)*x500));

	if (t84 != 10269750176LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x501 = 1;
	static uint32_t x502 = 949U;
	volatile int64_t x504 = -1LL;
	volatile int64_t t85 = -288997LL;

	t85 = (x501-((x502-x503)*x504));

	if (t85 != 951LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x506 = 12729;
	int32_t x507 = -1;
	static int8_t x508 = -1;

	t86 = (x505-((x506-x507)*x508));

	if (t86 != -9223372036854763078LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x513 = INT16_MIN;
	uint8_t x514 = 6U;
	static uint16_t x515 = 0U;
	int8_t x516 = INT8_MIN;
	volatile int32_t t87 = 281618;

	t87 = (x513-((x514-x515)*x516));

	if (t87 != -32000) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x521 = 51738;
	int32_t x522 = INT32_MIN;
	int8_t x523 = -2;
	int32_t x524 = -1;
	int32_t t88 = 90;

	t88 = (x521-((x522-x523)*x524));

	if (t88 != -2147431908) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x529 = -494;
	volatile int64_t x530 = INT64_MIN;
	int64_t x531 = INT64_MIN;
	int8_t x532 = -1;

	t89 = (x529-((x530-x531)*x532));

	if (t89 != -494LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x533 = 1;
	volatile int64_t x534 = -1LL;
	int8_t x535 = -1;
	int8_t x536 = -1;
	int64_t t90 = 5028750LL;

	t90 = (x533-((x534-x535)*x536));

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x537 = 18952;
	int8_t x538 = -1;
	static int8_t x540 = INT8_MIN;
	static volatile int32_t t91 = 146757273;

	t91 = (x537-((x538-x539)*x540));

	if (t91 != 4616) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x542 = -1;
	int8_t x543 = -1;
	static int32_t x544 = -1;
	volatile int32_t t92 = 748325;

	t92 = (x541-((x542-x543)*x544));

	if (t92 != 10) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x545 = -9;
	uint8_t x546 = UINT8_MAX;
	static int16_t x547 = 413;
	uint8_t x548 = 0U;
	volatile int32_t t93 = 415852;

	t93 = (x545-((x546-x547)*x548));

	if (t93 != -9) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x549 = 16;
	static int64_t x550 = -703421LL;
	int64_t x551 = -1LL;
	volatile int64_t t94 = 16889107100801565LL;

	t94 = (x549-((x550-x551)*x552));

	if (t94 != 1510582946972756LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x562 = -1;
	volatile int64_t t95 = 43859113LL;

	t95 = (x561-((x562-x563)*x564));

	if (t95 != -3896439291746LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x573 = 485697LL;
	volatile int8_t x576 = INT8_MIN;
	volatile int64_t t96 = 1379925241560LL;

	t96 = (x573-((x574-x575)*x576));

	if (t96 != 4570177LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x578 = -2;
	int32_t x579 = -1;
	volatile int32_t x580 = INT32_MAX;
	uint32_t t97 = 225U;

	t97 = (x577-((x578-x579)*x580));

	if (t97 != 2147790554U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint8_t x581 = 17U;
	uint16_t x582 = 40U;
	int16_t x583 = -1;
	volatile uint8_t x584 = UINT8_MAX;

	t98 = (x581-((x582-x583)*x584));

	if (t98 != -10438) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x593 = INT8_MAX;
	uint32_t x594 = UINT32_MAX;
	static uint16_t x596 = 3U;
	volatile uint32_t t99 = 980640342U;

	t99 = (x593-((x594-x595)*x596));

	if (t99 != 4294869122U) { NG(); } else { ; }
	
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

