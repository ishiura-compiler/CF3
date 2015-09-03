#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x4 = 0U;
uint16_t x6 = 783U;
volatile uint8_t x11 = 80U;
static int64_t x12 = 5321873108612759LL;
static uint64_t x17 = UINT64_MAX;
uint16_t x20 = 1U;
uint64_t t3 = 405534LLU;
static int16_t x25 = INT16_MAX;
uint64_t x31 = 35LLU;
int16_t x43 = -1;
int8_t x53 = INT8_MIN;
static uint64_t x65 = 4102658LLU;
int64_t x66 = 12714432879856LL;
volatile int8_t x67 = 35;
uint64_t t11 = 235955LLU;
int64_t x73 = -78067382242011650LL;
static int32_t x74 = -29345;
static volatile int64_t t12 = -2175162980773522692LL;
uint32_t t13 = 0U;
int64_t x88 = INT64_MIN;
uint64_t x98 = UINT64_MAX;
volatile uint64_t t17 = 159597578708227LLU;
int16_t x105 = -1;
int16_t x106 = INT16_MIN;
static int32_t x109 = INT32_MIN;
volatile int32_t x110 = INT32_MIN;
uint16_t x136 = 43U;
uint64_t x138 = 42049567375LLU;
volatile uint64_t x139 = 45990984LLU;
int64_t x140 = INT64_MIN;
int16_t x142 = -10;
volatile uint64_t t25 = 1LLU;
uint32_t x169 = 131889U;
volatile uint32_t x171 = 349U;
int64_t x173 = 264969113794501LL;
static int16_t x178 = 1;
static volatile int8_t x187 = INT8_MIN;
int64_t x199 = -24699258234LL;
volatile int32_t x200 = -1;
static int32_t t34 = 27;
int8_t x226 = INT8_MAX;
volatile int8_t x229 = INT8_MAX;
uint64_t x230 = UINT64_MAX;
static uint16_t x236 = 0U;
volatile int32_t t38 = -6901776;
int8_t x239 = -1;
uint8_t x241 = 6U;
volatile int32_t t41 = 71735;
int8_t x270 = -1;
int8_t x271 = -1;
int8_t x272 = INT8_MIN;
volatile uint8_t x286 = 60U;
volatile int16_t x292 = -1;
int16_t x297 = INT16_MAX;
int64_t x298 = INT64_MIN;
volatile uint64_t x300 = 6282004912486036LLU;
static uint8_t x303 = 1U;
static uint64_t x304 = 8763161675599359LLU;
int64_t x313 = INT64_MIN;
volatile int32_t t51 = -907789;
uint32_t x328 = UINT32_MAX;
int32_t x330 = 15428;
volatile int64_t t54 = -23226468703587LL;
uint16_t x335 = 13220U;
volatile int32_t t55 = -862232282;
volatile int64_t t56 = 631206LL;
int8_t x348 = 21;
volatile uint64_t t60 = 18278763410LLU;
int64_t x361 = INT64_MIN;
int64_t x362 = -338380388334395002LL;
uint32_t x363 = UINT32_MAX;
int64_t t61 = 241114562381LL;
int64_t x366 = INT64_MAX;
int64_t t62 = -21LL;
int8_t x372 = INT8_MIN;
int16_t x377 = INT16_MIN;
static volatile int64_t x389 = INT64_MAX;
uint64_t t66 = 3073623LLU;
static uint32_t t67 = 57U;
int32_t x406 = INT32_MIN;
static uint64_t t71 = 53942LLU;
int32_t t72 = -1;
int8_t x439 = INT8_MIN;
int32_t x450 = 1354412;
uint16_t x452 = UINT16_MAX;
int32_t t75 = 55;
uint8_t x459 = 41U;
static int16_t x460 = -42;
int16_t x464 = INT16_MIN;
static volatile int64_t t79 = -1418LL;
int64_t x474 = INT64_MAX;
volatile int64_t x479 = -1LL;
uint64_t t81 = 27308272210433446LLU;
int32_t x482 = INT32_MIN;
int16_t x483 = INT16_MIN;
uint64_t t84 = 1355LLU;
int16_t x493 = INT16_MIN;
int16_t x494 = 0;
uint32_t x507 = UINT32_MAX;
uint64_t x537 = 66797969229LLU;
int64_t x540 = INT64_MAX;
static uint64_t t93 = 191418120321LLU;
volatile uint64_t t94 = 491953964LLU;
int8_t x547 = INT8_MIN;
int16_t x556 = -4168;
uint16_t x558 = 98U;
uint32_t x560 = UINT32_MAX;
volatile uint64_t t97 = 767492907375160LLU;
int64_t x562 = INT64_MIN;
static uint32_t x568 = UINT32_MAX;


