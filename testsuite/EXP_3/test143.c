#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = 3709;
int8_t x6 = 4;
int64_t x9 = -781377891531279911LL;
int32_t x11 = INT32_MIN;
uint8_t x19 = UINT8_MAX;
volatile int32_t x27 = INT32_MIN;
uint16_t x29 = 5512U;
int16_t x33 = -1;
volatile int8_t x34 = INT8_MAX;
int64_t x37 = INT64_MIN;
int32_t x38 = -1;
int8_t x41 = -1;
static int64_t x45 = INT64_MIN;
static uint32_t x46 = 245416U;
volatile uint64_t x51 = 54942LLU;
uint64_t t12 = 2415664675LLU;
volatile int8_t x54 = 3;
int16_t x55 = INT16_MIN;
volatile int64_t t14 = -927457779020LL;
int32_t x66 = 7842;
volatile uint64_t t15 = 245826906879933534LLU;
uint16_t x73 = 15076U;
uint16_t x84 = 1U;
int32_t t19 = -4;
int16_t x85 = -1;
int32_t x86 = INT32_MIN;
uint16_t x87 = 176U;
static volatile int32_t t20 = 78213;
uint8_t x91 = UINT8_MAX;
static uint8_t x94 = 5U;
volatile int32_t t22 = 413;
uint16_t x99 = 10737U;
uint32_t x108 = UINT32_MAX;
static uint64_t x109 = 238985220518631522LLU;
int64_t x110 = -52178552508LL;
int8_t x111 = 14;
int64_t t29 = 2711566927399963764LL;
static int64_t x141 = -570329396270288LL;
static uint32_t x146 = 118934915U;
volatile int8_t x147 = -3;
uint8_t x149 = 2U;
uint8_t x150 = 0U;
int16_t x154 = -1;
static int64_t x168 = INT64_MAX;
static volatile int8_t x169 = INT8_MAX;
int64_t x170 = INT64_MAX;
int8_t x171 = -6;
int32_t t41 = -60;
volatile int64_t x194 = INT64_MIN;
static volatile uint64_t t43 = 50682367514LLU;
uint64_t x199 = UINT64_MAX;
static int64_t x233 = 1041862LL;
uint32_t x238 = UINT32_MAX;
uint32_t t49 = 6764U;
int32_t x245 = INT32_MIN;
volatile int32_t x264 = INT32_MIN;
static volatile int32_t x267 = INT32_MIN;
uint32_t x271 = 3U;
static int16_t x295 = 95;
volatile int64_t x296 = 1672458650164LL;
int64_t t60 = -137LL;
static int64_t t62 = 379605884592LL;
int8_t x314 = INT8_MIN;
uint8_t x315 = 16U;
int8_t x319 = INT8_MAX;
int32_t t65 = -34;
int16_t x325 = -73;
int16_t x326 = 231;
volatile int32_t x332 = INT32_MIN;
static volatile int64_t x333 = 292841576602477213LL;
volatile int8_t x334 = INT8_MAX;
static int8_t x336 = 0;
static int64_t x338 = -1634050986279971317LL;
int16_t x342 = INT16_MIN;
uint8_t x343 = 1U;
int32_t t70 = -52919;
int32_t x349 = INT32_MIN;
uint64_t x350 = 984227698804988156LLU;
volatile uint64_t t72 = 23135548LLU;
int64_t x354 = INT64_MIN;
uint64_t x356 = 124420839698462LLU;
static int8_t x361 = INT8_MAX;
int32_t x365 = INT32_MIN;
volatile int32_t t76 = -2368019;
int8_t x369 = -1;
int64_t x372 = INT64_MAX;
static volatile int32_t x374 = INT32_MAX;
int64_t t78 = -10LL;
int32_t x383 = INT32_MIN;
int32_t x390 = INT32_MIN;
int8_t x391 = -18;
static int32_t t82 = -48;
int16_t x394 = 643;
uint64_t x396 = 160222952647LLU;
int64_t x397 = -1548514180755859048LL;
int64_t x402 = INT64_MAX;
static int64_t x413 = -1804546846341521985LL;
uint16_t x421 = UINT16_MAX;
int64_t x424 = INT64_MIN;
int8_t x426 = INT8_MAX;
volatile uint16_t x433 = UINT16_MAX;
volatile uint64_t x438 = UINT64_MAX;
int64_t x448 = -1LL;
volatile int64_t x453 = -13144743633LL;
uint8_t x464 = 43U;


