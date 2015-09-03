#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x10 = INT8_MIN;
volatile int32_t x17 = INT32_MIN;
volatile int64_t t1 = -12261LL;
uint64_t t3 = 35056991LLU;
uint64_t x35 = 738509337LLU;
static int64_t x42 = -1LL;
static int16_t x44 = INT16_MIN;
volatile int16_t x48 = -125;
static volatile uint64_t x55 = UINT64_MAX;
uint8_t x81 = 0U;
volatile int64_t t14 = -1011537794077LL;
uint64_t t16 = 3371LLU;
int32_t x102 = 5334;
static int64_t x103 = -457LL;
static uint32_t x104 = 979118136U;
static volatile int64_t t17 = 6694336LL;
uint16_t x106 = 1388U;
int16_t x110 = INT16_MIN;
static uint8_t x114 = 8U;
volatile int64_t t22 = 56LL;
uint64_t t24 = 1022186232LLU;
volatile int8_t x142 = INT8_MAX;
static uint8_t x150 = UINT8_MAX;
static int16_t x152 = -1;
static int8_t x154 = -1;
uint16_t x161 = 706U;
uint64_t x167 = 7286350870577LLU;
static int32_t x168 = -1;
uint32_t x179 = 6452226U;
int64_t x180 = -72LL;
static int64_t x182 = -1LL;
int64_t t33 = 4439LL;
static int16_t x185 = 1193;
int64_t x187 = -17800276607074869LL;
int8_t x196 = INT8_MAX;
volatile uint32_t t37 = 3499U;
uint64_t x208 = 0LLU;
uint64_t t38 = 74039046LLU;
uint32_t x222 = 153992624U;
volatile uint16_t x229 = UINT16_MAX;
volatile int64_t t41 = 167523977LL;
int8_t x242 = INT8_MIN;
volatile int8_t x245 = INT8_MIN;
static int16_t x248 = -1;
static int32_t t45 = -1761;
int16_t x269 = 53;
static int8_t x271 = 6;
volatile int32_t x276 = -494832098;
uint32_t x277 = 178U;
int16_t x278 = INT16_MIN;
int32_t x279 = -1;
uint64_t x294 = 15LLU;
int64_t x297 = -1LL;
int32_t x298 = INT32_MAX;
static volatile uint32_t x307 = 485599U;
int16_t x309 = INT16_MIN;
int32_t x313 = -1;
static volatile int8_t x314 = -5;
static uint64_t x316 = 1703746LLU;
static volatile int8_t x317 = INT8_MIN;
volatile uint64_t t58 = 4283750661969430LLU;
int32_t x324 = INT32_MAX;
static uint64_t t63 = 57LLU;
uint32_t x364 = UINT32_MAX;
int64_t x365 = 464236784901520LL;
int64_t t67 = -1LL;
int16_t x375 = -5890;
volatile int64_t t68 = -16668514004486LL;
uint32_t x377 = 8U;
uint64_t x387 = UINT64_MAX;
uint64_t t70 = 215796382036950LLU;
int64_t x392 = -1LL;
int64_t t71 = 1019367LL;
volatile uint32_t t72 = 4009002U;
int64_t t73 = 50000596031025281LL;
static volatile int32_t x406 = INT32_MIN;
uint8_t x410 = 32U;
int64_t x413 = -5LL;
volatile int64_t t76 = -25LL;
volatile int64_t t77 = -3634492752683237LL;
volatile uint64_t t78 = 139431838967344687LLU;
static int16_t x439 = INT16_MIN;
int16_t x444 = INT16_MIN;
int64_t x447 = -1LL;
int16_t x449 = -1;
static volatile int64_t t83 = 291LL;
static int32_t x461 = -1;
int64_t x463 = INT64_MIN;
volatile int64_t x465 = 27254LL;
uint8_t x466 = 0U;
static volatile uint32_t x467 = 263208U;
int64_t t87 = 189572451841337523LL;
int8_t x477 = INT8_MIN;
volatile int32_t x485 = -1;
int8_t x486 = -1;
int32_t x490 = 24828;
uint32_t x492 = 63635257U;
uint32_t x493 = 2U;
int32_t x496 = INT32_MAX;
int64_t t95 = 1LL;
int16_t x518 = INT16_MIN;
static volatile int16_t x519 = -64;
static int32_t x522 = INT32_MIN;
static int64_t x524 = -1LL;


