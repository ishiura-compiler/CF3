#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x3 = INT64_MIN;
static int64_t t0 = -177230763280734162LL;
static volatile uint32_t x6 = UINT32_MAX;
static uint16_t x7 = 15U;
volatile int16_t x18 = -546;
static int16_t x20 = -1;
int16_t x22 = INT16_MIN;
volatile int64_t x24 = 251921264LL;
int8_t x28 = INT8_MIN;
int64_t x30 = -1LL;
volatile int64_t t6 = 21128LL;
uint16_t x39 = 1U;
uint16_t x41 = UINT16_MAX;
int64_t x44 = INT64_MIN;
volatile int64_t t8 = -185262LL;
int32_t x58 = 181260;
volatile int64_t x59 = -1LL;
uint64_t x61 = 3021795985LLU;
int16_t x69 = INT16_MIN;
uint16_t x70 = 1756U;
int8_t x75 = -1;
uint64_t x85 = UINT64_MAX;
uint64_t x97 = 69703297158598178LLU;
int16_t x104 = 6274;
int8_t x105 = INT8_MIN;
int64_t x107 = INT64_MIN;
volatile uint64_t x108 = 48LLU;
uint16_t x127 = 962U;
int8_t x128 = 12;
int64_t x129 = INT64_MAX;
uint32_t x140 = 37U;
uint64_t x154 = UINT64_MAX;
uint8_t x163 = 5U;
int8_t x165 = INT8_MAX;
uint64_t t30 = 239389811106LLU;
uint16_t x169 = UINT16_MAX;
uint8_t x182 = UINT8_MAX;
static volatile int16_t x183 = 1;
volatile int64_t x186 = -17649402469489691LL;
static int64_t x189 = 27231925680LL;
volatile uint64_t t37 = 126560424714171LLU;
uint64_t x209 = 118200146LLU;
uint64_t t39 = 204LLU;
int8_t x215 = INT8_MIN;
int32_t x216 = -1;
volatile int8_t x221 = INT8_MIN;
static uint64_t x222 = 1165315423831LLU;
int64_t x251 = 17795527755801LL;
static int32_t x252 = INT32_MAX;
uint16_t x255 = 2U;
int32_t x259 = -1;
uint8_t x260 = UINT8_MAX;
int64_t x268 = INT64_MAX;
int8_t x271 = -1;
int8_t x274 = INT8_MAX;
int8_t x280 = INT8_MIN;
volatile uint64_t t52 = 464234834852LLU;
uint16_t x295 = 5U;
uint64_t x311 = UINT64_MAX;
volatile uint64_t t55 = 864525036225760239LLU;
volatile uint8_t x315 = 36U;
uint64_t x323 = 8825449878001129LLU;
int32_t x325 = INT32_MIN;
uint64_t t58 = 211665209371207LLU;
uint64_t x330 = 33019147445382LLU;
int8_t x336 = -1;
volatile uint8_t x343 = 1U;
volatile int8_t x344 = INT8_MIN;
static int8_t x348 = INT8_MIN;
static volatile int32_t x351 = -364742;
int64_t x375 = -572047141898729962LL;
int32_t x384 = INT32_MIN;
int32_t x392 = -218;
uint32_t t72 = 1140U;
uint32_t x408 = 1239987U;
volatile uint32_t t74 = 7156651U;
volatile int32_t t75 = -11808893;
int16_t x413 = -25;
static int16_t x415 = INT16_MAX;
static uint64_t x421 = 126477928755LLU;
int16_t x423 = 1531;
uint16_t x426 = 646U;
static int8_t x427 = INT8_MIN;
static int8_t x438 = INT8_MIN;
int16_t x440 = 732;
uint64_t t81 = 3473429LLU;
int64_t t82 = -358491120418997LL;
int16_t x460 = INT16_MIN;
int64_t x464 = INT64_MIN;
volatile int64_t t86 = -3064227220375397320LL;
uint64_t x481 = 121553997042LLU;
uint8_t x485 = 22U;
int64_t x494 = INT64_MAX;
uint32_t x496 = UINT32_MAX;
uint32_t x502 = UINT32_MAX;
volatile uint32_t x505 = 35020493U;
uint32_t t97 = 3U;
volatile int64_t x526 = -3835371205557545805LL;
static volatile uint64_t t99 = 296LLU;


