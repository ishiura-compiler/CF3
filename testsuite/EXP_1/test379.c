#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x10 = INT8_MIN;
static uint32_t x11 = 407U;
int64_t t4 = -789275298150190LL;
volatile uint32_t t6 = 13778641U;
int16_t x37 = INT16_MIN;
int64_t x40 = INT64_MAX;
int8_t x50 = -12;
uint8_t x59 = 58U;
static int64_t x61 = 1480757439938LL;
int8_t x64 = -7;
int32_t x67 = INT32_MIN;
static uint16_t x71 = 7U;
int32_t t13 = -60694282;
int64_t t16 = 237579052395530LL;
int8_t x94 = -1;
int16_t x96 = INT16_MAX;
static int8_t x97 = INT8_MIN;
int16_t x99 = INT16_MIN;
int64_t x100 = INT64_MAX;
uint8_t x110 = 0U;
int64_t x111 = INT64_MAX;
uint64_t x114 = 53721LLU;
uint64_t x116 = 6420584410LLU;
uint64_t t21 = 2LLU;
static volatile uint64_t x132 = UINT64_MAX;
volatile uint64_t t22 = 1288242LLU;
uint32_t x140 = 1U;
int8_t x162 = INT8_MIN;
int16_t x174 = -1;
static int16_t x175 = -21;
volatile int8_t x192 = -1;
uint16_t x194 = UINT16_MAX;
int64_t t32 = -362974246365LL;
int8_t x202 = -1;
volatile int16_t x203 = 3866;
int16_t x204 = 103;
uint32_t x226 = 216779526U;
static int16_t x239 = INT16_MIN;
uint32_t x242 = 206706U;
int64_t x244 = INT64_MAX;
static uint32_t x248 = 1324U;
static volatile int8_t x257 = INT8_MIN;
int8_t x259 = INT8_MIN;
volatile uint8_t x260 = 96U;
uint8_t x262 = UINT8_MAX;
uint16_t x273 = 0U;
uint8_t x274 = 22U;
int16_t x282 = 642;
uint16_t x284 = 734U;
int32_t t49 = 17561;
static int64_t t50 = 1287571462688925LL;
int32_t x302 = -627918;
int32_t x303 = -102170852;
int16_t x305 = 3419;
volatile int32_t t53 = -22;
static uint32_t x311 = 225U;
static volatile uint64_t x318 = 5LLU;
static int8_t x319 = INT8_MIN;
volatile int32_t x321 = INT32_MIN;
static volatile uint32_t x322 = UINT32_MAX;
uint64_t x332 = 20537039424472LLU;
uint64_t t59 = 1LLU;
uint64_t x334 = UINT64_MAX;
static int64_t x342 = -7LL;
int16_t x344 = INT16_MIN;
int32_t x348 = -1;
uint8_t x349 = 4U;
static int32_t t64 = 26425;
int16_t x378 = -2021;
int64_t t68 = 587419108955LL;
static int8_t x389 = INT8_MIN;
volatile uint64_t x403 = UINT64_MAX;
uint32_t x405 = 30U;
int8_t x406 = INT8_MIN;
volatile int8_t x417 = -2;
volatile int64_t t74 = -6603344549316824LL;
uint64_t t76 = 1957016537LLU;
uint8_t x445 = 5U;
int8_t x448 = INT8_MIN;
int16_t x451 = INT16_MIN;
static uint32_t x452 = UINT32_MAX;
uint64_t x453 = UINT64_MAX;
int32_t x454 = 7;
int16_t x455 = INT16_MIN;
int32_t x458 = 6419;
static volatile int16_t x459 = INT16_MAX;
volatile int32_t t80 = -6;
uint64_t x467 = 1302935LLU;
static uint64_t x468 = 1LLU;
int32_t x475 = INT32_MAX;
uint16_t x478 = 19669U;
uint16_t x488 = 155U;
static int64_t x491 = INT64_MIN;
int32_t x492 = INT32_MIN;
volatile int8_t x493 = INT8_MIN;
int16_t x494 = INT16_MAX;
uint64_t x495 = 3LLU;
uint16_t x499 = 19457U;
int64_t x502 = -1LL;
int16_t x510 = INT16_MIN;
static uint64_t x530 = UINT64_MAX;
int32_t x531 = -22;
uint32_t x534 = 1763195881U;
static uint64_t x543 = UINT64_MAX;
uint64_t t97 = 111LLU;