void f0(void) {
	int16_t x1 = -1;
	static int64_t x2 = INT64_MAX;
	int64_t x4 = 1029694LL;
	volatile int64_t t0 = -51LL;

	t0 = ((x1&x2)^(x3+x4));

	if (t0 != 9223372036853742404LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1049534194518017965LL;
	uint8_t x7 = UINT8_MAX;
	volatile uint16_t x8 = UINT16_MAX;
	int64_t t1 = -129LL;

	t1 = ((x5&x6)^(x7+x8));

	if (t1 != 65790LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x10 = -1;
	int16_t x12 = INT16_MAX;
	int64_t t2 = 149990059LL;

	t2 = ((x9&x10)^(x11+x12));

	if (t2 != 781377890052689446LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x13 = -3;
	int8_t x14 = 2;
	uint16_t x15 = 3203U;
	static int64_t x16 = 3026294633705922LL;
	static volatile int64_t t3 = 39855872031LL;

	t3 = ((x13&x14)^(x15+x16));

	if (t3 != 3026294633709125LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = -1;
	uint64_t x18 = 33LLU;
	int32_t x20 = 10;
	volatile uint64_t t4 = 32054759182053LLU;

	t4 = ((x17&x18)^(x19+x20));

	if (t4 != 296LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x21 = 14743673LLU;
	int64_t x22 = -1LL;
	uint8_t x23 = 12U;
	volatile int8_t x24 = 15;
	uint64_t t5 = 3565865598749869LLU;

	t5 = ((x21&x22)^(x23+x24));

	if (t5 != 14743650LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -39;
	static volatile uint16_t x26 = 1424U;
	int32_t x28 = 5;
	int32_t t6 = 2934;

	t6 = ((x25&x26)^(x27+x28));

	if (t6 != -2147482219) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = -195577479445148243LL;
	int8_t x31 = INT8_MIN;
	int16_t x32 = 5;
	volatile int64_t t7 = -31034059149440991LL;

	t7 = ((x29&x30)^(x31+x32));

	if (t7 != -1523LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x35 = -1;
	int64_t x36 = INT64_MAX;
	volatile int64_t t8 = 519330451504LL;

	t8 = ((x33&x34)^(x35+x36));

	if (t8 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x39 = INT16_MIN;
	static uint32_t x40 = 15U;
	volatile int64_t t9 = 338039173908488LL;

	t9 = ((x37&x38)^(x39+x40));

	if (t9 != -9223372032559841265LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = INT8_MIN;
	int32_t x43 = INT32_MIN;
	uint32_t x44 = 62609U;
	uint32_t t10 = 16660958U;

	t10 = ((x41&x42)^(x43+x44));

	if (t10 != 2147420945U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x47 = INT8_MIN;
	uint16_t x48 = 7612U;
	int64_t t11 = -21600LL;

	t11 = ((x45&x46)^(x47+x48));

	if (t11 != 7484LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	uint32_t x50 = UINT32_MAX;
	int16_t x52 = INT16_MAX;

	t12 = ((x49&x50)^(x51+x52));

	if (t12 != 4294891165LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	static int16_t x56 = INT16_MIN;
	int32_t t13 = 45658;

	t13 = ((x53&x54)^(x55+x56));

	if (t13 != -65533) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x61 = INT64_MIN;
	uint16_t x62 = 5704U;
	volatile uint8_t x63 = 17U;
	int8_t x64 = 32;

	t14 = ((x61&x62)^(x63+x64));

	if (t14 != 49LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x65 = 2972057LLU;
	int16_t x67 = 123;
	int32_t x68 = INT32_MIN;

	t15 = ((x65&x66)^(x67+x68));

	if (t15 != 18446744071562074363LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x69 = INT64_MAX;
	int32_t x70 = INT32_MIN;
	int16_t x71 = INT16_MIN;
	static int8_t x72 = -1;
	int64_t t16 = -3LL;

	t16 = ((x69&x70)^(x71+x72));

	if (t16 != -9223372034707324929LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x74 = 2U;
	int8_t x75 = INT8_MIN;
	int8_t x76 = INT8_MIN;
	static int32_t t17 = 2168;

	t17 = ((x73&x74)^(x75+x76));

	if (t17 != -256) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x77 = 0;
	static uint16_t x78 = 3U;
	static int8_t x79 = -1;
	uint32_t x80 = 3U;
	uint32_t t18 = 7762U;

	t18 = ((x77&x78)^(x79+x80));

	if (t18 != 2U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x81 = -307;
	static int16_t x82 = -1;
	uint8_t x83 = 33U;

	t19 = ((x81&x82)^(x83+x84));

	if (t19 != -273) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x88 = INT32_MIN;

	t20 = ((x85&x86)^(x87+x88));

	if (t20 != 176) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x89 = UINT16_MAX;
	int64_t x90 = INT64_MAX;
	int8_t x92 = -1;
	static int64_t t21 = -5581551156LL;

	t21 = ((x89&x90)^(x91+x92));

	if (t21 != 65281LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x93 = INT16_MIN;
	int16_t x95 = INT16_MIN;
	volatile int16_t x96 = INT16_MIN;

	t22 = ((x93&x94)^(x95+x96));

	if (t22 != -65536) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x97 = -1;
	uint8_t x98 = 0U;
	static uint32_t x100 = UINT32_MAX;
	volatile uint32_t t23 = 14930093U;

	t23 = ((x97&x98)^(x99+x100));

	if (t23 != 10736U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x101 = 6U;
	int8_t x102 = -1;
	volatile int8_t x103 = -51;
	volatile uint64_t x104 = 3576LLU;
	volatile uint64_t t24 = 13835171452208LLU;

	t24 = ((x101&x102)^(x103+x104));

	if (t24 != 3523LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x105 = INT16_MAX;
	uint16_t x106 = UINT16_MAX;
	volatile int16_t x107 = -1;
	volatile uint32_t t25 = 201875332U;

	t25 = ((x105&x106)^(x107+x108));

	if (t25 != 4294934529U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x112 = -3;
	static volatile uint64_t t26 = 368410LLU;

	t26 = ((x109&x110)^(x111+x112));

	if (t26 != 238985185520015435LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = INT64_MAX;
	uint32_t x114 = UINT32_MAX;
	uint32_t x115 = UINT32_MAX;
	volatile uint64_t x116 = UINT64_MAX;
	volatile uint64_t t27 = 154121494LLU;

	t27 = ((x113&x114)^(x115+x116));

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = INT8_MAX;
	volatile int8_t x130 = INT8_MIN;
	static int64_t x131 = INT64_MAX;
	volatile int32_t x132 = -1;
	volatile int64_t t28 = -17LL;

	t28 = ((x129&x130)^(x131+x132));

	if (t28 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x133 = 21U;
	int64_t x134 = INT64_MIN;
	int64_t x135 = INT64_MAX;
	static volatile int64_t x136 = INT64_MIN;

	t29 = ((x133&x134)^(x135+x136));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x137 = 0;
	int32_t x138 = INT32_MIN;
	int16_t x139 = INT16_MIN;
	volatile int64_t x140 = INT64_MAX;
	static volatile int64_t t30 = -14776268961839LL;

	t30 = ((x137&x138)^(x139+x140));

	if (t30 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x142 = 1111U;
	volatile int64_t x143 = INT64_MIN;
	uint16_t x144 = UINT16_MAX;
	volatile int64_t t31 = -53329043044061051LL;

	t31 = ((x141&x142)^(x143+x144));

	if (t31 != -9223372036854710289LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x145 = UINT16_MAX;
	volatile int32_t x148 = -182479;
	uint32_t t32 = 802274670U;

	t32 = ((x145&x146)^(x147+x148));

	if (t32 != 4294834861U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x151 = INT16_MIN;
	static int8_t x152 = INT8_MIN;
	int32_t t33 = -6105;

	t33 = ((x149&x150)^(x151+x152));

	if (t33 != -32896) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = INT64_MAX;
	int16_t x155 = INT16_MAX;
	uint32_t x156 = 6U;
	volatile int64_t t34 = -209889378LL;

	t34 = ((x153&x154)^(x155+x156));

	if (t34 != 9223372036854743034LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x157 = INT64_MAX;
	volatile int64_t x158 = 63811498891LL;
	volatile int16_t x159 = INT16_MAX;
	int32_t x160 = 5;
	int64_t t35 = -4750341875765LL;

	t35 = ((x157&x158)^(x159+x160));

	if (t35 != 63811531663LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = INT64_MIN;
	int16_t x162 = INT16_MAX;
	int16_t x163 = INT16_MIN;
	int64_t x164 = INT64_MAX;
	static int64_t t36 = 1497219369344141LL;

	t36 = ((x161&x162)^(x163+x164));

	if (t36 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x165 = INT64_MAX;
	static volatile int8_t x166 = INT8_MIN;
	uint64_t x167 = 579LLU;
	static volatile uint64_t t37 = 2975840427778906LLU;

	t37 = ((x165&x166)^(x167+x168));

	if (t37 != 18446744073709551042LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x172 = INT8_MIN;
	int64_t t38 = 1796786721021LL;

	t38 = ((x169&x170)^(x171+x172));

	if (t38 != -251LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x173 = INT64_MIN;
	static volatile int32_t x174 = INT32_MIN;
	int16_t x175 = -1;
	int32_t x176 = INT32_MAX;
	int64_t t39 = -992337392032LL;

	t39 = ((x173&x174)^(x175+x176));

	if (t39 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x177 = -1LL;
	volatile int64_t x178 = INT64_MAX;
	uint8_t x179 = 106U;
	int8_t x180 = 62;
	static int64_t t40 = -16926273703187857LL;

	t40 = ((x177&x178)^(x179+x180));

	if (t40 != 9223372036854775639LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x181 = INT16_MIN;
	volatile int8_t x182 = -1;
	int16_t x183 = INT16_MAX;
	uint16_t x184 = 24327U;

	t41 = ((x181&x182)^(x183+x184));

	if (t41 != -41210) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = -1;
	int16_t x186 = INT16_MIN;
	static int16_t x187 = INT16_MIN;
	volatile int16_t x188 = INT16_MAX;
	int32_t t42 = -354;

	t42 = ((x185&x186)^(x187+x188));

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x193 = 1693054310U;
	static int16_t x195 = 1;
	volatile uint64_t x196 = UINT64_MAX;

	t43 = ((x193&x194)^(x195+x196));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x197 = INT32_MIN;
	int64_t x198 = -6125LL;
	uint8_t x200 = 127U;
	uint64_t t44 = 13458962717LLU;

	t44 = ((x197&x198)^(x199+x200));

	if (t44 != 18446744071562068094LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x209 = INT64_MAX;
	static volatile uint8_t x210 = UINT8_MAX;
	uint8_t x211 = 34U;
	int8_t x212 = 1;
	int64_t t45 = -313LL;

	t45 = ((x209&x210)^(x211+x212));

	if (t45 != 220LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x217 = INT64_MIN;
	int8_t x218 = INT8_MIN;
	static uint32_t x219 = UINT32_MAX;
	int64_t x220 = INT64_MIN;
	volatile int64_t t46 = 29287452944437LL;

	t46 = ((x217&x218)^(x219+x220));

	if (t46 != 4294967295LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x229 = INT64_MAX;
	static uint16_t x230 = 8U;
	int16_t x231 = INT16_MIN;
	static volatile int64_t x232 = INT64_MAX;
	static volatile int64_t t47 = 13LL;

	t47 = ((x229&x230)^(x231+x232));

	if (t47 != 9223372036854743031LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x234 = -575136259989040LL;
	int8_t x235 = INT8_MIN;
	int32_t x236 = INT32_MAX;
	static int64_t t48 = 152035851812LL;

	t48 = ((x233&x234)^(x235+x236));

	if (t48 != 2147049151LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x237 = INT8_MIN;
	int16_t x239 = INT16_MIN;
	int16_t x240 = INT16_MIN;

	t49 = ((x237&x238)^(x239+x240));

	if (t49 != 65408U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x241 = INT64_MAX;
	int8_t x242 = INT8_MIN;
	uint16_t x243 = UINT16_MAX;
	volatile int32_t x244 = INT32_MIN;
	volatile int64_t t50 = -1957528LL;

	t50 = ((x241&x242)^(x243+x244));

	if (t50 != -9223372034707357569LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x246 = INT64_MIN;
	volatile int16_t x247 = INT16_MIN;
	uint16_t x248 = UINT16_MAX;
	int64_t t51 = 20345403LL;

	t51 = ((x245&x246)^(x247+x248));

	if (t51 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x249 = INT8_MIN;
	int64_t x250 = -1LL;
	volatile int32_t x251 = INT32_MIN;
	uint64_t x252 = UINT64_MAX;
	volatile uint64_t t52 = 17019483852346332LLU;

	t52 = ((x249&x250)^(x251+x252));

	if (t52 != 2147483775LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x261 = INT64_MAX;
	int16_t x262 = INT16_MIN;
	uint64_t x263 = 58103698LLU;
	uint64_t t53 = 6365LLU;

	t53 = ((x261&x262)^(x263+x264));

	if (t53 != 9223372038944135058LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x265 = 7755550LL;
	uint16_t x266 = 851U;
	static uint16_t x268 = UINT16_MAX;
	volatile int64_t t54 = 36375595439111334LL;

	t54 = ((x265&x266)^(x267+x268));

	if (t54 != -2147418899LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x269 = INT16_MAX;
	volatile int64_t x270 = INT64_MIN;
	uint8_t x272 = UINT8_MAX;
	volatile int64_t t55 = -1LL;

	t55 = ((x269&x270)^(x271+x272));

	if (t55 != 258LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x277 = INT16_MIN;
	int16_t x278 = -4142;
	uint8_t x279 = 9U;
	uint8_t x280 = UINT8_MAX;
	static volatile int32_t t56 = 94555;

	t56 = ((x277&x278)^(x279+x280));

	if (t56 != -32504) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x281 = UINT64_MAX;
	uint16_t x282 = 6648U;
	volatile int8_t x283 = INT8_MIN;
	uint64_t x284 = UINT64_MAX;
	volatile uint64_t t57 = 3585025144LLU;

	t57 = ((x281&x282)^(x283+x284));

	if (t57 != 18446744073709545095LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x285 = 7965U;
	static volatile int16_t x286 = -3200;
	int64_t x287 = 11159LL;
	int64_t x288 = -1LL;
	volatile int64_t t58 = 135190096LL;

	t58 = ((x285&x286)^(x287+x288));

	if (t58 != 14486LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x289 = INT64_MIN;
	int32_t x290 = INT32_MIN;
	uint64_t x291 = UINT64_MAX;
	uint32_t x292 = UINT32_MAX;
	volatile uint64_t t59 = 3016LLU;

	t59 = ((x289&x290)^(x291+x292));

	if (t59 != 9223372041149743102LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x293 = -1;
	int16_t x294 = INT16_MAX;

	t60 = ((x293&x294)^(x295+x296));

	if (t60 != 1672458648940LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x301 = -2;
	static int16_t x302 = INT16_MIN;
	volatile int32_t x303 = -1;
	uint64_t x304 = UINT64_MAX;
	volatile uint64_t t61 = 2077149235228LLU;

	t61 = ((x301&x302)^(x303+x304));

	if (t61 != 32766LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x305 = INT16_MAX;
	static int64_t x306 = INT64_MIN;
	int32_t x307 = INT32_MIN;
	int16_t x308 = 0;

	t62 = ((x305&x306)^(x307+x308));

	if (t62 != -2147483648LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x309 = 39342566LLU;
	volatile uint64_t x310 = 2057LLU;
	volatile uint8_t x311 = UINT8_MAX;
	static uint8_t x312 = 1U;
	uint64_t t63 = 2829371LLU;

	t63 = ((x309&x310)^(x311+x312));

	if (t63 != 256LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x313 = INT16_MAX;
	uint8_t x316 = UINT8_MAX;
	static volatile int32_t t64 = 259189628;

	t64 = ((x313&x314)^(x315+x316));

	if (t64 != 32399) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x317 = 0;
	uint16_t x318 = UINT16_MAX;
	uint16_t x320 = 2302U;

	t65 = ((x317&x318)^(x319+x320));

	if (t65 != 2429) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x327 = 255U;
	volatile int32_t x328 = 22465104;
	uint32_t t66 = 4U;

	t66 = ((x325&x326)^(x327+x328));

	if (t66 != 22465512U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x329 = 3;
	uint32_t x330 = UINT32_MAX;
	volatile uint32_t x331 = UINT32_MAX;
	volatile uint32_t t67 = 757411U;

	t67 = ((x329&x330)^(x331+x332));

	if (t67 != 2147483644U) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x335 = -37;
	int64_t t68 = -12968LL;

	t68 = ((x333&x334)^(x335+x336));

	if (t68 != -58LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x337 = UINT8_MAX;
	int16_t x339 = INT16_MAX;
	volatile int32_t x340 = -1;
	volatile int64_t t69 = 21LL;

	t69 = ((x337&x338)^(x339+x340));

	if (t69 != 32757LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x341 = INT32_MIN;
	static int16_t x344 = INT16_MAX;

	t70 = ((x341&x342)^(x343+x344));

	if (t70 != -2147450880) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x345 = INT16_MIN;
	int16_t x346 = INT16_MIN;
	int8_t x347 = -1;
	static int64_t x348 = -1LL;
	static volatile int64_t t71 = -523075652375827LL;

	t71 = ((x345&x346)^(x347+x348));

	if (t71 != 32766LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x351 = 26311U;
	int16_t x352 = -7;

	t72 = ((x349&x350)^(x351+x352));

	if (t72 != 984227698312242880LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x353 = -12;
	int8_t x355 = INT8_MAX;
	static volatile uint64_t t73 = 7056290204477265LLU;

	t73 = ((x353&x354)^(x355+x356));

	if (t73 != 9223496457694474397LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x357 = 127099685U;
	static uint64_t x358 = 75935419LLU;
	static volatile int64_t x359 = 589789149710894364LL;
	volatile int8_t x360 = 12;
	volatile uint64_t t74 = 2070085136LLU;

	t74 = ((x357&x358)^(x359+x360));

	if (t74 != 589789149769754377LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x362 = UINT16_MAX;
	int8_t x363 = INT8_MIN;
	uint64_t x364 = 5068456898877747LLU;
	volatile uint64_t t75 = 7101574LLU;

	t75 = ((x361&x362)^(x363+x364));

	if (t75 != 5068456898877644LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x366 = 0;
	int16_t x367 = INT16_MIN;
	static int8_t x368 = INT8_MAX;

	t76 = ((x365&x366)^(x367+x368));

	if (t76 != -32641) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x370 = 1;
	int64_t x371 = -1708080724269833LL;
	volatile int64_t t77 = -238335196LL;

	t77 = ((x369&x370)^(x371+x372));

	if (t77 != 9221663956130505975LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x373 = INT16_MIN;
	volatile int64_t x375 = INT64_MIN;
	uint16_t x376 = 62U;

	t78 = ((x373&x374)^(x375+x376));

	if (t78 != -9223372034707324866LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x377 = 50369U;
	volatile uint8_t x378 = 14U;
	static int16_t x379 = INT16_MIN;
	int8_t x380 = -1;
	uint32_t t79 = 18048U;

	t79 = ((x377&x378)^(x379+x380));

	if (t79 != 4294934527U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x381 = INT8_MIN;
	uint16_t x382 = UINT16_MAX;
	uint8_t x384 = 0U;
	volatile int32_t t80 = 1;

	t80 = ((x381&x382)^(x383+x384));

	if (t80 != -2147418240) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x385 = INT64_MIN;
	int8_t x386 = -1;
	int16_t x387 = INT16_MIN;
	int64_t x388 = -1LL;
	static volatile int64_t t81 = 1399999LL;

	t81 = ((x385&x386)^(x387+x388));

	if (t81 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x389 = 896U;
	int32_t x392 = -1;

	t82 = ((x389&x390)^(x391+x392));

	if (t82 != -19) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x393 = INT16_MAX;
	int8_t x395 = INT8_MAX;
	static volatile uint64_t t83 = 29LLU;

	t83 = ((x393&x394)^(x395+x396));

	if (t83 != 160222953413LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x398 = -214;
	int8_t x399 = -1;
	uint64_t x400 = 23406283369069556LLU;
	uint64_t t84 = 183556LLU;

	t84 = ((x397&x398)^(x399+x400));

	if (t84 != 16920504744359617275LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x401 = 27479LLU;
	int32_t x403 = 160334;
	int64_t x404 = INT64_MIN;
	static volatile uint64_t t85 = 749708941129484951LLU;

	t85 = ((x401&x402)^(x403+x404));

	if (t85 != 9223372036854913305LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x405 = 1295U;
	uint32_t x406 = UINT32_MAX;
	int32_t x407 = INT32_MIN;
	uint16_t x408 = UINT16_MAX;
	uint32_t t86 = 955435999U;

	t86 = ((x405&x406)^(x407+x408));

	if (t86 != 2147547888U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x409 = INT16_MIN;
	static volatile uint16_t x410 = 29U;
	int16_t x411 = INT16_MIN;
	int8_t x412 = 0;
	volatile int32_t t87 = -66;

	t87 = ((x409&x410)^(x411+x412));

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x414 = 3U;
	int64_t x415 = INT64_MAX;
	static uint64_t x416 = 16LLU;
	uint64_t t88 = 1547LLU;

	t88 = ((x413&x414)^(x415+x416));

	if (t88 != 9223372036854775820LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x417 = 29519U;
	int32_t x418 = -1;
	uint32_t x419 = 1U;
	int8_t x420 = 1;
	uint32_t t89 = 2U;

	t89 = ((x417&x418)^(x419+x420));

	if (t89 != 29517U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x422 = -1;
	static int32_t x423 = 3274;
	volatile int64_t t90 = -595LL;

	t90 = ((x421&x422)^(x423+x424));

	if (t90 != -9223372036854713547LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x425 = 508U;
	int64_t x427 = INT64_MIN;
	int64_t x428 = 1535487LL;
	int64_t t91 = -7787LL;

	t91 = ((x425&x426)^(x427+x428));

	if (t91 != -9223372036853240445LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x429 = INT32_MIN;
	uint16_t x430 = 2U;
	static volatile int16_t x431 = -1;
	static uint64_t x432 = UINT64_MAX;
	uint64_t t92 = 6880231368332362LLU;

	t92 = ((x429&x430)^(x431+x432));

	if (t92 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x434 = UINT32_MAX;
	uint64_t x435 = 62495145021LLU;
	uint8_t x436 = 9U;
	static uint64_t t93 = 679655LLU;

	t93 = ((x433&x434)^(x435+x436));

	if (t93 != 62495179705LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x437 = INT16_MAX;
	uint64_t x439 = 4583497335503LLU;
	static int8_t x440 = INT8_MIN;
	uint64_t t94 = 41953844LLU;

	t94 = ((x437&x438)^(x439+x440));

	if (t94 != 4583497366960LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x445 = 1425133874U;
	int16_t x446 = 0;
	int32_t x447 = INT32_MAX;
	int64_t t95 = 103389873669847LL;

	t95 = ((x445&x446)^(x447+x448));

	if (t95 != 2147483646LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x449 = INT64_MIN;
	int64_t x450 = INT64_MIN;
	static uint32_t x451 = UINT32_MAX;
	int32_t x452 = INT32_MAX;
	static int64_t t96 = 21LL;

	t96 = ((x449&x450)^(x451+x452));

	if (t96 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x454 = INT16_MIN;
	int8_t x455 = INT8_MIN;
	volatile uint64_t x456 = UINT64_MAX;
	volatile uint64_t t97 = 1222797502117398970LLU;

	t97 = ((x453&x454)^(x455+x456));

	if (t97 != 13144751999LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x457 = -1LL;
	int8_t x458 = -1;
	volatile int64_t x459 = INT64_MIN;
	uint32_t x460 = UINT32_MAX;
	static volatile int64_t t98 = -14520719510094LL;

	t98 = ((x457&x458)^(x459+x460));

	if (t98 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x461 = 15525LL;
	int16_t x462 = INT16_MIN;
	int8_t x463 = INT8_MAX;
	static volatile int64_t t99 = 187476LL;

	t99 = ((x461&x462)^(x463+x464));

	if (t99 != 170LL) { NG(); } else { ; }
	
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