void f0(void) {
	int16_t x1 = INT16_MAX;
	volatile int32_t x2 = -53430561;
	uint64_t x3 = 15088764LLU;
	volatile uint64_t t0 = 454LLU;

	t0 = ((x1^x2)-(x3*x4));

	if (t0 != 18446744073656125728LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 6U;
	int64_t x7 = 25735LL;
	uint32_t x8 = UINT32_MAX;
	int64_t t1 = 1794147311169LL;

	t1 = ((x5^x6)-(x7*x8));

	if (t1 != -110530983336048LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int64_t x10 = INT64_MAX;
	int64_t t2 = -41488108247LL;

	t2 = ((x9^x10)-(x11*x12));

	if (t2 != -425749848689020721LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x18 = -279912129422LL;
	int8_t x19 = INT8_MIN;

	t3 = ((x17^x18)-(x19*x20));

	if (t3 != 279912129549LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x26 = UINT8_MAX;
	volatile int16_t x27 = -10;
	int8_t x28 = -1;
	static int32_t t4 = -6954599;

	t4 = ((x25^x26)-(x27*x28));

	if (t4 != 32502) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x29 = UINT32_MAX;
	int16_t x30 = INT16_MIN;
	int16_t x32 = INT16_MIN;
	uint64_t t5 = 3741LLU;

	t5 = ((x29^x30)-(x31*x32));

	if (t5 != 1179647LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = 83006LL;
	int8_t x34 = 23;
	static int32_t x35 = -1;
	int8_t x36 = -29;
	volatile int64_t t6 = 14599LL;

	t6 = ((x33^x34)-(x35*x36));

	if (t6 != 82956LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x41 = 481U;
	int16_t x42 = -255;
	int16_t x44 = -1;
	volatile int32_t t7 = 392215;

	t7 = ((x41^x42)-(x43*x44));

	if (t7 != -289) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x49 = -204095869101805LL;
	static int8_t x50 = INT8_MIN;
	volatile int32_t x51 = -1;
	int64_t x52 = -136759567LL;
	volatile int64_t t8 = 38131672509975LL;

	t8 = ((x49^x50)-(x51*x52));

	if (t8 != 204095732342148LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x54 = 313442746965LL;
	volatile int8_t x55 = INT8_MAX;
	int8_t x56 = INT8_MIN;
	static volatile int64_t t9 = 1196229472525565LL;

	t9 = ((x53^x54)-(x55*x56));

	if (t9 != -313442730667LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x57 = 25U;
	uint32_t x58 = 5461U;
	int16_t x59 = 5;
	int64_t x60 = -1LL;
	int64_t t10 = 168329102044LL;

	t10 = ((x57^x58)-(x59*x60));

	if (t10 != 5457LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x68 = 3U;

	t11 = ((x65^x66)-(x67*x68));

	if (t11 != 12714436970121LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x75 = UINT8_MAX;
	int32_t x76 = 191571;

	t12 = ((x73^x74)-(x75*x76));

	if (t12 != 78067382193140212LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x77 = 388U;
	uint8_t x78 = 65U;
	int32_t x79 = -290420167;
	int32_t x80 = -1;

	t13 = ((x77^x78)-(x79*x80));

	if (t13 != 4004547582U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x81 = UINT16_MAX;
	static uint16_t x82 = 39U;
	int8_t x83 = INT8_MIN;
	int8_t x84 = INT8_MAX;
	volatile int32_t t14 = -120526;

	t14 = ((x81^x82)-(x83*x84));

	if (t14 != 81752) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x85 = 1U;
	int16_t x86 = 47;
	int8_t x87 = 0;
	volatile int64_t t15 = 236LL;

	t15 = ((x85^x86)-(x87*x88));

	if (t15 != 46LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x93 = INT64_MIN;
	int32_t x94 = 26802;
	int64_t x95 = INT64_MAX;
	int8_t x96 = -1;
	volatile int64_t t16 = -50152938032674601LL;

	t16 = ((x93^x94)-(x95*x96));

	if (t16 != 26801LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x97 = -1;
	int64_t x99 = 348004674LL;
	static int32_t x100 = -6;

	t17 = ((x97^x98)-(x99*x100));

	if (t17 != 2088028044LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x101 = UINT64_MAX;
	uint8_t x102 = UINT8_MAX;
	static int8_t x103 = 0;
	static uint16_t x104 = 20U;
	volatile uint64_t t18 = 469879LLU;

	t18 = ((x101^x102)-(x103*x104));

	if (t18 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x107 = -13783414827LL;
	uint8_t x108 = 23U;
	volatile int64_t t19 = 1LL;

	t19 = ((x105^x106)-(x107*x108));

	if (t19 != 317018573788LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x111 = -1;
	uint8_t x112 = 0U;
	static int32_t t20 = 320592324;

	t20 = ((x109^x110)-(x111*x112));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x133 = -1;
	static int16_t x134 = INT16_MAX;
	static volatile uint32_t x135 = UINT32_MAX;
	uint32_t t21 = 32555U;

	t21 = ((x133^x134)-(x135*x136));

	if (t21 != 4294934571U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x137 = INT16_MIN;
	uint64_t t22 = 96415LLU;

	t22 = ((x137^x138)-(x139*x140));

	if (t22 != 18446744031660014223LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x141 = 8937U;
	int8_t x143 = -56;
	int64_t x144 = -1LL;
	volatile int64_t t23 = -26212924804007367LL;

	t23 = ((x141^x142)-(x143*x144));

	if (t23 != 4294958311LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x153 = 30;
	int32_t x154 = -328668653;
	static int8_t x155 = -4;
	static uint64_t x156 = UINT64_MAX;
	uint64_t t24 = 231073205629LLU;

	t24 = ((x153^x154)-(x155*x156));

	if (t24 != 18446744073380882953LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x157 = 9988124852403LLU;
	static volatile uint64_t x158 = UINT64_MAX;
	int8_t x159 = -1;
	volatile int32_t x160 = 254224;

	t25 = ((x157^x158)-(x159*x160));

	if (t25 != 18446734085584953436LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x165 = -1;
	static int8_t x166 = -1;
	volatile uint8_t x167 = UINT8_MAX;
	uint8_t x168 = 0U;
	int32_t t26 = -241343993;

	t26 = ((x165^x166)-(x167*x168));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x170 = INT8_MAX;
	int8_t x172 = 2;
	volatile uint32_t t27 = 2266264U;

	t27 = ((x169^x170)-(x171*x172));

	if (t27 != 131220U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x174 = -1;
	uint8_t x175 = UINT8_MAX;
	int8_t x176 = INT8_MIN;
	volatile int64_t t28 = 2110LL;

	t28 = ((x173^x174)-(x175*x176));

	if (t28 != -264969113761862LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x177 = UINT8_MAX;
	uint8_t x179 = 28U;
	int64_t x180 = -1LL;
	int64_t t29 = -130749130117064739LL;

	t29 = ((x177^x178)-(x179*x180));

	if (t29 != 282LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x185 = UINT32_MAX;
	uint64_t x186 = 44LLU;
	int8_t x188 = INT8_MAX;
	volatile uint64_t t30 = 996158009339060LLU;

	t30 = ((x185^x186)-(x187*x188));

	if (t30 != 4294983507LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x193 = INT8_MAX;
	uint8_t x194 = UINT8_MAX;
	static uint64_t x195 = UINT64_MAX;
	int16_t x196 = INT16_MIN;
	volatile uint64_t t31 = 309880352480LLU;

	t31 = ((x193^x194)-(x195*x196));

	if (t31 != 18446744073709518976LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x197 = 95948328135LLU;
	static uint8_t x198 = 35U;
	volatile uint64_t t32 = 31019372572148090LLU;

	t32 = ((x197^x198)-(x199*x200));

	if (t32 != 71249069930LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x201 = INT16_MAX;
	int32_t x202 = INT32_MIN;
	int32_t x203 = -1;
	int32_t x204 = INT32_MAX;
	int32_t t33 = 10776;

	t33 = ((x201^x202)-(x203*x204));

	if (t33 != 32766) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x205 = INT32_MIN;
	int32_t x206 = INT32_MAX;
	int16_t x207 = INT16_MAX;
	int16_t x208 = INT16_MIN;

	t34 = ((x205^x206)-(x207*x208));

	if (t34 != 1073709055) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x209 = UINT64_MAX;
	uint32_t x210 = UINT32_MAX;
	int16_t x211 = INT16_MAX;
	uint8_t x212 = 1U;
	volatile uint64_t t35 = 199797LLU;

	t35 = ((x209^x210)-(x211*x212));

	if (t35 != 18446744069414551553LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x225 = 75U;
	uint64_t x227 = 15496724LLU;
	uint16_t x228 = 3427U;
	uint64_t t36 = 1623087866149731LLU;

	t36 = ((x225^x226)-(x227*x228));

	if (t36 != 18446744020602278520LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x231 = -1;
	volatile int8_t x232 = -1;
	static volatile uint64_t t37 = 2313LLU;

	t37 = ((x229^x230)-(x231*x232));

	if (t37 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint16_t x233 = 1042U;
	int16_t x234 = -7;
	volatile uint8_t x235 = 13U;

	t38 = ((x233^x234)-(x235*x236));

	if (t38 != -1045) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x237 = 8U;
	int32_t x238 = -62148;
	static int64_t x240 = -1LL;
	int64_t t39 = -15077LL;

	t39 = ((x237^x238)-(x239*x240));

	if (t39 != -62157LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x242 = INT8_MIN;
	int8_t x243 = INT8_MIN;
	int32_t x244 = -1;
	int32_t t40 = -12595;

	t40 = ((x241^x242)-(x243*x244));

	if (t40 != -250) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x249 = 101356592;
	int16_t x250 = INT16_MIN;
	volatile int8_t x251 = INT8_MIN;
	int8_t x252 = INT8_MIN;

	t41 = ((x249^x250)-(x251*x252));

	if (t41 != -101395408) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x265 = -1;
	int8_t x266 = INT8_MIN;
	static uint16_t x267 = UINT16_MAX;
	uint16_t x268 = 1U;
	static int32_t t42 = 778;

	t42 = ((x265^x266)-(x267*x268));

	if (t42 != -65408) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x269 = 18;
	volatile int32_t t43 = -340;

	t43 = ((x269^x270)-(x271*x272));

	if (t43 != -147) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x273 = -1;
	volatile int64_t x274 = -1LL;
	uint16_t x275 = 30U;
	uint64_t x276 = 2217671282LLU;
	volatile uint64_t t44 = 155994646833LLU;

	t44 = ((x273^x274)-(x275*x276));

	if (t44 != 18446744007179413156LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x285 = INT64_MAX;
	static volatile uint8_t x287 = UINT8_MAX;
	uint64_t x288 = 1768343715827754808LLU;
	static uint64_t t45 = 3181LLU;

	t45 = ((x285^x286)-(x287*x288));

	if (t45 != 1017582269806538491LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x289 = 406871920314LL;
	int16_t x290 = INT16_MIN;
	int8_t x291 = INT8_MIN;
	volatile int64_t t46 = 1018740757LL;

	t46 = ((x289^x290)-(x291*x292));

	if (t46 != -406871912902LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x299 = INT8_MIN;
	uint64_t t47 = 6335677LLU;

	t47 = ((x297^x298)-(x299*x300));

	if (t47 != 10027468665653021183LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x301 = INT32_MIN;
	volatile uint32_t x302 = 23976137U;
	uint64_t t48 = 3837742LLU;

	t48 = ((x301^x302)-(x303*x304));

	if (t48 != 18437980914205412042LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x305 = -11LL;
	static uint64_t x306 = 58023919LLU;
	volatile int32_t x307 = -1;
	static volatile int8_t x308 = 0;
	volatile uint64_t t49 = 5449734074LLU;

	t49 = ((x305^x306)-(x307*x308));

	if (t49 != 18446744073651527706LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x314 = 197725910719LLU;
	static int64_t x315 = -1LL;
	uint8_t x316 = 3U;
	uint64_t t50 = 90LLU;

	t50 = ((x313^x314)-(x315*x316));

	if (t50 != 9223372234580686530LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x317 = 89;
	uint8_t x318 = 1U;
	int16_t x319 = INT16_MIN;
	int8_t x320 = 1;

	t51 = ((x317^x318)-(x319*x320));

	if (t51 != 32856) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x321 = UINT8_MAX;
	volatile uint16_t x322 = UINT16_MAX;
	int8_t x323 = 41;
	static int16_t x324 = INT16_MIN;
	static volatile int32_t t52 = -1753;

	t52 = ((x321^x322)-(x323*x324));

	if (t52 != 1408768) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x325 = 5;
	int32_t x326 = 1365624;
	volatile int16_t x327 = INT16_MAX;
	static volatile uint32_t t53 = 2985127U;

	t53 = ((x325^x326)-(x327*x328));

	if (t53 != 1398396U) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x329 = -1;
	int32_t x331 = 733010563;
	int64_t x332 = -126LL;

	t54 = ((x329^x330)-(x331*x332));

	if (t54 != 92359315509LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x333 = UINT16_MAX;
	int16_t x334 = INT16_MAX;
	volatile int16_t x336 = -16266;

	t55 = ((x333^x334)-(x335*x336));

	if (t55 != 215069288) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x337 = INT32_MAX;
	int32_t x338 = 4744268;
	uint16_t x339 = 1978U;
	volatile int64_t x340 = -1LL;

	t56 = ((x337^x338)-(x339*x340));

	if (t56 != 2142741357LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x341 = UINT8_MAX;
	uint64_t x342 = 45LLU;
	int16_t x343 = -1;
	uint64_t x344 = UINT64_MAX;
	uint64_t t57 = 10897094243227LLU;

	t57 = ((x341^x342)-(x343*x344));

	if (t57 != 209LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x345 = -1LL;
	volatile int64_t x346 = INT64_MAX;
	int64_t x347 = -1LL;
	static int64_t t58 = 1104009916165165LL;

	t58 = ((x345^x346)-(x347*x348));

	if (t58 != -9223372036854775787LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x349 = INT8_MAX;
	volatile int8_t x350 = INT8_MIN;
	int64_t x351 = INT64_MIN;
	uint64_t x352 = UINT64_MAX;
	static uint64_t t59 = 31631LLU;

	t59 = ((x349^x350)-(x351*x352));

	if (t59 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x353 = INT16_MIN;
	uint64_t x354 = 44016762516244LLU;
	int64_t x355 = -1LL;
	static volatile int32_t x356 = 0;

	t60 = ((x353^x354)-(x355*x356));

	if (t60 != 18446700056947061524LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x364 = 1278245U;

	t61 = ((x361^x362)-(x363*x364));

	if (t61 != 8884991644226691755LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x365 = INT8_MIN;
	static int8_t x367 = 18;
	int16_t x368 = -1;

	t62 = ((x365^x366)-(x367*x368));

	if (t62 != -9223372036854775663LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x369 = 15U;
	int32_t x370 = -10;
	uint8_t x371 = 9U;
	volatile int32_t t63 = -29784;

	t63 = ((x369^x370)-(x371*x372));

	if (t63 != 1145) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x373 = -1;
	uint32_t x374 = UINT32_MAX;
	int8_t x375 = INT8_MIN;
	int16_t x376 = -1;
	uint32_t t64 = 5968U;

	t64 = ((x373^x374)-(x375*x376));

	if (t64 != 4294967168U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x378 = -35881;
	int64_t x379 = -1LL;
	static int16_t x380 = -211;
	volatile int64_t t65 = -1520541943283LL;

	t65 = ((x377^x378)-(x379*x380));

	if (t65 != 62212LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x390 = 1;
	int32_t x391 = INT32_MAX;
	uint64_t x392 = 1045304LLU;

	t66 = ((x389^x390)-(x391*x392));

	if (t66 != 9221127263608632118LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x397 = 2286U;
	static volatile int32_t x398 = -1;
	uint32_t x399 = UINT32_MAX;
	uint32_t x400 = UINT32_MAX;

	t67 = ((x397^x398)-(x399*x400));

	if (t67 != 4294965008U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x405 = UINT32_MAX;
	int16_t x407 = INT16_MAX;
	uint32_t x408 = 1620644U;
	volatile uint32_t t68 = 5U;

	t68 = ((x405^x406)-(x407*x408));

	if (t68 != 583449251U) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x409 = INT16_MIN;
	uint16_t x410 = 19U;
	uint16_t x411 = 1211U;
	volatile int8_t x412 = 10;
	int32_t t69 = 248;

	t69 = ((x409^x410)-(x411*x412));

	if (t69 != -44859) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x417 = 6U;
	static int16_t x418 = -294;
	int8_t x419 = INT8_MIN;
	uint32_t x420 = 3473417U;
	uint32_t t70 = 1U;

	t70 = ((x417^x418)-(x419*x420));

	if (t70 != 444597084U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x421 = 3U;
	volatile uint64_t x422 = 6LLU;
	volatile uint64_t x423 = UINT64_MAX;
	volatile uint32_t x424 = 27U;

	t71 = ((x421^x422)-(x423*x424));

	if (t71 != 32LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x425 = -1;
	volatile int16_t x426 = 11;
	static int8_t x427 = -1;
	int8_t x428 = INT8_MAX;

	t72 = ((x425^x426)-(x427*x428));

	if (t72 != 115) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x433 = 1;
	int16_t x434 = INT16_MIN;
	uint32_t x435 = UINT32_MAX;
	static uint8_t x436 = 7U;
	uint32_t t73 = 24U;

	t73 = ((x433^x434)-(x435*x436));

	if (t73 != 4294934536U) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x437 = INT64_MIN;
	static int32_t x438 = INT32_MAX;
	static volatile int8_t x440 = INT8_MAX;
	volatile int64_t t74 = -3563930LL;

	t74 = ((x437^x438)-(x439*x440));

	if (t74 != -9223372034707275905LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x449 = 2;
	volatile uint8_t x451 = 43U;

	t75 = ((x449^x450)-(x451*x452));

	if (t75 != -1463591) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x457 = INT8_MAX;
	int8_t x458 = -1;
	static volatile int32_t t76 = -12;

	t76 = ((x457^x458)-(x459*x460));

	if (t76 != 1594) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x461 = INT16_MIN;
	static int8_t x462 = -1;
	static uint32_t x463 = 469U;
	static uint32_t t77 = 1067222484U;

	t77 = ((x461^x462)-(x463*x464));

	if (t77 != 15400959U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x465 = INT16_MAX;
	uint8_t x466 = 0U;
	uint8_t x467 = 31U;
	volatile uint32_t x468 = UINT32_MAX;
	uint32_t t78 = 63U;

	t78 = ((x465^x466)-(x467*x468));

	if (t78 != 32798U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x469 = -1;
	volatile uint32_t x470 = 1276U;
	int32_t x471 = INT32_MIN;
	volatile int64_t x472 = -1LL;

	t79 = ((x469^x470)-(x471*x472));

	if (t79 != 2147482371LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x473 = 26677375935474261LLU;
	int16_t x475 = 254;
	static volatile uint16_t x476 = 684U;
	volatile uint64_t t80 = 118935194225460LLU;

	t80 = ((x473^x474)-(x475*x476));

	if (t80 != 9196694660919127810LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x477 = UINT16_MAX;
	uint64_t x478 = UINT64_MAX;
	uint8_t x480 = 8U;

	t81 = ((x477^x478)-(x479*x480));

	if (t81 != 18446744073709486088LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x481 = UINT32_MAX;
	static uint64_t x484 = 3314716432987119LLU;
	uint64_t t82 = 7873305082164LLU;

	t82 = ((x481^x482)-(x483*x484));

	if (t82 != 16382907709721640959LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x485 = INT16_MIN;
	static int16_t x486 = -21;
	int64_t x487 = -1LL;
	uint16_t x488 = UINT16_MAX;
	volatile int64_t t83 = 428726229111582LL;

	t83 = ((x485^x486)-(x487*x488));

	if (t83 != 98282LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x489 = UINT64_MAX;
	int8_t x490 = -1;
	int16_t x491 = -66;
	uint8_t x492 = 42U;

	t84 = ((x489^x490)-(x491*x492));

	if (t84 != 2772LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x495 = -1;
	int8_t x496 = -1;
	static volatile int32_t t85 = 10;

	t85 = ((x493^x494)-(x495*x496));

	if (t85 != -32769) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x497 = INT16_MIN;
	uint8_t x498 = 5U;
	uint8_t x499 = UINT8_MAX;
	uint64_t x500 = 1344367839185792454LLU;
	volatile uint64_t t86 = 0LLU;

	t86 = ((x497^x498)-(x499*x500));

	if (t86 != 7674338408104372171LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x505 = -1;
	uint64_t x506 = 814245377070LLU;
	int8_t x508 = INT8_MIN;
	static uint64_t t87 = 6011141557283LLU;

	t87 = ((x505^x506)-(x507*x508));

	if (t87 != 18446743259464174417LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x509 = INT64_MAX;
	int16_t x510 = 1;
	int16_t x511 = -1;
	int8_t x512 = -1;
	volatile int64_t t88 = -678LL;

	t88 = ((x509^x510)-(x511*x512));

	if (t88 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x513 = -1;
	int64_t x514 = INT64_MIN;
	static uint32_t x515 = 78276681U;
	volatile int8_t x516 = -49;
	volatile int64_t t89 = 99LL;

	t89 = ((x513^x514)-(x515*x516));

	if (t89 != 9223372036395365880LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x521 = 12669U;
	uint8_t x522 = 34U;
	int16_t x523 = 12058;
	int32_t x524 = 256;
	volatile int32_t t90 = 345015385;

	t90 = ((x521^x522)-(x523*x524));

	if (t90 != -3074209) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x525 = 2;
	int32_t x526 = -1;
	int16_t x527 = -1;
	static int8_t x528 = INT8_MAX;
	volatile int32_t t91 = -30687555;

	t91 = ((x525^x526)-(x527*x528));

	if (t91 != 124) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x529 = INT16_MAX;
	volatile int8_t x530 = INT8_MIN;
	int8_t x531 = INT8_MIN;
	int16_t x532 = -1;
	volatile int32_t t92 = -62453;

	t92 = ((x529^x530)-(x531*x532));

	if (t92 != -32769) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x538 = INT32_MAX;
	static int8_t x539 = -1;

	t93 = ((x537^x538)-(x539*x540));

	if (t93 != 9223372105348276401LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x541 = INT16_MIN;
	uint16_t x542 = 145U;
	int32_t x543 = 687839886;
	uint64_t x544 = 50LLU;

	t94 = ((x541^x542)-(x543*x544));

	if (t94 != 18446744039317524693LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x545 = 7798U;
	static uint64_t x546 = 2152649LLU;
	int16_t x548 = -22;
	volatile uint64_t t95 = 426LLU;

	t95 = ((x545^x546)-(x547*x548));

	if (t95 != 2145215LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x553 = INT8_MIN;
	volatile uint16_t x554 = UINT16_MAX;
	static uint16_t x555 = 2U;
	int32_t t96 = 606814;

	t96 = ((x553^x554)-(x555*x556));

	if (t96 != -57073) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x557 = INT8_MIN;
	uint64_t x559 = 118934816LLU;

	t97 = ((x557^x558)-(x559*x560));

	if (t97 != 17935922928752708866LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x561 = 1613794255U;
	uint8_t x563 = 1U;
	volatile int16_t x564 = -40;
	static volatile int64_t t98 = -106681215977355LL;

	t98 = ((x561^x562)-(x563*x564));

	if (t98 != -9223372035240981513LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x565 = UINT8_MAX;
	int32_t x566 = INT32_MIN;
	int16_t x567 = 1;
	volatile uint32_t t99 = 525U;

	t99 = ((x565^x566)-(x567*x568));

	if (t99 != 2147483904U) { NG(); } else { ; }
	
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