void f0(void) {
	int8_t x9 = INT8_MIN;
	uint8_t x11 = UINT8_MAX;
	uint64_t x12 = UINT64_MAX;
	volatile uint64_t t0 = 603541797877LLU;

	t0 = (((x9&x10)+x11)*x12);

	if (t0 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x18 = INT64_MIN;
	uint16_t x19 = 1U;
	volatile uint8_t x20 = 0U;

	t1 = (((x17&x18)+x19)*x20);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x21 = 356110547U;
	int64_t x22 = INT64_MAX;
	int32_t x23 = INT32_MIN;
	int32_t x24 = INT32_MIN;
	volatile int64_t t2 = 447LL;

	t2 = (((x21&x22)+x23)*x24);

	if (t2 != 3846944441864552448LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x25 = 19660059793156LL;
	int8_t x26 = -1;
	uint16_t x27 = UINT16_MAX;
	uint64_t x28 = 45726717698636005LLU;

	t3 = (((x25&x26)+x27)*x28);

	if (t3 != 15629853942152936879LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x29 = INT64_MAX;
	volatile int16_t x30 = INT16_MIN;
	int8_t x31 = -1;
	int64_t x32 = -1LL;
	int64_t t4 = 1LL;

	t4 = (((x29&x30)+x31)*x32);

	if (t4 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x33 = 100U;
	int32_t x34 = INT32_MIN;
	int64_t x36 = -142586727308103LL;
	static volatile uint64_t t5 = 211050755LLU;

	t5 = (((x33&x34)+x35)*x36);

	if (t5 != 10832467500888918033LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x37 = -1;
	int64_t x38 = -1LL;
	uint64_t x39 = 4870594LLU;
	volatile uint8_t x40 = 2U;
	volatile uint64_t t6 = 79766LLU;

	t6 = (((x37&x38)+x39)*x40);

	if (t6 != 9741186LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x41 = -1;
	int32_t x43 = 19892;
	int64_t t7 = 273057668080380819LL;

	t7 = (((x41&x42)+x43)*x44);

	if (t7 != -651788288LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x45 = 0U;
	int16_t x46 = -1;
	int16_t x47 = INT16_MIN;
	volatile uint32_t t8 = 5530U;

	t8 = (((x45&x46)+x47)*x48);

	if (t8 != 4096000U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x53 = 7809U;
	uint16_t x54 = UINT16_MAX;
	volatile int64_t x56 = INT64_MIN;
	uint64_t t9 = 133LLU;

	t9 = (((x53&x54)+x55)*x56);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x57 = INT64_MIN;
	uint32_t x58 = UINT32_MAX;
	uint32_t x59 = 440642612U;
	int16_t x60 = INT16_MAX;
	int64_t t10 = -418179752891LL;

	t10 = (((x57&x58)+x59)*x60);

	if (t10 != 14438536467404LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x65 = INT8_MIN;
	int8_t x66 = INT8_MIN;
	uint16_t x67 = 27U;
	static int8_t x68 = INT8_MAX;
	volatile int32_t t11 = -46;

	t11 = (((x65&x66)+x67)*x68);

	if (t11 != -12827) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x73 = 18756327LLU;
	int64_t x74 = -1522LL;
	int16_t x75 = INT16_MIN;
	int8_t x76 = -1;
	volatile uint64_t t12 = 11820472569LLU;

	t12 = (((x73&x74)+x75)*x76);

	if (t12 != 18446744073690828282LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x82 = INT8_MIN;
	volatile uint16_t x83 = 756U;
	uint16_t x84 = 31119U;
	volatile int32_t t13 = -924771485;

	t13 = (((x81&x82)+x83)*x84);

	if (t13 != 23525964) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x85 = 3U;
	static int16_t x86 = INT16_MAX;
	uint8_t x87 = 7U;
	int64_t x88 = -1LL;

	t14 = (((x85&x86)+x87)*x88);

	if (t14 != -10LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x93 = 560097035622LLU;
	int64_t x94 = -3383234132584230863LL;
	int64_t x95 = -57853969LL;
	uint32_t x96 = UINT32_MAX;
	volatile uint64_t t15 = 2876533LLU;

	t15 = (((x93&x94)+x95)*x96);

	if (t15 != 4381782589920298993LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x97 = 55691488LLU;
	uint16_t x98 = 29U;
	uint16_t x99 = 12384U;
	uint32_t x100 = 40U;

	t16 = (((x97&x98)+x99)*x100);

	if (t16 != 495360LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x101 = INT16_MIN;

	t17 = (((x101&x102)+x103)*x104);

	if (t17 != -447456988152LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x105 = UINT32_MAX;
	int32_t x107 = -4979774;
	static int32_t x108 = INT32_MAX;
	volatile uint32_t t18 = 31225570U;

	t18 = (((x105&x106)+x107)*x108);

	if (t18 != 4978386U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x109 = UINT32_MAX;
	int32_t x111 = -213175;
	static uint32_t x112 = 138927912U;
	static volatile uint32_t t19 = 1194U;

	t19 = (((x109&x110)+x111)*x112);

	if (t19 != 2412345960U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x113 = 0;
	int64_t x115 = -6129332790LL;
	int16_t x116 = INT16_MAX;
	int64_t t20 = 847337293110LL;

	t20 = (((x113&x114)+x115)*x116);

	if (t20 != -200839847529930LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x117 = 11U;
	volatile uint16_t x118 = 20U;
	uint64_t x119 = UINT64_MAX;
	volatile uint64_t x120 = 222322614LLU;
	uint64_t t21 = 2229803384367LLU;

	t21 = (((x117&x118)+x119)*x120);

	if (t21 != 18446744073487229002LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x121 = -1LL;
	uint8_t x122 = UINT8_MAX;
	int8_t x123 = INT8_MIN;
	static uint32_t x124 = 91U;

	t22 = (((x121&x122)+x123)*x124);

	if (t22 != 11557LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x125 = 106LLU;
	int64_t x126 = 1430798805306LL;
	static uint16_t x127 = 14U;
	volatile int8_t x128 = 1;
	static uint64_t t23 = 276972598170185LLU;

	t23 = (((x125&x126)+x127)*x128);

	if (t23 != 56LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x129 = 0;
	uint64_t x130 = UINT64_MAX;
	int64_t x131 = -191820772999292LL;
	int32_t x132 = INT32_MIN;

	t24 = (((x129&x130)+x131)*x132);

	if (t24 != 16178196765197991936LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x141 = 1U;
	volatile uint8_t x143 = 0U;
	volatile int64_t x144 = -53993422LL;
	volatile int64_t t25 = -92213LL;

	t25 = (((x141&x142)+x143)*x144);

	if (t25 != -53993422LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x145 = INT32_MAX;
	uint32_t x146 = 222U;
	uint8_t x147 = 1U;
	int32_t x148 = INT32_MAX;
	uint32_t t26 = 3157508U;

	t26 = (((x145&x146)+x147)*x148);

	if (t26 != 2147483425U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x149 = INT32_MAX;
	int64_t x151 = 263965728382534LL;
	int64_t t27 = 61327155487936272LL;

	t27 = (((x149&x150)+x151)*x152);

	if (t27 != -263965728382789LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x153 = 29227U;
	int16_t x155 = -1;
	uint64_t x156 = 853012413897376098LLU;
	uint64_t t28 = 28889817629LLU;

	t28 = (((x153&x154)+x155)*x156);

	if (t28 != 8589564983109606932LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x162 = 72U;
	int32_t x163 = INT32_MIN;
	static volatile uint32_t x164 = UINT32_MAX;
	uint32_t t29 = 2U;

	t29 = (((x161&x162)+x163)*x164);

	if (t29 != 2147483584U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x165 = -38886;
	int32_t x166 = -1;
	static volatile uint64_t t30 = 2067074961186126208LLU;

	t30 = (((x165&x166)+x167)*x168);

	if (t30 != 18446736787358719925LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x173 = INT16_MIN;
	static volatile uint16_t x174 = UINT16_MAX;
	uint64_t x175 = 288LLU;
	int16_t x176 = -1;
	uint64_t t31 = 3680LLU;

	t31 = (((x173&x174)+x175)*x176);

	if (t31 != 18446744073709518560LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x177 = 127569455LL;
	int32_t x178 = INT32_MIN;
	volatile int64_t t32 = 2526251LL;

	t32 = (((x177&x178)+x179)*x180);

	if (t32 != -464560272LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x181 = -1LL;
	int16_t x183 = -3153;
	uint8_t x184 = 109U;

	t33 = (((x181&x182)+x183)*x184);

	if (t33 != -343786LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x186 = INT64_MIN;
	static volatile int32_t x188 = 52;
	static int64_t t34 = -11084589650LL;

	t34 = (((x185&x186)+x187)*x188);

	if (t34 != -925614383567893188LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x189 = INT32_MIN;
	uint64_t x190 = 12410703425693LLU;
	int64_t x191 = INT64_MIN;
	int8_t x192 = -1;
	volatile uint64_t t35 = 1LLU;

	t35 = (((x189&x190)+x191)*x192);

	if (t35 != 9223359626546774016LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x193 = INT8_MAX;
	int32_t x194 = -492130720;
	int64_t x195 = -1LL;
	volatile int64_t t36 = -16795087681LL;

	t36 = (((x193&x194)+x195)*x196);

	if (t36 != 12065LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x201 = UINT16_MAX;
	volatile uint32_t x202 = 31014U;
	static volatile int16_t x203 = INT16_MIN;
	int8_t x204 = -1;

	t37 = (((x201&x202)+x203)*x204);

	if (t37 != 1754U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x205 = -1;
	volatile int16_t x206 = 11;
	uint8_t x207 = 58U;

	t38 = (((x205&x206)+x207)*x208);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x221 = -1;
	static volatile int32_t x223 = INT32_MIN;
	uint64_t x224 = 12267176LLU;
	uint64_t t39 = 992369936LLU;

	t39 = (((x221&x222)+x223)*x224);

	if (t39 != 28232614488447872LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x230 = -1;
	uint8_t x231 = 44U;
	int16_t x232 = 0;
	static int32_t t40 = 27;

	t40 = (((x229&x230)+x231)*x232);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x237 = INT32_MIN;
	static int32_t x238 = -1;
	int64_t x239 = -1LL;
	int64_t x240 = -1LL;

	t41 = (((x237&x238)+x239)*x240);

	if (t41 != 2147483649LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x241 = -1;
	static int64_t x243 = -77LL;
	volatile int8_t x244 = -1;
	int64_t t42 = 383738524168LL;

	t42 = (((x241&x242)+x243)*x244);

	if (t42 != 205LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x246 = INT64_MAX;
	volatile int32_t x247 = -1;
	static volatile int64_t t43 = -40LL;

	t43 = (((x245&x246)+x247)*x248);

	if (t43 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x249 = INT64_MIN;
	uint8_t x250 = UINT8_MAX;
	static int64_t x251 = -1693929124916333532LL;
	int8_t x252 = -1;
	static int64_t t44 = 1343189401LL;

	t44 = (((x249&x250)+x251)*x252);

	if (t44 != 1693929124916333532LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x257 = INT32_MIN;
	uint16_t x258 = 12U;
	static volatile int16_t x259 = INT16_MAX;
	volatile int16_t x260 = INT16_MAX;

	t45 = (((x257&x258)+x259)*x260);

	if (t45 != 1073676289) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x265 = 160U;
	int16_t x266 = -6;
	static uint8_t x267 = 72U;
	uint64_t x268 = 5837648462028819583LLU;
	volatile uint64_t t46 = 83984888488071228LLU;

	t46 = (((x265&x266)+x267)*x268);

	if (t46 != 7722125809888875288LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x270 = INT32_MIN;
	static uint8_t x272 = 1U;
	int32_t t47 = -842609469;

	t47 = (((x269&x270)+x271)*x272);

	if (t47 != 6) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x273 = 7832519U;
	uint32_t x274 = 222400U;
	static int8_t x275 = INT8_MIN;
	volatile uint32_t t48 = 37846237U;

	t48 = (((x273&x274)+x275)*x276);

	if (t48 != 45582208U) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x280 = 32318U;
	volatile uint32_t t49 = 11201372U;

	t49 = (((x277&x278)+x279)*x280);

	if (t49 != 4294934978U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x281 = 1U;
	uint32_t x282 = 23838U;
	int32_t x283 = -1;
	int8_t x284 = -1;
	uint32_t t50 = 2002U;

	t50 = (((x281&x282)+x283)*x284);

	if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x289 = 84484LLU;
	int8_t x290 = INT8_MIN;
	int64_t x291 = -1LL;
	uint32_t x292 = 983313330U;
	volatile uint64_t t51 = 3388768274938LLU;

	t51 = (((x289&x290)+x291)*x292);

	if (t51 != 83069326805070LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x293 = -1;
	int32_t x295 = -1;
	int64_t x296 = 33126992LL;
	static uint64_t t52 = 32533377064499756LLU;

	t52 = (((x293&x294)+x295)*x296);

	if (t52 != 463777888LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x299 = 53858486020015LL;
	int8_t x300 = 0;
	int64_t t53 = -414695960LL;

	t53 = (((x297&x298)+x299)*x300);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x301 = 5U;
	uint64_t x302 = 6204601673829912950LLU;
	volatile int16_t x303 = INT16_MIN;
	int16_t x304 = INT16_MIN;
	volatile uint64_t t54 = 44LLU;

	t54 = (((x301&x302)+x303)*x304);

	if (t54 != 1073610752LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x305 = INT64_MIN;
	static volatile uint8_t x306 = 0U;
	int16_t x308 = -1;
	static volatile int64_t t55 = -72747729029109LL;

	t55 = (((x305&x306)+x307)*x308);

	if (t55 != -485599LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x310 = -1;
	int64_t x311 = 0LL;
	uint64_t x312 = UINT64_MAX;
	uint64_t t56 = 37763529397836761LLU;

	t56 = (((x309&x310)+x311)*x312);

	if (t56 != 32768LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x315 = INT64_MAX;
	volatile uint64_t t57 = 46729148753420204LLU;

	t57 = (((x313&x314)+x315)*x316);

	if (t57 != 18446744073699329140LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x318 = -328090605;
	volatile int16_t x319 = INT16_MIN;
	static uint64_t x320 = 2357LLU;

	t58 = (((x317&x318)+x319)*x320);

	if (t58 != 18446743300322716672LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x321 = -1LL;
	uint64_t x322 = 866779276LLU;
	int8_t x323 = 0;
	volatile uint64_t t59 = 120LLU;

	t59 = (((x321&x322)+x323)*x324);

	if (t59 != 1861394320768499572LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x325 = 15U;
	uint16_t x326 = 2567U;
	int16_t x327 = INT16_MAX;
	static volatile int16_t x328 = INT16_MIN;
	volatile int32_t t60 = -148;

	t60 = (((x325&x326)+x327)*x328);

	if (t60 != -1073938432) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x333 = INT8_MIN;
	int64_t x334 = 363943655325LL;
	int32_t x335 = 121744;
	int8_t x336 = INT8_MAX;
	int64_t t61 = -8025795372759688LL;

	t61 = (((x333&x334)+x335)*x336);

	if (t61 != 46220859684080LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x337 = INT16_MIN;
	volatile int32_t x338 = INT32_MIN;
	int64_t x339 = -7LL;
	uint8_t x340 = 2U;
	static volatile int64_t t62 = -60876057816857LL;

	t62 = (((x337&x338)+x339)*x340);

	if (t62 != -4294967310LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x345 = 126500LLU;
	static uint64_t x346 = 946LLU;
	uint8_t x347 = 24U;
	int32_t x348 = -1;

	t63 = (((x345&x346)+x347)*x348);

	if (t63 != 18446744073709551048LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x353 = 102;
	uint16_t x354 = 5U;
	int16_t x355 = INT16_MAX;
	static volatile int8_t x356 = INT8_MIN;
	int32_t t64 = 222415;

	t64 = (((x353&x354)+x355)*x356);

	if (t64 != -4194688) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x357 = -13429;
	int8_t x358 = INT8_MIN;
	uint64_t x359 = UINT64_MAX;
	static uint8_t x360 = 4U;
	volatile uint64_t t65 = 7255673495LLU;

	t65 = (((x357&x358)+x359)*x360);

	if (t65 != 18446744073709497852LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x361 = INT32_MIN;
	volatile uint8_t x362 = 10U;
	uint8_t x363 = 63U;
	volatile uint32_t t66 = 834U;

	t66 = (((x361&x362)+x363)*x364);

	if (t66 != 4294967233U) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x366 = INT8_MAX;
	int8_t x367 = 41;
	static int8_t x368 = -7;

	t67 = (((x365&x366)+x367)*x368);

	if (t67 != -399LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x373 = -6;
	int64_t x374 = -1LL;
	static uint16_t x376 = UINT16_MAX;

	t68 = (((x373&x374)+x375)*x376);

	if (t68 != -386394360LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x378 = INT16_MAX;
	static volatile int16_t x379 = INT16_MIN;
	uint16_t x380 = 0U;
	volatile uint32_t t69 = 1105397U;

	t69 = (((x377&x378)+x379)*x380);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x385 = INT32_MIN;
	uint8_t x386 = UINT8_MAX;
	volatile uint16_t x388 = 11985U;

	t70 = (((x385&x386)+x387)*x388);

	if (t70 != 18446744073709539631LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x389 = 5U;
	volatile int32_t x390 = INT32_MAX;
	int64_t x391 = 1630998076LL;

	t71 = (((x389&x390)+x391)*x392);

	if (t71 != -1630998081LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x397 = 2U;
	static uint32_t x398 = 2556U;
	volatile int16_t x399 = 89;
	uint32_t x400 = UINT32_MAX;

	t72 = (((x397&x398)+x399)*x400);

	if (t72 != 4294967207U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x401 = -7144687223LL;
	volatile int32_t x402 = -421938644;
	static uint8_t x403 = UINT8_MAX;
	static int16_t x404 = INT16_MIN;

	t73 = (((x401&x402)+x403)*x404);

	if (t73 != 242990517616640LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x405 = 6407;
	int64_t x407 = -1LL;
	int32_t x408 = INT32_MIN;
	int64_t t74 = -1580776141LL;

	t74 = (((x405&x406)+x407)*x408);

	if (t74 != 2147483648LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x409 = 5756410U;
	int8_t x411 = -20;
	volatile uint16_t x412 = 23U;
	static volatile uint32_t t75 = 94U;

	t75 = (((x409&x410)+x411)*x412);

	if (t75 != 276U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x414 = 6;
	int8_t x415 = INT8_MAX;
	uint16_t x416 = 170U;

	t76 = (((x413&x414)+x415)*x416);

	if (t76 != 21930LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x417 = INT64_MIN;
	int8_t x418 = INT8_MAX;
	uint8_t x419 = 54U;
	int64_t x420 = -1LL;

	t77 = (((x417&x418)+x419)*x420);

	if (t77 != -54LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x425 = INT8_MIN;
	uint64_t x426 = 679187884581311517LLU;
	volatile uint8_t x427 = 11U;
	static int16_t x428 = INT16_MIN;

	t78 = (((x425&x426)+x427)*x428);

	if (t78 != 9591495007013601280LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x429 = INT64_MIN;
	int8_t x430 = INT8_MAX;
	int16_t x431 = -142;
	uint16_t x432 = UINT16_MAX;
	int64_t t79 = 546LL;

	t79 = (((x429&x430)+x431)*x432);

	if (t79 != -9305970LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x437 = -1773247LL;
	int16_t x438 = -1;
	int32_t x440 = INT32_MAX;
	volatile int64_t t80 = 1183852756034LL;

	t80 = (((x437&x438)+x439)*x440);

	if (t80 != -3878387678736705LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x441 = 2;
	static uint64_t x442 = UINT64_MAX;
	uint8_t x443 = 40U;
	static uint64_t t81 = 1005832858478598289LLU;

	t81 = (((x441&x442)+x443)*x444);

	if (t81 != 18446744073708175360LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x445 = 1103568912783540293LLU;
	int8_t x446 = -25;
	int64_t x448 = 15566466741131648LL;
	volatile uint64_t t82 = 11915114546003LLU;

	t82 = (((x445&x446)+x447)*x448);

	if (t82 != 5163825866113009152LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x450 = INT8_MAX;
	volatile int64_t x451 = 2436429LL;
	static uint32_t x452 = 867U;

	t83 = (((x449&x450)+x451)*x452);

	if (t83 != 2112494052LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x453 = UINT32_MAX;
	int64_t x454 = 35005427484730987LL;
	int8_t x455 = -1;
	int64_t x456 = -1LL;
	volatile int64_t t84 = 111605828689219LL;

	t84 = (((x453&x454)+x455)*x456);

	if (t84 != -913319530LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x457 = -1;
	volatile uint64_t x458 = 584526LLU;
	static uint16_t x459 = 240U;
	static uint32_t x460 = UINT32_MAX;
	uint64_t t85 = 2600LLU;

	t85 = (((x457&x458)+x459)*x460);

	if (t85 != 2511550845227970LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x462 = 7U;
	volatile uint64_t x464 = 419LLU;
	uint64_t t86 = 550331889406992LLU;

	t86 = (((x461&x462)+x463)*x464);

	if (t86 != 9223372036854778741LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x468 = INT8_MIN;

	t87 = (((x465&x466)+x467)*x468);

	if (t87 != -33690624LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x469 = 1U;
	static int8_t x470 = INT8_MIN;
	static int16_t x471 = INT16_MAX;
	uint64_t x472 = 200264079LLU;
	uint64_t t88 = 96865932178LLU;

	t88 = (((x469&x470)+x471)*x472);

	if (t88 != 6562053076593LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x473 = INT64_MIN;
	static uint16_t x474 = 244U;
	uint8_t x475 = 3U;
	volatile int32_t x476 = INT32_MIN;
	volatile int64_t t89 = 1809701841391224854LL;

	t89 = (((x473&x474)+x475)*x476);

	if (t89 != -6442450944LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x478 = -1LL;
	int8_t x479 = INT8_MIN;
	uint16_t x480 = 0U;
	volatile int64_t t90 = 608542901LL;

	t90 = (((x477&x478)+x479)*x480);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x487 = -1;
	int8_t x488 = INT8_MIN;
	volatile int32_t t91 = 0;

	t91 = (((x485&x486)+x487)*x488);

	if (t91 != 256) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x489 = INT8_MIN;
	uint64_t x491 = 7304804975660LLU;
	uint64_t t92 = 1005749497322039584LLU;

	t92 = (((x489&x490)+x491)*x492);

	if (t92 != 3674541690309443148LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x494 = 4621;
	static int32_t x495 = INT32_MIN;
	uint32_t t93 = 1470653188U;

	t93 = (((x493&x494)+x495)*x496);

	if (t93 != 2147483648U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x497 = UINT8_MAX;
	int64_t x498 = INT64_MIN;
	int32_t x499 = 438;
	volatile int64_t x500 = 10108134858LL;
	volatile int64_t t94 = 14641595LL;

	t94 = (((x497&x498)+x499)*x500);

	if (t94 != 4427363067804LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x501 = INT8_MIN;
	static uint16_t x502 = 30U;
	static int64_t x503 = -1837352509LL;
	uint16_t x504 = UINT16_MAX;

	t95 = (((x501&x502)+x503)*x504);

	if (t95 != -120410896677315LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x505 = 22439LLU;
	int64_t x506 = INT64_MIN;
	int64_t x507 = -46229844802914350LL;
	volatile int32_t x508 = 44;
	uint64_t t96 = 1571860657LLU;

	t96 = (((x505&x506)+x507)*x508);

	if (t96 != 16412630902381320216LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x509 = -103379082336482LL;
	int32_t x510 = INT32_MIN;
	int16_t x511 = INT16_MIN;
	int8_t x512 = INT8_MAX;
	static int64_t t97 = -553LL;

	t97 = (((x509&x510)+x511)*x512);

	if (t97 != -13129242581630976LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x517 = 12269823660943LLU;
	uint16_t x520 = UINT16_MAX;
	uint64_t t98 = 7492008LLU;

	t98 = (((x517&x518)+x519)*x520);

	if (t98 != 804102893287571520LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x521 = INT16_MIN;
	int32_t x523 = INT32_MAX;
	volatile int64_t t99 = 54498717102748LL;

	t99 = (((x521&x522)+x523)*x524);

	if (t99 != 1LL) { NG(); } else { ; }
	
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