void f0(void) {
	static uint64_t x5 = 0LLU;
	volatile int16_t x6 = -3198;
	volatile int32_t x7 = -1;
	int8_t x8 = INT8_MIN;
	static volatile uint64_t t0 = 9407783022504LLU;

	t0 = (((x5*x6)/x7)-x8);

	if (t0 != 128LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = 256353LL;
	int64_t x12 = 3LL;
	int64_t t1 = -66138431616823LL;

	t1 = (((x9*x10)/x11)-x12);

	if (t1 != -80625LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = -1;
	uint32_t x14 = 5293U;
	uint16_t x15 = UINT16_MAX;
	int64_t x16 = -1LL;
	volatile int64_t t2 = -94LL;

	t2 = (((x13*x14)/x15)-x16);

	if (t2 != 65537LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MAX;
	int16_t x18 = -1;
	uint16_t x19 = 9U;
	volatile uint64_t x20 = 398LLU;
	volatile uint64_t t3 = 713LLU;

	t3 = (((x17*x18)/x19)-x20);

	if (t3 != 18446744073470941924LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 225621U;
	volatile uint8_t x22 = UINT8_MAX;
	int64_t x23 = -1LL;
	int8_t x24 = 3;

	t4 = (((x21*x22)/x23)-x24);

	if (t4 != -57533358LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x29 = INT16_MIN;
	uint8_t x30 = UINT8_MAX;
	uint8_t x31 = UINT8_MAX;
	int32_t x32 = 251;
	volatile int32_t t5 = -135336586;

	t5 = (((x29*x30)/x31)-x32);

	if (t5 != -33019) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = INT8_MIN;
	volatile uint32_t x34 = 653U;
	static volatile int16_t x35 = -1;
	static uint32_t x36 = 30509901U;

	t6 = (((x33*x34)/x35)-x36);

	if (t6 != 4264457395U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x38 = 3141U;
	int8_t x39 = INT8_MIN;
	int64_t t7 = -7LL;

	t7 = (((x37*x38)/x39)-x40);

	if (t7 != -9223372036853971711LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x49 = -4164222619009355LL;
	int16_t x51 = INT16_MIN;
	volatile uint16_t x52 = 131U;
	static int64_t t8 = -1429249413385LL;

	t8 = (((x49*x50)/x51)-x52);

	if (t8 != -1524983869397LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x53 = 1667312114363LL;
	static uint8_t x54 = 98U;
	static uint16_t x55 = 1263U;
	uint8_t x56 = UINT8_MAX;
	int64_t t9 = 6032133497LL;

	t9 = (((x53*x54)/x55)-x56);

	if (t9 != 129371802759LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x57 = 2007U;
	int32_t x58 = -2;
	static uint8_t x60 = 26U;
	int32_t t10 = 19;

	t10 = (((x57*x58)/x59)-x60);

	if (t10 != -95) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x62 = UINT8_MAX;
	int32_t x63 = -1;
	int64_t t11 = 515176084148318LL;

	t11 = (((x61*x62)/x63)-x64);

	if (t11 != -377593147184183LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x65 = INT8_MIN;
	int32_t x66 = -3195;
	int8_t x68 = -1;
	int32_t t12 = -763603;

	t12 = (((x65*x66)/x67)-x68);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x69 = INT32_MAX;
	int8_t x70 = -1;
	static int32_t x72 = -1;

	t13 = (((x69*x70)/x71)-x72);

	if (t13 != -306783377) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x73 = 15238342958808LLU;
	int8_t x74 = -19;
	int64_t x75 = -1LL;
	int16_t x76 = INT16_MAX;
	volatile uint64_t t14 = 96707LLU;

	t14 = (((x73*x74)/x75)-x76);

	if (t14 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x81 = 0U;
	volatile int16_t x82 = 15;
	int8_t x83 = 32;
	int32_t x84 = 49295619;
	uint32_t t15 = 29207U;

	t15 = (((x81*x82)/x83)-x84);

	if (t15 != 4245671677U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x85 = INT64_MIN;
	int8_t x86 = 0;
	int8_t x87 = 20;
	static int64_t x88 = INT64_MAX;

	t16 = (((x85*x86)/x87)-x88);

	if (t16 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x93 = 4436126080LLU;
	int16_t x95 = INT16_MAX;
	uint64_t t17 = 1423581453LLU;

	t17 = (((x93*x94)/x95)-x96);

	if (t17 != 562967133646649LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x98 = UINT8_MAX;
	static int64_t t18 = -2LL;

	t18 = (((x97*x98)/x99)-x100);

	if (t18 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x101 = INT64_MIN;
	uint32_t x102 = 0U;
	uint64_t x103 = 805847726LLU;
	int64_t x104 = INT64_MAX;
	uint64_t t19 = 30999202766844678LLU;

	t19 = (((x101*x102)/x103)-x104);

	if (t19 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x109 = 74U;
	static volatile uint8_t x112 = UINT8_MAX;
	volatile int64_t t20 = -33LL;

	t20 = (((x109*x110)/x111)-x112);

	if (t20 != -255LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x113 = -5437;
	uint64_t x115 = 2693LLU;

	t21 = (((x113*x114)/x115)-x116);

	if (t21 != 6849879978753677LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x129 = INT8_MAX;
	int64_t x130 = -1LL;
	uint8_t x131 = 83U;

	t22 = (((x129*x130)/x131)-x132);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x133 = INT16_MIN;
	int64_t x134 = 15374854679152LL;
	static int16_t x135 = INT16_MIN;
	int64_t x136 = 124LL;
	int64_t t23 = 0LL;

	t23 = (((x133*x134)/x135)-x136);

	if (t23 != 15374854679028LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x137 = 0U;
	static int32_t x138 = INT32_MAX;
	int16_t x139 = INT16_MIN;
	static uint32_t t24 = UINT32_MAX;

	t24 = (((x137*x138)/x139)-x140);

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x145 = 254400LLU;
	int16_t x146 = -1;
	static int64_t x147 = -31LL;
	static volatile uint16_t x148 = 0U;
	uint64_t t25 = 67953782699LLU;

	t25 = (((x145*x146)/x147)-x148);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x149 = INT16_MIN;
	volatile int8_t x150 = INT8_MIN;
	uint64_t x151 = 21LLU;
	int32_t x152 = -1;
	uint64_t t26 = 20598756556079LLU;

	t26 = (((x149*x150)/x151)-x152);

	if (t26 != 199729LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x161 = 1U;
	volatile int64_t x163 = INT64_MAX;
	int8_t x164 = INT8_MIN;
	int64_t t27 = 184929978741891109LL;

	t27 = (((x161*x162)/x163)-x164);

	if (t27 != 128LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x169 = INT16_MIN;
	volatile uint8_t x170 = 0U;
	volatile int16_t x171 = INT16_MIN;
	static int32_t x172 = -91485680;
	static volatile int32_t t28 = 1;

	t28 = (((x169*x170)/x171)-x172);

	if (t28 != 91485680) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x173 = 97;
	uint8_t x176 = 1U;
	volatile int32_t t29 = -51346929;

	t29 = (((x173*x174)/x175)-x176);

	if (t29 != 3) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x189 = 3373314U;
	int32_t x190 = -1;
	volatile uint8_t x191 = UINT8_MAX;
	uint32_t t30 = 31U;

	t30 = (((x189*x190)/x191)-x192);

	if (t30 != 16829781U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x193 = UINT64_MAX;
	static int8_t x195 = 27;
	int64_t x196 = -1LL;
	uint64_t t31 = 63656260376079LLU;

	t31 = (((x193*x194)/x195)-x196);

	if (t31 != 683212743470721707LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x197 = INT16_MIN;
	uint8_t x198 = 34U;
	int16_t x199 = -2;
	int64_t x200 = INT64_MAX;

	t32 = (((x197*x198)/x199)-x200);

	if (t32 != -9223372036854218751LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x201 = INT16_MIN;
	int32_t t33 = -395;

	t33 = (((x201*x202)/x203)-x204);

	if (t33 != -95) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x209 = -1;
	int64_t x210 = INT64_MAX;
	int64_t x211 = INT64_MAX;
	uint8_t x212 = 9U;
	static volatile int64_t t34 = -373791439303220589LL;

	t34 = (((x209*x210)/x211)-x212);

	if (t34 != -10LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x213 = UINT64_MAX;
	int8_t x214 = 21;
	uint32_t x215 = UINT32_MAX;
	int32_t x216 = -88359066;
	volatile uint64_t t35 = 705307030019481LLU;

	t35 = (((x213*x214)/x215)-x216);

	if (t35 != 4383326362LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x217 = -4435337461934183597LL;
	int32_t x218 = -1;
	volatile int16_t x219 = INT16_MIN;
	uint64_t x220 = 439067041020LLU;
	static uint64_t t36 = 4822381LLU;

	t36 = (((x217*x218)/x219)-x220);

	if (t36 != 18446608278885005281LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x225 = 1464U;
	int32_t x227 = INT32_MAX;
	int16_t x228 = INT16_MAX;
	volatile uint32_t t37 = 334U;

	t37 = (((x225*x226)/x227)-x228);

	if (t37 != 4294934530U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x229 = 1818U;
	uint64_t x230 = 1LLU;
	int8_t x231 = -2;
	int32_t x232 = -1;
	static volatile uint64_t t38 = 114775455354476LLU;

	t38 = (((x229*x230)/x231)-x232);

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x237 = 36625855389LLU;
	int32_t x238 = -1;
	uint8_t x240 = 0U;
	static uint64_t t39 = 787947LLU;

	t39 = (((x237*x238)/x239)-x240);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x241 = INT32_MIN;
	volatile int16_t x243 = -19;
	int64_t t40 = 7044LL;

	t40 = (((x241*x242)/x243)-x244);

	if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x245 = -1;
	uint16_t x246 = 3429U;
	int8_t x247 = 8;
	uint32_t t41 = 1523374789U;

	t41 = (((x245*x246)/x247)-x248);

	if (t41 != 4294965544U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x253 = 0;
	static uint8_t x254 = 4U;
	int8_t x255 = -63;
	uint32_t x256 = UINT32_MAX;
	volatile uint32_t t42 = 7U;

	t42 = (((x253*x254)/x255)-x256);

	if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x258 = 594972960729419LL;
	int64_t t43 = -2404756420097140LL;

	t43 = (((x257*x258)/x259)-x260);

	if (t43 != 594972960729323LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x261 = -1;
	uint8_t x263 = 1U;
	volatile int32_t x264 = INT32_MIN;
	int32_t t44 = -2615;

	t44 = (((x261*x262)/x263)-x264);

	if (t44 != 2147483393) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x265 = 13U;
	uint8_t x266 = 2U;
	volatile int8_t x267 = -1;
	static uint32_t x268 = UINT32_MAX;
	uint32_t t45 = 16214U;

	t45 = (((x265*x266)/x267)-x268);

	if (t45 != 4294967271U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x275 = INT16_MIN;
	static int8_t x276 = -1;
	static volatile int32_t t46 = -216;

	t46 = (((x273*x274)/x275)-x276);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x281 = UINT64_MAX;
	int16_t x283 = INT16_MAX;
	volatile uint64_t t47 = 4746815895LLU;

	t47 = (((x281*x282)/x283)-x284);

	if (t47 != 562967133814065LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x285 = 374LLU;
	volatile uint64_t x286 = 89926132050462321LLU;
	static uint32_t x287 = 6U;
	uint16_t x288 = 21U;
	uint64_t t48 = 137957LLU;

	t48 = (((x285*x286)/x287)-x288);

	if (t48 != 2530938218860559385LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x289 = UINT8_MAX;
	int16_t x290 = INT16_MIN;
	volatile uint16_t x291 = 863U;
	int8_t x292 = -1;

	t49 = (((x289*x290)/x291)-x292);

	if (t49 != -9681) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x293 = -7303853188LL;
	int8_t x294 = 1;
	int16_t x295 = INT16_MIN;
	int32_t x296 = INT32_MIN;

	t50 = (((x293*x294)/x295)-x296);

	if (t50 != 2147706543LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x297 = -4606LL;
	uint16_t x298 = 2414U;
	int8_t x299 = -18;
	uint8_t x300 = 10U;
	static volatile int64_t t51 = -10140190LL;

	t51 = (((x297*x298)/x299)-x300);

	if (t51 != 617705LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x301 = 3U;
	uint16_t x304 = 16714U;
	int32_t t52 = 0;

	t52 = (((x301*x302)/x303)-x304);

	if (t52 != -16714) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x306 = -1;
	uint16_t x307 = 4U;
	int8_t x308 = 18;

	t53 = (((x305*x306)/x307)-x308);

	if (t53 != -872) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x309 = INT32_MAX;
	static uint64_t x310 = UINT64_MAX;
	static uint64_t x312 = 8433058685092LLU;
	uint64_t t54 = 1LLU;

	t54 = (((x309*x310)/x311)-x312);

	if (t54 != 81977096148257432LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x313 = 3U;
	static uint16_t x314 = UINT16_MAX;
	int8_t x315 = 1;
	volatile int8_t x316 = INT8_MIN;
	static uint32_t t55 = 1322976139U;

	t55 = (((x313*x314)/x315)-x316);

	if (t55 != 196733U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x317 = UINT64_MAX;
	int16_t x320 = 1021;
	volatile uint64_t t56 = 65922440531425LLU;

	t56 = (((x317*x318)/x319)-x320);

	if (t56 != 18446744073709550596LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x323 = INT8_MIN;
	int16_t x324 = -683;
	volatile uint32_t t57 = 834566U;

	t57 = (((x321*x322)/x323)-x324);

	if (t57 != 683U) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x325 = -1;
	static int16_t x326 = 395;
	static int64_t x327 = INT64_MIN;
	int8_t x328 = -1;
	volatile int64_t t58 = -3907249LL;

	t58 = (((x325*x326)/x327)-x328);

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x329 = 1433750469728940262LLU;
	int16_t x330 = 14;
	uint8_t x331 = UINT8_MAX;

	t59 = (((x329*x330)/x331)-x332);

	if (t59 != 6355002186048516LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x333 = -6;
	int64_t x335 = 20566935640991LL;
	static volatile int8_t x336 = -1;
	volatile uint64_t t60 = 13006954267421LLU;

	t60 = (((x333*x334)/x335)-x336);

	if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x337 = INT16_MAX;
	uint64_t x338 = 27870073849504LLU;
	int32_t x339 = 8434;
	static volatile int8_t x340 = -1;
	static volatile uint64_t t61 = 68LLU;

	t61 = (((x337*x338)/x339)-x340);

	if (t61 != 108278243991783LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x341 = -1;
	volatile uint16_t x343 = UINT16_MAX;
	int64_t t62 = 2219421520789514LL;

	t62 = (((x341*x342)/x343)-x344);

	if (t62 != 32768LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x345 = 26U;
	volatile uint8_t x346 = 1U;
	int8_t x347 = INT8_MIN;
	volatile uint32_t t63 = 248995U;

	t63 = (((x345*x346)/x347)-x348);

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x350 = 16;
	int8_t x351 = INT8_MIN;
	uint16_t x352 = 117U;

	t64 = (((x349*x350)/x351)-x352);

	if (t64 != -117) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x357 = 450268LLU;
	uint32_t x358 = 27687U;
	uint16_t x359 = 44U;
	int8_t x360 = 0;
	volatile uint64_t t65 = 8270160130562255016LLU;

	t65 = (((x357*x358)/x359)-x360);

	if (t65 != 283331139LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint16_t x361 = 2810U;
	static int32_t x362 = 0;
	int64_t x363 = -1LL;
	static int8_t x364 = 7;
	int64_t t66 = 434304365LL;

	t66 = (((x361*x362)/x363)-x364);

	if (t66 != -7LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x377 = 28048720LLU;
	int64_t x379 = -1LL;
	int16_t x380 = INT16_MIN;
	volatile uint64_t t67 = 112675099LLU;

	t67 = (((x377*x378)/x379)-x380);

	if (t67 != 32768LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x381 = UINT8_MAX;
	volatile uint32_t x382 = 503147236U;
	int32_t x383 = -1;
	int64_t x384 = INT64_MAX;

	t68 = (((x381*x382)/x383)-x384);

	if (t68 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x385 = INT16_MIN;
	int8_t x386 = INT8_MAX;
	int16_t x387 = -902;
	int8_t x388 = INT8_MIN;
	int32_t t69 = -467;

	t69 = (((x385*x386)/x387)-x388);

	if (t69 != 4741) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x390 = 35U;
	uint16_t x391 = UINT16_MAX;
	volatile int16_t x392 = INT16_MIN;
	int32_t t70 = 4001;

	t70 = (((x389*x390)/x391)-x392);

	if (t70 != 32768) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint64_t x397 = UINT64_MAX;
	int16_t x398 = INT16_MAX;
	static int8_t x399 = 1;
	static uint32_t x400 = 54335U;
	uint64_t t71 = 38875670122LLU;

	t71 = (((x397*x398)/x399)-x400);

	if (t71 != 18446744073709464514LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x401 = 63145400U;
	static uint8_t x402 = 6U;
	int16_t x404 = 8;
	volatile uint64_t t72 = 131176137LLU;

	t72 = (((x401*x402)/x403)-x404);

	if (t72 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x407 = 19LLU;
	int16_t x408 = INT16_MIN;
	volatile uint64_t t73 = 22055120006441458LLU;

	t73 = (((x405*x406)/x407)-x408);

	if (t73 != 226083476LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x418 = 1885906715190LL;
	int8_t x419 = INT8_MIN;
	static int32_t x420 = 5343415;

	t74 = (((x417*x418)/x419)-x420);

	if (t74 != 29461949009LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x421 = -1;
	int16_t x422 = -1;
	int64_t x423 = -1LL;
	volatile int64_t x424 = INT64_MIN;
	volatile int64_t t75 = INT64_MAX;

	t75 = (((x421*x422)/x423)-x424);

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x429 = -23;
	static volatile uint8_t x430 = UINT8_MAX;
	uint64_t x431 = UINT64_MAX;
	static uint8_t x432 = 22U;

	t76 = (((x429*x430)/x431)-x432);

	if (t76 != 18446744073709551594LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x446 = UINT64_MAX;
	volatile int32_t x447 = 31973;
	volatile uint64_t t77 = 53289192298559172LLU;

	t77 = (((x445*x446)/x447)-x448);

	if (t77 != 576947551800382LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x449 = 186;
	static uint16_t x450 = UINT16_MAX;
	uint32_t t78 = 219U;

	t78 = (((x449*x450)/x451)-x452);

	if (t78 != 4294966926U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x456 = INT32_MIN;
	static volatile uint64_t t79 = 99140604830410547LLU;

	t79 = (((x453*x454)/x455)-x456);

	if (t79 != 2147483649LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x457 = INT16_MAX;
	int16_t x460 = INT16_MIN;

	t80 = (((x457*x458)/x459)-x460);

	if (t80 != 39187) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint32_t x461 = 72U;
	int32_t x462 = -1;
	int32_t x463 = INT32_MIN;
	uint16_t x464 = 13U;
	uint32_t t81 = 156U;

	t81 = (((x461*x462)/x463)-x464);

	if (t81 != 4294967284U) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint64_t x465 = UINT64_MAX;
	volatile uint16_t x466 = 2U;
	volatile uint64_t t82 = 431542614LLU;

	t82 = (((x465*x466)/x467)-x468);

	if (t82 != 14157839089216LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x469 = INT8_MIN;
	uint32_t x470 = UINT32_MAX;
	static int16_t x471 = 53;
	volatile uint8_t x472 = 25U;
	volatile uint32_t t83 = 27U;

	t83 = (((x469*x470)/x471)-x472);

	if (t83 != 4294967273U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x473 = INT16_MAX;
	static volatile int16_t x474 = INT16_MAX;
	int16_t x476 = INT16_MIN;
	static int32_t t84 = -1064101;

	t84 = (((x473*x474)/x475)-x476);

	if (t84 != 32768) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x477 = UINT16_MAX;
	int8_t x479 = 20;
	int8_t x480 = -1;
	static volatile int32_t t85 = -7;

	t85 = (((x477*x478)/x479)-x480);

	if (t85 != 64450396) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x485 = UINT16_MAX;
	uint16_t x486 = 29981U;
	int64_t x487 = INT64_MIN;
	volatile int64_t t86 = -295589553865299485LL;

	t86 = (((x485*x486)/x487)-x488);

	if (t86 != -155LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x489 = UINT64_MAX;
	static uint8_t x490 = 9U;
	volatile uint64_t t87 = 122972014544304LLU;

	t87 = (((x489*x490)/x491)-x492);

	if (t87 != 2147483649LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x496 = 1U;
	static volatile uint64_t t88 = 4807970523780LLU;

	t88 = (((x493*x494)/x495)-x496);

	if (t88 != 6148914691235119145LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x497 = INT32_MAX;
	int64_t x498 = -1LL;
	uint16_t x500 = 14U;
	volatile int64_t t89 = -145137613077511837LL;

	t89 = (((x497*x498)/x499)-x500);

	if (t89 != -110384LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x501 = 13153258LLU;
	volatile int32_t x503 = INT32_MIN;
	static int32_t x504 = INT32_MAX;
	uint64_t t90 = 8604302278866LLU;

	t90 = (((x501*x502)/x503)-x504);

	if (t90 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x509 = INT16_MIN;
	int32_t x511 = INT32_MAX;
	uint64_t x512 = 2181154308599261101LLU;
	uint64_t t91 = 387220687894030345LLU;

	t91 = (((x509*x510)/x511)-x512);

	if (t91 != 16265589765110290515LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x513 = INT8_MIN;
	int32_t x514 = 392;
	volatile uint32_t x515 = 31U;
	static int32_t x516 = -3392390;
	uint32_t t92 = 53860U;

	t92 = (((x513*x514)/x515)-x516);

	if (t92 != 141938103U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x521 = INT16_MIN;
	static int16_t x522 = -1;
	static int64_t x523 = -1LL;
	volatile int32_t x524 = INT32_MIN;
	static volatile int64_t t93 = -81025LL;

	t93 = (((x521*x522)/x523)-x524);

	if (t93 != 2147450880LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x529 = INT64_MIN;
	static volatile int16_t x532 = 1;
	uint64_t t94 = UINT64_MAX;

	t94 = (((x529*x530)/x531)-x532);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x533 = UINT16_MAX;
	volatile uint64_t x535 = UINT64_MAX;
	static volatile int64_t x536 = INT64_MIN;
	static volatile uint64_t t95 = 32379734089LLU;

	t95 = (((x533*x534)/x535)-x536);

	if (t95 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x537 = INT32_MAX;
	static uint32_t x538 = 25U;
	static int8_t x539 = INT8_MAX;
	int16_t x540 = INT16_MIN;
	uint32_t t96 = 16U;

	t96 = (((x537*x538)/x539)-x540);

	if (t96 != 16942087U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x541 = INT8_MAX;
	int16_t x542 = 15;
	uint32_t x544 = 189363148U;

	t97 = (((x541*x542)/x543)-x544);

	if (t97 != 18446744073520188468LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x549 = INT64_MIN;
	uint8_t x550 = 0U;
	int32_t x551 = INT32_MAX;
	int64_t x552 = 91LL;
	int64_t t98 = -123903672280155LL;

	t98 = (((x549*x550)/x551)-x552);

	if (t98 != -91LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x553 = -15LL;
	int8_t x554 = -1;
	volatile int8_t x555 = INT8_MIN;
	int8_t x556 = -1;
	volatile int64_t t99 = 7419642LL;

	t99 = (((x553*x554)/x555)-x556);

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