void f0(void) {
	int32_t x1 = 243481;
	int32_t x2 = 2094;
	int64_t x4 = 76734252LL;

	t0 = (((x1-x2)%x3)*x4);

	if (t0 != 18522650887524LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 5U;
	uint16_t x8 = 3118U;
	uint32_t t1 = 20780490U;

	t1 = (((x5-x6)%x7)*x8);

	if (t1 != 18708U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = 1;
	volatile int64_t x14 = -1LL;
	uint16_t x15 = UINT16_MAX;
	int8_t x16 = INT8_MIN;
	volatile int64_t t2 = -1359390691304LL;

	t2 = (((x13-x14)%x15)*x16);

	if (t2 != -256LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = UINT16_MAX;
	int16_t x19 = INT16_MIN;
	int32_t t3 = -1251;

	t3 = (((x17-x18)%x19)*x20);

	if (t3 != -545) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x21 = INT8_MIN;
	int32_t x23 = INT32_MIN;
	volatile int64_t t4 = 3397944611964209LL;

	t4 = (((x21-x22)%x23)*x24);

	if (t4 != 8222710056960LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -1LL;
	int32_t x26 = 217792;
	uint16_t x27 = UINT16_MAX;
	volatile int64_t t5 = 126703251LL;

	t5 = (((x25-x26)%x27)*x28);

	if (t5 != 2712064LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MAX;
	volatile int64_t x31 = 68196833653157LL;
	int16_t x32 = INT16_MIN;

	t6 = (((x29-x30)%x31)*x32);

	if (t6 != -70368744177664LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x37 = 69LLU;
	int64_t x38 = INT64_MIN;
	uint64_t x40 = 52079011LLU;
	uint64_t t7 = 55LLU;

	t7 = (((x37-x38)%x39)*x40);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x42 = -1;
	static int8_t x43 = 1;

	t8 = (((x41-x42)%x43)*x44);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x49 = INT8_MIN;
	static int16_t x50 = -1;
	static uint64_t x51 = UINT64_MAX;
	static uint64_t x52 = UINT64_MAX;
	volatile uint64_t t9 = 4LLU;

	t9 = (((x49-x50)%x51)*x52);

	if (t9 != 127LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x57 = 51072371679647693LL;
	int64_t x60 = -436961378LL;
	int64_t t10 = 16040LL;

	t10 = (((x57-x58)%x59)*x60);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x62 = 0U;
	int64_t x63 = -30284082LL;
	uint16_t x64 = UINT16_MAX;
	volatile uint64_t t11 = 116123050753249474LLU;

	t11 = (((x61-x62)%x63)*x64);

	if (t11 != 198033399876975LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x71 = INT16_MAX;
	volatile int16_t x72 = INT16_MIN;
	int32_t t12 = 30;

	t12 = (((x69-x70)%x71)*x72);

	if (t12 != 57573376) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x73 = 25781282965LLU;
	static uint32_t x74 = UINT32_MAX;
	static int32_t x76 = -1;
	volatile uint64_t t13 = 14641434002LLU;

	t13 = (((x73-x74)%x75)*x76);

	if (t13 != 18446744052223235946LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x86 = 147016344549376LLU;
	uint32_t x87 = 3U;
	int8_t x88 = -1;
	static volatile uint64_t t14 = 9016959468594049LLU;

	t14 = (((x85-x86)%x87)*x88);

	if (t14 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x98 = 803U;
	uint32_t x99 = UINT32_MAX;
	int8_t x100 = -1;
	volatile uint64_t t15 = 1249269LLU;

	t15 = (((x97-x98)%x99)*x100);

	if (t15 != 18446744071364448826LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x101 = 2406LLU;
	uint8_t x102 = 15U;
	int32_t x103 = INT32_MIN;
	uint64_t t16 = 718651LLU;

	t16 = (((x101-x102)%x103)*x104);

	if (t16 != 15001134LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x106 = 0U;
	volatile uint64_t t17 = 443553268LLU;

	t17 = (((x105-x106)%x107)*x108);

	if (t17 != 18446744073709545472LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x109 = 21556U;
	uint8_t x110 = 22U;
	int16_t x111 = -1;
	volatile uint64_t x112 = 1711257519LLU;
	uint64_t t18 = 9981068456128LLU;

	t18 = (((x109-x110)%x111)*x112);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x117 = 9U;
	uint16_t x118 = UINT16_MAX;
	uint8_t x119 = 13U;
	uint64_t x120 = 25832817885076843LLU;
	volatile uint64_t t19 = 10166188718LLU;

	t19 = (((x117-x118)%x119)*x120);

	if (t19 != 18291747166399090558LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x121 = -1;
	volatile int8_t x122 = -1;
	int8_t x123 = -1;
	int16_t x124 = INT16_MAX;
	static int32_t t20 = 65463467;

	t20 = (((x121-x122)%x123)*x124);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x125 = 1U;
	uint8_t x126 = UINT8_MAX;
	volatile int32_t t21 = -411;

	t21 = (((x125-x126)%x127)*x128);

	if (t21 != -3048) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x130 = 124446540U;
	int16_t x131 = -1;
	int64_t x132 = INT64_MIN;
	int64_t t22 = -49678LL;

	t22 = (((x129-x130)%x131)*x132);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x133 = INT64_MAX;
	volatile int64_t x134 = INT64_MAX;
	int64_t x135 = INT64_MAX;
	int64_t x136 = -615LL;
	static volatile int64_t t23 = 1LL;

	t23 = (((x133-x134)%x135)*x136);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x137 = 185749U;
	uint32_t x138 = 823729201U;
	uint8_t x139 = 4U;
	static volatile uint32_t t24 = 14403906U;

	t24 = (((x137-x138)%x139)*x140);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x141 = 2336898075600338LL;
	uint16_t x142 = 3477U;
	uint16_t x143 = UINT16_MAX;
	uint32_t x144 = UINT32_MAX;
	volatile int64_t t25 = -127LL;

	t25 = (((x141-x142)%x143)*x144);

	if (t25 != 247759483379370LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x145 = 6;
	volatile int64_t x146 = INT64_MAX;
	int16_t x147 = -1;
	static uint16_t x148 = 1U;
	volatile int64_t t26 = -123267300279LL;

	t26 = (((x145-x146)%x147)*x148);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x153 = 2U;
	int64_t x155 = INT64_MAX;
	uint64_t x156 = UINT64_MAX;
	uint64_t t27 = 894696LLU;

	t27 = (((x153-x154)%x155)*x156);

	if (t27 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x157 = UINT8_MAX;
	int64_t x158 = INT64_MAX;
	volatile uint64_t x159 = 348950LLU;
	static int8_t x160 = INT8_MIN;
	uint64_t t28 = 2LLU;

	t28 = (((x157-x158)%x159)*x160);

	if (t28 != 18446744073689357824LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x161 = 7231492328LL;
	uint16_t x162 = UINT16_MAX;
	uint64_t x164 = 8701511318089LLU;
	uint64_t t29 = 969420649131821LLU;

	t29 = (((x161-x162)%x163)*x164);

	if (t29 != 26104533954267LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x166 = UINT64_MAX;
	int8_t x167 = INT8_MAX;
	int8_t x168 = INT8_MIN;

	t30 = (((x165-x166)%x167)*x168);

	if (t30 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x170 = 1;
	int8_t x171 = 18;
	static int64_t x172 = -1LL;
	volatile int64_t t31 = -775317946784356476LL;

	t31 = (((x169-x170)%x171)*x172);

	if (t31 != -14LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x173 = UINT16_MAX;
	int16_t x174 = 1;
	uint8_t x175 = 6U;
	int64_t x176 = 7LL;
	static int64_t t32 = -114203280303LL;

	t32 = (((x173-x174)%x175)*x176);

	if (t32 != 14LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x177 = -12;
	int8_t x178 = -33;
	uint8_t x179 = 5U;
	int16_t x180 = -11499;
	int32_t t33 = 24788563;

	t33 = (((x177-x178)%x179)*x180);

	if (t33 != -11499) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x181 = 14406036LL;
	static uint16_t x184 = UINT16_MAX;
	int64_t t34 = 671120LL;

	t34 = (((x181-x182)%x183)*x184);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x185 = -1;
	int64_t x187 = -1LL;
	static uint8_t x188 = 1U;
	static int64_t t35 = 12721515379813019LL;

	t35 = (((x185-x186)%x187)*x188);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x190 = INT16_MAX;
	volatile int32_t x191 = 144;
	int8_t x192 = INT8_MIN;
	volatile int64_t t36 = -1728803172820LL;

	t36 = (((x189-x190)%x191)*x192);

	if (t36 != -8320LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x201 = 12U;
	int64_t x202 = -5236556268199LL;
	int16_t x203 = INT16_MAX;
	uint64_t x204 = 292LLU;

	t37 = (((x201-x202)%x203)*x204);

	if (t37 != 889724LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x205 = -1LL;
	int64_t x206 = -1LL;
	int32_t x207 = INT32_MIN;
	int16_t x208 = INT16_MIN;
	volatile int64_t t38 = 881LL;

	t38 = (((x205-x206)%x207)*x208);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x210 = 61U;
	int64_t x211 = INT64_MIN;
	volatile int8_t x212 = INT8_MIN;

	t39 = (((x209-x210)%x211)*x212);

	if (t39 != 18446744058579940736LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x213 = 55U;
	volatile uint32_t x214 = UINT32_MAX;
	static uint32_t t40 = 1U;

	t40 = (((x213-x214)%x215)*x216);

	if (t40 != 4294967240U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x217 = UINT64_MAX;
	volatile int64_t x218 = INT64_MIN;
	uint64_t x219 = UINT64_MAX;
	int16_t x220 = -114;
	static uint64_t t41 = 33477582135LLU;

	t41 = (((x217-x218)%x219)*x220);

	if (t41 != 114LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x223 = -1;
	int32_t x224 = INT32_MIN;
	volatile uint64_t t42 = 432519LLU;

	t42 = (((x221-x222)%x223)*x224);

	if (t42 != 12185367763350454272LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x229 = UINT8_MAX;
	int64_t x230 = INT64_MAX;
	int16_t x231 = -1;
	int32_t x232 = -1;
	int64_t t43 = -7345LL;

	t43 = (((x229-x230)%x231)*x232);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x233 = 2331860608LL;
	uint32_t x234 = UINT32_MAX;
	int16_t x235 = -1;
	uint8_t x236 = 2U;
	int64_t t44 = -5411464732143LL;

	t44 = (((x233-x234)%x235)*x236);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x237 = INT8_MIN;
	int8_t x238 = INT8_MIN;
	int32_t x239 = INT32_MIN;
	uint8_t x240 = UINT8_MAX;
	int32_t t45 = 3956568;

	t45 = (((x237-x238)%x239)*x240);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x249 = -1;
	int8_t x250 = -1;
	volatile int64_t t46 = -14631141599761493LL;

	t46 = (((x249-x250)%x251)*x252);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x253 = INT8_MIN;
	uint16_t x254 = UINT16_MAX;
	static int16_t x256 = 1554;
	static volatile int32_t t47 = -581634197;

	t47 = (((x253-x254)%x255)*x256);

	if (t47 != -1554) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x257 = INT16_MAX;
	static uint8_t x258 = 11U;
	int32_t t48 = -107883;

	t48 = (((x257-x258)%x259)*x260);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x265 = 6703408457LLU;
	uint32_t x266 = 37395283U;
	uint64_t x267 = 435947578689044LLU;
	volatile uint64_t t49 = 928182793327LLU;

	t49 = (((x265-x266)%x267)*x268);

	if (t49 != 18446744067043538442LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x269 = INT8_MIN;
	static int16_t x270 = -6407;
	int64_t x272 = INT64_MIN;
	int64_t t50 = -173LL;

	t50 = (((x269-x270)%x271)*x272);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x273 = 9881;
	int8_t x275 = -1;
	static int16_t x276 = INT16_MIN;
	static volatile int32_t t51 = -236678;

	t51 = (((x273-x274)%x275)*x276);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x277 = UINT64_MAX;
	volatile int8_t x278 = 1;
	int16_t x279 = -1;

	t52 = (((x277-x278)%x279)*x280);

	if (t52 != 256LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x293 = -15461892158720631LL;
	uint16_t x294 = 511U;
	uint8_t x296 = 0U;
	volatile int64_t t53 = -24991267789LL;

	t53 = (((x293-x294)%x295)*x296);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x297 = -1;
	uint16_t x298 = 134U;
	int32_t x299 = INT32_MAX;
	int8_t x300 = INT8_MIN;
	int32_t t54 = -54;

	t54 = (((x297-x298)%x299)*x300);

	if (t54 != 17280) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x309 = 151U;
	int64_t x310 = INT64_MAX;
	int64_t x312 = -1LL;

	t55 = (((x309-x310)%x311)*x312);

	if (t55 != 9223372036854775656LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x313 = -1;
	uint8_t x314 = 0U;
	int16_t x316 = INT16_MIN;
	volatile int32_t t56 = -216268854;

	t56 = (((x313-x314)%x315)*x316);

	if (t56 != 32768) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x321 = -1LL;
	volatile uint64_t x322 = 109165593762225LLU;
	volatile int8_t x324 = INT8_MAX;
	static volatile uint64_t t57 = 6276LLU;

	t57 = (((x321-x322)%x323)*x324);

	if (t57 != 183472212865582060LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x326 = INT32_MIN;
	uint64_t x327 = UINT64_MAX;
	static volatile uint32_t x328 = 6722U;

	t58 = (((x325-x326)%x327)*x328);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x329 = INT32_MAX;
	static uint64_t x331 = 4708080958396LLU;
	static int32_t x332 = INT32_MIN;
	uint64_t t59 = 575131307437409155LLU;

	t59 = (((x329-x330)%x331)*x332);

	if (t59 != 294704599116283904LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x333 = INT8_MIN;
	static int16_t x334 = -1;
	uint16_t x335 = UINT16_MAX;
	volatile int32_t t60 = 41;

	t60 = (((x333-x334)%x335)*x336);

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x341 = -1;
	volatile int16_t x342 = 8380;
	int32_t t61 = 560;

	t61 = (((x341-x342)%x343)*x344);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x345 = 1;
	uint8_t x346 = 3U;
	volatile uint32_t x347 = UINT32_MAX;
	uint32_t t62 = 2063U;

	t62 = (((x345-x346)%x347)*x348);

	if (t62 != 256U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x349 = UINT32_MAX;
	volatile uint64_t x350 = 26LLU;
	int32_t x352 = INT32_MAX;
	volatile uint64_t t63 = 0LLU;

	t63 = (((x349-x350)%x351)*x352);

	if (t63 != 9223371974577750043LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x353 = INT64_MIN;
	static volatile uint16_t x354 = 0U;
	static int32_t x355 = INT32_MIN;
	uint32_t x356 = UINT32_MAX;
	static int64_t t64 = -1LL;

	t64 = (((x353-x354)%x355)*x356);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x357 = INT8_MIN;
	int16_t x358 = INT16_MAX;
	static uint32_t x359 = 14U;
	static int64_t x360 = -1LL;
	volatile int64_t t65 = -256858616321329LL;

	t65 = (((x357-x358)%x359)*x360);

	if (t65 != -9LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x365 = UINT64_MAX;
	static volatile int16_t x366 = -1;
	volatile int8_t x367 = -7;
	volatile int16_t x368 = -1;
	volatile uint64_t t66 = 941112249LLU;

	t66 = (((x365-x366)%x367)*x368);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x369 = 154U;
	int8_t x370 = 0;
	volatile int64_t x371 = INT64_MIN;
	static uint64_t x372 = 2730081LLU;
	volatile uint64_t t67 = 196189LLU;

	t67 = (((x369-x370)%x371)*x372);

	if (t67 != 420432474LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x373 = 35U;
	int16_t x374 = -1;
	int64_t x376 = -1LL;
	static int64_t t68 = -1104148617455599185LL;

	t68 = (((x373-x374)%x375)*x376);

	if (t68 != -36LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x377 = UINT32_MAX;
	static int64_t x378 = -1LL;
	static int32_t x379 = 119;
	int16_t x380 = 494;
	static int64_t t69 = 6081627591956LL;

	t69 = (((x377-x378)%x379)*x380);

	if (t69 != 8892LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x381 = -1LL;
	volatile int64_t x382 = INT64_MIN;
	volatile int32_t x383 = -1;
	volatile int64_t t70 = -118724969577LL;

	t70 = (((x381-x382)%x383)*x384);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x389 = 43641LLU;
	static int32_t x390 = 879;
	volatile uint32_t x391 = 1100997603U;
	uint64_t t71 = 70LLU;

	t71 = (((x389-x390)%x391)*x392);

	if (t71 != 18446744073700229500LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x393 = INT16_MIN;
	static uint32_t x394 = 483U;
	static int16_t x395 = INT16_MIN;
	volatile int32_t x396 = 1809;

	t72 = (((x393-x394)%x395)*x396);

	if (t72 != 4234816237U) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x397 = 115LL;
	int8_t x398 = INT8_MIN;
	static int16_t x399 = INT16_MIN;
	int32_t x400 = 2254650;
	static volatile int64_t t73 = -1657LL;

	t73 = (((x397-x398)%x399)*x400);

	if (t73 != 547879950LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x405 = INT8_MAX;
	static int16_t x406 = 1;
	uint8_t x407 = UINT8_MAX;

	t74 = (((x405-x406)%x407)*x408);

	if (t74 != 156238362U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x409 = -1;
	int8_t x410 = INT8_MIN;
	int16_t x411 = 1;
	int32_t x412 = INT32_MIN;

	t75 = (((x409-x410)%x411)*x412);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x414 = UINT64_MAX;
	uint64_t x416 = UINT64_MAX;
	static volatile uint64_t t76 = 1091501961754LLU;

	t76 = (((x413-x414)%x415)*x416);

	if (t76 != 18446744073709518857LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x417 = INT64_MIN;
	int16_t x418 = INT16_MIN;
	volatile int32_t x419 = INT32_MAX;
	static int64_t x420 = -1LL;
	volatile int64_t t77 = -65306848579LL;

	t77 = (((x417-x418)%x419)*x420);

	if (t77 != 2147450881LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x422 = INT64_MAX;
	volatile uint64_t x424 = 2224134LLU;
	static uint64_t t78 = 10LLU;

	t78 = (((x421-x422)%x423)*x424);

	if (t78 != 1312239060LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x425 = 2273052373161203LL;
	volatile uint32_t x428 = 58862806U;
	volatile int64_t t79 = -2108947173357840LL;

	t79 = (((x425-x426)%x427)*x428);

	if (t79 != 6416045854LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x429 = 0;
	volatile uint16_t x430 = 18000U;
	static int32_t x431 = INT32_MAX;
	int8_t x432 = -3;
	volatile int32_t t80 = 621;

	t80 = (((x429-x430)%x431)*x432);

	if (t80 != 54000) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x437 = 1U;
	volatile uint64_t x439 = 3035LLU;

	t81 = (((x437-x438)%x439)*x440);

	if (t81 != 94428LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x445 = 5817;
	volatile uint32_t x446 = 146U;
	int8_t x447 = 1;
	volatile int64_t x448 = INT64_MIN;

	t82 = (((x445-x446)%x447)*x448);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x449 = 100789588U;
	volatile int8_t x450 = INT8_MAX;
	int8_t x451 = -2;
	static volatile int32_t x452 = INT32_MIN;
	uint32_t t83 = 393351531U;

	t83 = (((x449-x450)%x451)*x452);

	if (t83 != 2147483648U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x457 = INT8_MIN;
	uint32_t x458 = 13530U;
	volatile int32_t x459 = INT32_MIN;
	uint32_t t84 = 3U;

	t84 = (((x457-x458)%x459)*x460);

	if (t84 != 447545344U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint64_t x461 = UINT64_MAX;
	int16_t x462 = INT16_MIN;
	uint64_t x463 = 1591376333LLU;
	static volatile uint64_t t85 = 491LLU;

	t85 = (((x461-x462)%x463)*x464);

	if (t85 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x465 = 1090688664171334LL;
	int8_t x466 = INT8_MIN;
	int16_t x467 = INT16_MIN;
	int8_t x468 = INT8_MIN;

	t86 = (((x465-x466)%x467)*x468);

	if (t86 != -3793664LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x469 = 217599532755266LLU;
	int8_t x470 = -5;
	static volatile int8_t x471 = INT8_MIN;
	int16_t x472 = INT16_MIN;
	static volatile uint64_t t87 = 1921996875798224769LLU;

	t87 = (((x469-x470)%x471)*x472);

	if (t87 != 11316442584384831488LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x473 = 55;
	uint8_t x474 = 2U;
	static volatile int8_t x475 = INT8_MIN;
	uint32_t x476 = UINT32_MAX;
	static volatile uint32_t t88 = 3U;

	t88 = (((x473-x474)%x475)*x476);

	if (t88 != 4294967243U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x477 = -130;
	uint64_t x478 = UINT64_MAX;
	int32_t x479 = 105;
	volatile int16_t x480 = INT16_MAX;
	volatile uint64_t t89 = 1881712261565LLU;

	t89 = (((x477-x478)%x479)*x480);

	if (t89 != 3178399LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x482 = -1LL;
	int32_t x483 = -1697438;
	volatile int16_t x484 = -10;
	static volatile uint64_t t90 = 756610540LLU;

	t90 = (((x481-x482)%x483)*x484);

	if (t90 != 18446742858169581186LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x486 = -1;
	uint64_t x487 = UINT64_MAX;
	uint32_t x488 = 9U;
	volatile uint64_t t91 = 4490LLU;

	t91 = (((x485-x486)%x487)*x488);

	if (t91 != 207LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x489 = 11;
	uint32_t x490 = UINT32_MAX;
	int32_t x491 = -1;
	uint32_t x492 = UINT32_MAX;
	uint32_t t92 = 12080U;

	t92 = (((x489-x490)%x491)*x492);

	if (t92 != 4294967284U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x493 = 32314757LLU;
	int64_t x495 = INT64_MIN;
	uint64_t t93 = 126LLU;

	t93 = (((x493-x494)%x495)*x496);

	if (t93 != 138790828755839610LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x501 = 343;
	int32_t x503 = INT32_MIN;
	int8_t x504 = INT8_MIN;
	static volatile uint32_t t94 = 1585545967U;

	t94 = (((x501-x502)%x503)*x504);

	if (t94 != 4294923264U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x506 = -48;
	static int16_t x507 = INT16_MIN;
	static uint64_t x508 = 4543LLU;
	uint64_t t95 = 1857197905650110070LLU;

	t95 = (((x505-x506)%x507)*x508);

	if (t95 != 159098317763LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x513 = INT16_MIN;
	volatile uint16_t x514 = UINT16_MAX;
	uint32_t x515 = UINT32_MAX;
	uint8_t x516 = 35U;
	uint32_t t96 = 26865469U;

	t96 = (((x513-x514)%x515)*x516);

	if (t96 != 4291526691U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x521 = INT16_MIN;
	volatile int16_t x522 = -63;
	uint32_t x523 = UINT32_MAX;
	volatile uint32_t x524 = 49579U;

	t97 = (((x521-x522)%x523)*x524);

	if (t97 != 2673486101U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x525 = INT32_MAX;
	uint16_t x527 = 15122U;
	int64_t x528 = -2232114LL;
	int64_t t98 = 0LL;

	t98 = (((x525-x526)%x527)*x528);

	if (t98 != -9196309680LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x529 = -1;
	int8_t x530 = INT8_MAX;
	volatile uint64_t x531 = 71LLU;
	int32_t x532 = 1;

	t99 = (((x529-x530)%x531)*x532);

	if (t99 != 24LLU) { NG(); } else { ; }
	
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

