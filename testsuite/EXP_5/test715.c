#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = INT64_MAX;
static volatile uint64_t t1 = 2011827855087592423LLU;
static volatile int64_t x13 = -3379LL;
uint32_t x14 = 32U;
int32_t x15 = INT32_MAX;
int32_t x16 = INT32_MAX;
volatile int8_t x17 = -1;
int8_t x23 = INT8_MIN;
static int64_t x27 = INT64_MIN;
volatile int64_t t5 = 8589162LL;
static int32_t x30 = INT32_MIN;
uint64_t t8 = 21764LLU;
int64_t x41 = -1LL;
volatile uint16_t x42 = 20U;
int16_t x48 = -21;
int16_t x55 = 1983;
int64_t t12 = -3846218LL;
volatile uint64_t t13 = 38355900LLU;
int16_t x71 = INT16_MAX;
volatile int16_t x72 = INT16_MIN;
static int64_t x78 = INT64_MIN;
static volatile int64_t t18 = -144820113293701LL;
volatile int64_t t19 = 106605773126483992LL;
static int8_t x93 = 1;
int16_t x108 = INT16_MIN;
volatile int8_t x112 = 7;
int32_t x118 = INT32_MIN;
volatile int16_t x127 = 15314;
volatile uint8_t x140 = 11U;
int16_t x142 = INT16_MIN;
int16_t x145 = 63;
volatile uint32_t t33 = 2660166U;
volatile int64_t x158 = -284969502LL;
static volatile int32_t x164 = INT32_MIN;
static volatile int32_t t37 = INT32_MIN;
int8_t x167 = INT8_MIN;
uint32_t x175 = UINT32_MAX;
static volatile int32_t x179 = INT32_MAX;
int64_t x183 = -1LL;
int64_t t42 = 813780LL;
int64_t x190 = -329497260LL;
volatile int32_t x192 = 1896;
int16_t x196 = -1;
static int32_t t45 = -1801617;
uint8_t x198 = UINT8_MAX;
volatile int64_t t47 = INT64_MAX;
uint32_t x210 = 6U;
volatile uint16_t x212 = 7588U;
int8_t x214 = INT8_MAX;
static int16_t x217 = -1;
volatile int32_t x218 = -6218353;
static uint16_t x219 = 142U;
int32_t t51 = 1421;
static uint64_t t52 = 37311478LLU;
int64_t x233 = INT64_MAX;
int64_t x239 = INT64_MIN;
static volatile uint64_t t58 = 56LLU;
static volatile int8_t x252 = -1;
int32_t x253 = 39414808;
uint64_t x266 = 58384682LLU;
uint32_t x268 = UINT32_MAX;
static int32_t x272 = INT32_MIN;
int8_t x278 = INT8_MAX;
int64_t x294 = 158660216995586LL;
int64_t t69 = -26486LL;
static int64_t x298 = INT64_MIN;
int64_t x300 = INT64_MIN;
volatile uint64_t t70 = 125937136LLU;
volatile uint16_t x302 = 8624U;
volatile int32_t t71 = 68;
int8_t x326 = INT8_MIN;
int64_t t80 = 3506231274992194116LL;
uint8_t x359 = 52U;
uint64_t t82 = 71742593063002572LLU;
volatile int16_t x365 = -1;
static int16_t x367 = INT16_MAX;
static volatile uint64_t x368 = 693LLU;
static uint16_t x369 = 199U;
int16_t x373 = INT16_MAX;
int64_t t86 = 2900104420418LL;
int32_t x377 = 140;
uint32_t x380 = 204U;
volatile int64_t x383 = INT64_MAX;
static volatile uint64_t x386 = 366383101480LLU;
volatile int16_t x392 = INT16_MAX;
volatile uint32_t x402 = 11U;
static int8_t x403 = 1;
int64_t x404 = INT64_MIN;
volatile uint32_t t94 = 63U;
static int64_t x410 = -2301136218LL;
int16_t x411 = INT16_MIN;
int32_t x414 = INT32_MIN;
uint16_t x422 = UINT16_MAX;
uint32_t x424 = 1004288327U;


void f0(void) {
	int32_t x6 = -1;
	static int32_t x7 = -1;
	int8_t x8 = -6;
	volatile int64_t t0 = INT64_MAX;

	t0 = (x5^((x6%x7)*x8));

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x9 = 4U;
	int64_t x10 = 0LL;
	uint64_t x11 = 622889459LLU;
	int16_t x12 = INT16_MIN;

	t1 = (x9^((x10%x11)*x12));

	if (t1 != 4LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t t2 = -1002733927379LL;

	t2 = (x13^((x14%x15)*x16));

	if (t2 != -4294963923LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x18 = INT64_MIN;
	int32_t x19 = INT32_MIN;
	static int16_t x20 = INT16_MIN;
	volatile int64_t t3 = -1028439818661010121LL;

	t3 = (x17^((x18%x19)*x20));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x21 = INT8_MIN;
	static int64_t x22 = -1LL;
	uint32_t x24 = UINT32_MAX;
	int64_t t4 = 439752802LL;

	t4 = (x21^((x22%x23)*x24));

	if (t4 != 4294967169LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = -1;
	volatile int32_t x26 = INT32_MAX;
	int16_t x28 = INT16_MAX;

	t5 = (x25^((x26%x27)*x28));

	if (t5 != -70366596661250LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 11U;
	static uint64_t x31 = UINT64_MAX;
	volatile uint8_t x32 = 3U;
	volatile uint64_t t6 = 3694LLU;

	t6 = (x29^((x30%x31)*x32));

	if (t6 != 18446744067267100683LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = 776715;
	int8_t x34 = INT8_MAX;
	volatile int64_t x35 = -1LL;
	int8_t x36 = -1;
	volatile int64_t t7 = 1252637435978254LL;

	t7 = (x33^((x34%x35)*x36));

	if (t7 != 776715LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x37 = INT64_MIN;
	static uint16_t x38 = 244U;
	uint32_t x39 = UINT32_MAX;
	uint64_t x40 = UINT64_MAX;

	t8 = (x37^((x38%x39)*x40));

	if (t8 != 9223372036854775564LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x43 = 66710472U;
	volatile int16_t x44 = INT16_MAX;
	volatile int64_t t9 = 386690388657LL;

	t9 = (x41^((x42%x43)*x44));

	if (t9 != -655341LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 425383U;
	uint16_t x46 = UINT16_MAX;
	uint64_t x47 = 6375LLU;
	volatile uint64_t t10 = 10812LLU;

	t10 = (x45^((x46%x47)*x48));

	if (t10 != 18446744073709097012LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = UINT32_MAX;
	uint64_t x50 = UINT64_MAX;
	int32_t x51 = INT32_MIN;
	uint8_t x52 = 122U;
	uint64_t t11 = 14LLU;

	t11 = (x49^((x50%x51)*x52));

	if (t11 != 257698037881LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = 4U;
	int64_t x54 = 61204LL;
	volatile int64_t x56 = 75622644LL;

	t12 = (x53^((x54%x55)*x56));

	if (t12 != 129617211820LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = 4;
	volatile uint64_t x58 = 15LLU;
	uint8_t x59 = UINT8_MAX;
	int64_t x60 = 2408908LL;

	t13 = (x57^((x58%x59)*x60));

	if (t13 != 36133616LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x65 = 344473759700926LLU;
	uint32_t x66 = 6U;
	uint32_t x67 = UINT32_MAX;
	int16_t x68 = INT16_MIN;
	uint64_t t14 = 4629LLU;

	t14 = (x65^((x66%x67)*x68));

	if (t14 != 344477649196990LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x69 = INT64_MIN;
	uint8_t x70 = UINT8_MAX;
	static volatile int64_t t15 = -3LL;

	t15 = (x69^((x70%x71)*x72));

	if (t15 != 9223372036846419968LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x73 = -1;
	volatile int64_t x74 = 8555452LL;
	int16_t x75 = -1;
	int32_t x76 = -4;
	volatile int64_t t16 = 52720264LL;

	t16 = (x73^((x74%x75)*x76));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = 1;
	uint8_t x79 = 63U;
	uint32_t x80 = 1754156U;
	volatile int64_t t17 = -101507485LL;

	t17 = (x77^((x78%x79)*x80));

	if (t17 != -14033247LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = 918;
	int64_t x82 = INT64_MAX;
	static int32_t x83 = -1;
	int8_t x84 = 0;

	t18 = (x81^((x82%x83)*x84));

	if (t18 != 918LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x89 = INT16_MIN;
	volatile uint16_t x90 = 10625U;
	int64_t x91 = INT64_MIN;
	uint16_t x92 = UINT16_MAX;

	t19 = (x89^((x90%x91)*x92));

	if (t19 != -696297857LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x94 = UINT16_MAX;
	int64_t x95 = -1LL;
	uint32_t x96 = 43U;
	int64_t t20 = -2764183947LL;

	t20 = (x93^((x94%x95)*x96));

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x97 = UINT32_MAX;
	int8_t x98 = 3;
	volatile uint32_t x99 = 25024441U;
	uint64_t x100 = UINT64_MAX;
	static volatile uint64_t t21 = 4564289135LLU;

	t21 = (x97^((x98%x99)*x100));

	if (t21 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x101 = -3563406;
	int16_t x102 = INT16_MIN;
	int8_t x103 = INT8_MIN;
	volatile uint32_t x104 = 140746095U;
	uint32_t t22 = 6254588U;

	t22 = (x101^((x102%x103)*x104));

	if (t22 != 4291403890U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x105 = -28;
	static uint32_t x106 = 1735U;
	int32_t x107 = INT32_MAX;
	uint32_t t23 = 2035U;

	t23 = (x105^((x106%x107)*x108));

	if (t23 != 56852452U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = INT16_MAX;
	int64_t x110 = -989477646476101305LL;
	static int32_t x111 = INT32_MIN;
	volatile int64_t t24 = 73965332516363457LL;

	t24 = (x109^((x110%x111)*x112));

	if (t24 != -9324466418LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x113 = INT16_MAX;
	static int64_t x114 = INT64_MAX;
	static uint64_t x115 = 303493LLU;
	volatile int64_t x116 = INT64_MIN;
	uint64_t t25 = 45856142507035021LLU;

	t25 = (x113^((x114%x115)*x116));

	if (t25 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x117 = 339;
	uint8_t x119 = UINT8_MAX;
	int16_t x120 = 24;
	int32_t t26 = -468246551;

	t26 = (x117^((x118%x119)*x120));

	if (t26 != -2733) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x121 = -1;
	int64_t x122 = INT64_MIN;
	static int8_t x123 = INT8_MIN;
	static uint64_t x124 = UINT64_MAX;
	volatile uint64_t t27 = UINT64_MAX;

	t27 = (x121^((x122%x123)*x124));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = INT32_MIN;
	uint8_t x126 = 3U;
	int64_t x128 = -1LL;
	static volatile int64_t t28 = -2030521LL;

	t28 = (x125^((x126%x127)*x128));

	if (t28 != 2147483645LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x129 = INT64_MIN;
	uint64_t x130 = 184127283973040141LLU;
	static int64_t x131 = -1LL;
	int64_t x132 = INT64_MAX;
	volatile uint64_t t29 = 38742665612943LLU;

	t29 = (x129^((x130%x131)*x132));

	if (t29 != 18262616789736511475LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x133 = -1LL;
	uint64_t x134 = UINT64_MAX;
	volatile uint16_t x135 = 511U;
	int16_t x136 = 27;
	volatile uint64_t t30 = 39038484LLU;

	t30 = (x133^((x134%x135)*x136));

	if (t30 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x137 = -1;
	int32_t x138 = INT32_MIN;
	static int8_t x139 = 1;
	static volatile int32_t t31 = -118524;

	t31 = (x137^((x138%x139)*x140));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x141 = INT32_MIN;
	volatile uint8_t x143 = 1U;
	int16_t x144 = INT16_MAX;
	static int32_t t32 = INT32_MIN;

	t32 = (x141^((x142%x143)*x144));

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x146 = UINT32_MAX;
	uint8_t x147 = 127U;
	int16_t x148 = -1;

	t33 = (x145^((x146%x147)*x148));

	if (t33 != 4294967246U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x149 = INT16_MIN;
	int16_t x150 = INT16_MIN;
	int16_t x151 = -1;
	static uint8_t x152 = 1U;
	int32_t t34 = 974;

	t34 = (x149^((x150%x151)*x152));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x153 = -1;
	int32_t x154 = INT32_MIN;
	uint8_t x155 = 6U;
	int32_t x156 = -1;
	static volatile int32_t t35 = 24;

	t35 = (x153^((x154%x155)*x156));

	if (t35 != -3) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x157 = INT16_MAX;
	uint16_t x159 = UINT16_MAX;
	volatile int32_t x160 = INT32_MIN;
	volatile int64_t t36 = -6LL;

	t36 = (x157^((x158%x159)*x160));

	if (t36 != 50083613671423LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x161 = INT32_MIN;
	int16_t x162 = INT16_MAX;
	int8_t x163 = 1;

	t37 = (x161^((x162%x163)*x164));

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x165 = INT8_MIN;
	uint32_t x166 = 328791218U;
	volatile uint8_t x168 = 40U;
	uint32_t t38 = 127U;

	t38 = (x165^((x166%x167)*x168));

	if (t38 != 4028220496U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x169 = -84;
	uint64_t x170 = 397308LLU;
	int32_t x171 = INT32_MIN;
	int32_t x172 = -1;
	static uint64_t t39 = 12202LLU;

	t39 = (x169^((x170%x171)*x172));

	if (t39 != 397224LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x173 = -1;
	int32_t x174 = -2647542;
	uint32_t x176 = 7087U;
	volatile uint32_t t40 = 121U;

	t40 = (x173^((x174%x175)*x176));

	if (t40 != 1583260969U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x177 = INT64_MAX;
	int8_t x178 = INT8_MIN;
	uint8_t x180 = 1U;
	static volatile int64_t t41 = 23320222792110LL;

	t41 = (x177^((x178%x179)*x180));

	if (t41 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x181 = UINT32_MAX;
	static uint16_t x182 = 39U;
	volatile int64_t x184 = -15LL;

	t42 = (x181^((x182%x183)*x184));

	if (t42 != 4294967295LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x185 = 3727106;
	uint64_t x186 = 7067325420178LLU;
	uint64_t x187 = 370831798LLU;
	static uint32_t x188 = UINT32_MAX;
	uint64_t t43 = 1072458468114190826LLU;

	t43 = (x185^((x186%x187)*x188));

	if (t43 != 55894249106944888LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x189 = 60U;
	volatile int32_t x191 = -1;
	static volatile int64_t t44 = -29787700359569568LL;

	t44 = (x189^((x190%x191)*x192));

	if (t44 != 60LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = INT8_MAX;
	uint8_t x194 = 1U;
	volatile uint16_t x195 = UINT16_MAX;

	t45 = (x193^((x194%x195)*x196));

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x197 = INT8_MIN;
	static int32_t x199 = -1;
	static int16_t x200 = -1;
	int32_t t46 = -69;

	t46 = (x197^((x198%x199)*x200));

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x201 = INT64_MAX;
	int32_t x202 = -203026386;
	int16_t x203 = -1;
	volatile int64_t x204 = INT64_MIN;

	t47 = (x201^((x202%x203)*x204));

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x205 = INT32_MIN;
	uint32_t x206 = 3U;
	static uint16_t x207 = 47U;
	int16_t x208 = -46;
	volatile uint32_t t48 = 1008517U;

	t48 = (x205^((x206%x207)*x208));

	if (t48 != 2147483510U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x209 = 614;
	static int64_t x211 = INT64_MIN;
	int64_t t49 = 11924873LL;

	t49 = (x209^((x210%x211)*x212));

	if (t49 != 46014LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x213 = 2807258532366LL;
	int8_t x215 = INT8_MIN;
	int8_t x216 = INT8_MIN;
	volatile int64_t t50 = -106529LL;

	t50 = (x213^((x214%x215)*x216));

	if (t50 != -2807258543474LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x220 = INT8_MIN;

	t51 = (x217^((x218%x219)*x220));

	if (t51 != -3969) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x221 = INT16_MAX;
	uint64_t x222 = UINT64_MAX;
	uint8_t x223 = 15U;
	volatile int32_t x224 = -1;

	t52 = (x221^((x222%x223)*x224));

	if (t52 != 32767LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x225 = 22;
	static int32_t x226 = INT32_MIN;
	int64_t x227 = -1LL;
	int16_t x228 = INT16_MIN;
	int64_t t53 = -1738572058LL;

	t53 = (x225^((x226%x227)*x228));

	if (t53 != 22LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x229 = INT16_MIN;
	int64_t x230 = -1LL;
	volatile uint16_t x231 = 3114U;
	int16_t x232 = INT16_MIN;
	volatile int64_t t54 = 1LL;

	t54 = (x229^((x230%x231)*x232));

	if (t54 != -65536LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x234 = 84245669LL;
	int16_t x235 = -10;
	int16_t x236 = -1;
	volatile int64_t t55 = -23079691453415101LL;

	t55 = (x233^((x234%x235)*x236));

	if (t55 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x237 = 96U;
	static uint16_t x238 = 38U;
	int64_t x240 = -327950LL;
	static int64_t t56 = 9572630156187LL;

	t56 = (x237^((x238%x239)*x240));

	if (t56 != -12462196LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x241 = 29U;
	uint16_t x242 = UINT16_MAX;
	uint8_t x243 = UINT8_MAX;
	int64_t x244 = 146530925695331317LL;
	int64_t t57 = -1LL;

	t57 = (x241^((x242%x243)*x244));

	if (t57 != 29LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x245 = INT8_MIN;
	uint64_t x246 = 106144179076LLU;
	uint64_t x247 = UINT64_MAX;
	int64_t x248 = INT64_MAX;

	t58 = (x245^((x246%x247)*x248));

	if (t58 != 106144179196LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x249 = 10U;
	volatile uint32_t x250 = UINT32_MAX;
	volatile int64_t x251 = INT64_MAX;
	volatile int64_t t59 = 16075972LL;

	t59 = (x249^((x250%x251)*x252));

	if (t59 != -4294967285LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x254 = -2963;
	int64_t x255 = INT64_MIN;
	int64_t x256 = -1LL;
	volatile int64_t t60 = -152201LL;

	t60 = (x253^((x254%x255)*x256));

	if (t60 != 39413643LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x257 = INT16_MAX;
	int16_t x258 = -3885;
	int32_t x259 = 21624;
	int16_t x260 = INT16_MIN;
	int32_t t61 = 1042314856;

	t61 = (x257^((x258%x259)*x260));

	if (t61 != 127336447) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x261 = 446U;
	uint16_t x262 = 119U;
	int64_t x263 = INT64_MAX;
	int16_t x264 = 2683;
	int64_t t62 = 276922LL;

	t62 = (x261^((x262%x263)*x264));

	if (t62 != 319123LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x265 = 13965;
	uint32_t x267 = 1373849U;
	volatile uint64_t t63 = 832LLU;

	t63 = (x265^((x266%x267)*x268));

	if (t63 != 2933565741704573LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x269 = INT32_MIN;
	int64_t x270 = -1LL;
	uint32_t x271 = 433373U;
	static int64_t t64 = -255174342973273414LL;

	t64 = (x269^((x270%x271)*x272));

	if (t64 != -4294967296LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x273 = -1;
	int64_t x274 = 1887557570326LL;
	volatile int8_t x275 = -1;
	volatile int8_t x276 = INT8_MIN;
	int64_t t65 = -26259057212344066LL;

	t65 = (x273^((x274%x275)*x276));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x277 = UINT32_MAX;
	uint8_t x279 = 28U;
	uint64_t x280 = UINT64_MAX;
	volatile uint64_t t66 = 66769843LLU;

	t66 = (x277^((x278%x279)*x280));

	if (t66 != 18446744069414584334LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x281 = -11;
	uint64_t x282 = 20444LLU;
	int64_t x283 = INT64_MIN;
	uint16_t x284 = 152U;
	volatile uint64_t t67 = 3LLU;

	t67 = (x281^((x282%x283)*x284));

	if (t67 != 18446744073706444117LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x285 = UINT32_MAX;
	volatile int8_t x286 = INT8_MIN;
	static volatile int16_t x287 = -1;
	volatile int8_t x288 = INT8_MIN;
	uint32_t t68 = UINT32_MAX;

	t68 = (x285^((x286%x287)*x288));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x293 = -1;
	volatile uint16_t x295 = UINT16_MAX;
	int16_t x296 = INT16_MAX;

	t69 = (x293^((x294%x295)*x296));

	if (t69 != -580336338LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x297 = INT8_MAX;
	volatile uint64_t x299 = 2605LLU;

	t70 = (x297^((x298%x299)*x300));

	if (t70 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x301 = -1;
	int8_t x303 = INT8_MIN;
	uint16_t x304 = 29U;

	t71 = (x301^((x302%x303)*x304));

	if (t71 != -1393) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x309 = 45;
	volatile int8_t x310 = INT8_MIN;
	int64_t x311 = -1LL;
	uint8_t x312 = UINT8_MAX;
	volatile int64_t t72 = 0LL;

	t72 = (x309^((x310%x311)*x312));

	if (t72 != 45LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x317 = INT16_MIN;
	static int64_t x318 = -1LL;
	volatile uint32_t x319 = 491U;
	static int64_t x320 = 347734689LL;
	int64_t t73 = 120846535822514170LL;

	t73 = (x317^((x318%x319)*x320));

	if (t73 != 347766111LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x321 = INT32_MIN;
	static int16_t x322 = INT16_MIN;
	int64_t x323 = INT64_MIN;
	uint32_t x324 = 19U;
	int64_t t74 = -5LL;

	t74 = (x321^((x322%x323)*x324));

	if (t74 != 2146861056LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x325 = INT16_MIN;
	static volatile uint64_t x327 = 6607083722532087579LLU;
	static volatile uint16_t x328 = 456U;
	volatile uint64_t t75 = 897258LLU;

	t75 = (x325^((x326%x327)*x328));

	if (t75 != 12021786919950109648LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x329 = 162673688589LLU;
	static uint16_t x330 = UINT16_MAX;
	static int16_t x331 = -1;
	int8_t x332 = INT8_MIN;
	volatile uint64_t t76 = 43039253332LLU;

	t76 = (x329^((x330%x331)*x332));

	if (t76 != 162673688589LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int32_t x333 = 6212006;
	uint16_t x334 = 4073U;
	static int16_t x335 = -1;
	uint8_t x336 = UINT8_MAX;
	int32_t t77 = -13;

	t77 = (x333^((x334%x335)*x336));

	if (t77 != 6212006) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x337 = -1;
	static uint32_t x338 = UINT32_MAX;
	int16_t x339 = -1;
	static int32_t x340 = -10493;
	static uint32_t t78 = UINT32_MAX;

	t78 = (x337^((x338%x339)*x340));

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x341 = INT8_MIN;
	int8_t x342 = INT8_MIN;
	uint64_t x343 = UINT64_MAX;
	volatile int32_t x344 = INT32_MIN;
	volatile uint64_t t79 = 16869154105773324LLU;

	t79 = (x341^((x342%x343)*x344));

	if (t79 != 18446743798831644544LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x349 = INT32_MIN;
	int64_t x350 = -123695354540477LL;
	volatile int16_t x351 = -1;
	int16_t x352 = -1;

	t80 = (x349^((x350%x351)*x352));

	if (t80 != -2147483648LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x353 = -2;
	int64_t x354 = -1LL;
	uint8_t x355 = UINT8_MAX;
	int8_t x356 = -1;
	int64_t t81 = -6161763328599LL;

	t81 = (x353^((x354%x355)*x356));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x357 = INT8_MIN;
	uint64_t x358 = 250783LLU;
	uint32_t x360 = UINT32_MAX;

	t82 = (x357^((x358%x359)*x360));

	if (t82 != 18446743906205827161LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x361 = -1;
	static int32_t x362 = INT32_MIN;
	static int64_t x363 = -45LL;
	uint16_t x364 = 2U;
	volatile int64_t t83 = 280093912883408LL;

	t83 = (x361^((x362%x363)*x364));

	if (t83 != 75LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x366 = -7;
	static volatile uint64_t t84 = 2LLU;

	t84 = (x365^((x366%x367)*x368));

	if (t84 != 4850LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x370 = 105976604LLU;
	int64_t x371 = INT64_MAX;
	uint64_t x372 = 92859052843957215LLU;
	volatile uint64_t t85 = 123728627340634LLU;

	t85 = (x369^((x370%x371)*x372));

	if (t85 != 10276336924518652323LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x374 = 13LL;
	int8_t x375 = 1;
	int64_t x376 = 3421792805939LL;

	t86 = (x373^((x374%x375)*x376));

	if (t86 != 32767LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x378 = 3;
	uint32_t x379 = 41U;
	volatile uint32_t t87 = 3364292U;

	t87 = (x377^((x378%x379)*x380));

	if (t87 != 744U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x381 = 2926675LLU;
	int64_t x382 = -176882803973LL;
	int16_t x384 = -8873;
	volatile uint64_t t88 = 493410LLU;

	t88 = (x381^((x382%x383)*x384));

	if (t88 != 1569481121002014LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x385 = INT64_MIN;
	int8_t x387 = -1;
	int16_t x388 = INT16_MAX;
	volatile uint64_t t89 = 86572LLU;

	t89 = (x385^((x386%x387)*x388));

	if (t89 != 9235377311940970968LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x389 = 2410673283742150680LLU;
	volatile int32_t x390 = -1;
	int8_t x391 = 1;
	static uint64_t t90 = 722933LLU;

	t90 = (x389^((x390%x391)*x392));

	if (t90 != 2410673283742150680LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x393 = -278385385321382LL;
	int16_t x394 = 816;
	int8_t x395 = -1;
	static uint16_t x396 = 0U;
	static int64_t t91 = -900287LL;

	t91 = (x393^((x394%x395)*x396));

	if (t91 != -278385385321382LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x397 = INT8_MAX;
	uint64_t x398 = UINT64_MAX;
	static int8_t x399 = -1;
	static uint8_t x400 = UINT8_MAX;
	static uint64_t t92 = 11222471LLU;

	t92 = (x397^((x398%x399)*x400));

	if (t92 != 127LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x401 = 28174409;
	int64_t t93 = 2209281909324169014LL;

	t93 = (x401^((x402%x403)*x404));

	if (t93 != 28174409LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x405 = INT8_MIN;
	volatile uint32_t x406 = 3707U;
	uint32_t x407 = 38059664U;
	volatile uint8_t x408 = UINT8_MAX;

	t94 = (x405^((x406%x407)*x408));

	if (t94 != 4294021893U) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x409 = INT8_MAX;
	int64_t x412 = 3593312303LL;
	static int64_t t95 = 505707087306LL;

	t95 = (x409^((x410%x411)*x412));

	if (t95 != -12281941451771LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x413 = 0U;
	static volatile int32_t x415 = INT32_MAX;
	uint16_t x416 = UINT16_MAX;
	volatile uint32_t t96 = 126039913U;

	t96 = (x413^((x414%x415)*x416));

	if (t96 != 4294901761U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x417 = INT64_MIN;
	int32_t x418 = INT32_MAX;
	int64_t x419 = INT64_MIN;
	uint64_t x420 = UINT64_MAX;
	uint64_t t97 = 62LLU;

	t97 = (x417^((x418%x419)*x420));

	if (t97 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x421 = INT8_MIN;
	static volatile uint16_t x423 = UINT16_MAX;
	static volatile uint32_t t98 = 36991U;

	t98 = (x421^((x422%x423)*x424));

	if (t98 != 4294967168U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x425 = INT32_MAX;
	int16_t x426 = INT16_MIN;
	static int8_t x427 = INT8_MIN;
	int8_t x428 = -1;
	static volatile int32_t t99 = INT32_MAX;

	t99 = (x425^((x426%x427)*x428));

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

