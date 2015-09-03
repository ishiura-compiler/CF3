#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = 0;
int32_t x3 = INT32_MIN;
static int64_t x22 = -1LL;
int32_t x23 = 46;
volatile int16_t x28 = INT16_MAX;
uint64_t x30 = 6948LLU;
static volatile uint64_t t6 = 0LLU;
static volatile int8_t x34 = 10;
volatile int32_t t8 = 168;
static int8_t x43 = INT8_MIN;
int32_t x48 = INT32_MIN;
volatile uint64_t t10 = 116155310652426026LLU;
int64_t x49 = INT64_MAX;
uint64_t x60 = 1499430035555639LLU;
volatile int64_t t14 = 669134LL;
int32_t x67 = -344751;
static volatile int32_t x68 = -1;
int32_t x75 = 96;
int16_t x76 = -1;
int8_t x82 = INT8_MAX;
int16_t x90 = -1;
uint8_t x91 = 39U;
int32_t x94 = -89448155;
static volatile int64_t x102 = INT64_MIN;
volatile uint64_t t24 = 201413985253025LLU;
static volatile int32_t x110 = INT32_MIN;
uint64_t t28 = 18LLU;
uint32_t x127 = UINT32_MAX;
volatile int64_t t31 = 325626755LL;
uint64_t t32 = 396352826LLU;
volatile int32_t x138 = INT32_MAX;
uint64_t x145 = 16122LLU;
volatile int16_t x148 = -235;
volatile uint8_t x150 = 2U;
volatile int16_t x151 = INT16_MIN;
int16_t x153 = -1;
int64_t x155 = -1LL;
uint32_t x158 = 458766U;
volatile uint16_t x162 = 49U;
uint32_t x167 = UINT32_MAX;
volatile uint16_t x170 = UINT16_MAX;
int32_t x172 = -1;
static int32_t x177 = INT32_MIN;
int8_t x179 = INT8_MIN;
volatile uint64_t t43 = 11881LLU;
static int16_t x183 = INT16_MIN;
volatile uint32_t x184 = 6892U;
int32_t x186 = INT32_MIN;
int64_t t45 = -96LL;
volatile int32_t t46 = 3346219;
int32_t x202 = 164;
uint8_t x209 = 18U;
uint64_t x212 = 232690644145LLU;
int8_t x213 = -1;
static int32_t x219 = -7;
static uint64_t x221 = 52LLU;
static int32_t x222 = INT32_MIN;
static volatile int16_t x223 = INT16_MIN;
volatile uint64_t t52 = 412033039476379221LLU;
int32_t x225 = -1;
volatile int8_t x228 = -39;
int32_t x244 = -232232;
int16_t x245 = INT16_MIN;
static volatile uint64_t t58 = 3937552LLU;
static volatile int64_t t60 = 2076986225451512570LL;
static int64_t x282 = INT64_MIN;
uint8_t x288 = UINT8_MAX;
static uint16_t x290 = 295U;
int8_t x297 = INT8_MIN;
int16_t x298 = INT16_MIN;
int8_t x300 = INT8_MAX;
int32_t x303 = INT32_MIN;
uint32_t x304 = UINT32_MAX;
int32_t x318 = 24825;
uint16_t x319 = 15U;
uint64_t t76 = 109610450420470690LLU;
int16_t x325 = -95;
int8_t x327 = INT8_MIN;
int16_t x328 = 25;
volatile uint16_t x330 = UINT16_MAX;
uint32_t x346 = 95U;
volatile uint32_t t82 = 115337U;
int64_t x352 = INT64_MAX;
int64_t x363 = 437659221409628LL;
int8_t x364 = INT8_MAX;
uint64_t x367 = UINT64_MAX;
int8_t x375 = INT8_MIN;
int32_t x377 = INT32_MAX;
static uint16_t x379 = 14U;
volatile uint16_t x387 = 361U;
int16_t x388 = INT16_MAX;
int32_t t92 = 294077;
static int64_t x390 = INT64_MAX;
static int16_t x393 = 0;
uint8_t x394 = 14U;
uint8_t x400 = 0U;
static uint8_t x402 = UINT8_MAX;
static uint16_t x404 = 3169U;
volatile uint32_t t98 = 1552U;
volatile int32_t x416 = -1;


void f0(void) {
	int16_t x2 = INT16_MIN;
	int8_t x4 = INT8_MIN;
	int32_t t0 = 0;

	t0 = ((x1+x2)&(x3^x4));

	if (t0 != 2147450880) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 43912481647509103LL;
	uint64_t x6 = UINT64_MAX;
	volatile uint32_t x7 = UINT32_MAX;
	volatile int64_t x8 = INT64_MAX;
	volatile uint64_t t1 = 7LLU;

	t1 = ((x5+x6)&(x7^x8));

	if (t1 != 43912480073711616LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 14U;
	uint64_t x10 = UINT64_MAX;
	uint16_t x11 = 938U;
	volatile uint16_t x12 = 9237U;
	volatile uint64_t t2 = 2474428562LLU;

	t2 = ((x9+x10)&(x11^x12));

	if (t2 != 13LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = UINT16_MAX;
	volatile int64_t x14 = -930641179440LL;
	volatile int32_t x15 = 74803;
	int64_t x16 = -1LL;
	int64_t t3 = 5210538935LL;

	t3 = ((x13+x14)&(x15^x16));

	if (t3 != -930641180468LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MIN;
	volatile uint32_t x24 = UINT32_MAX;
	int64_t t4 = 27182231LL;

	t4 = ((x21+x22)&(x23^x24));

	if (t4 != 2147483601LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -1;
	int16_t x26 = INT16_MIN;
	static uint64_t x27 = UINT64_MAX;
	static uint64_t t5 = 808934093895LLU;

	t5 = ((x25+x26)&(x27^x28));

	if (t5 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x29 = 42085153350559LLU;
	int32_t x31 = -7474487;
	uint16_t x32 = UINT16_MAX;

	t6 = ((x29+x30)&(x31^x32));

	if (t6 != 42085152263170LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MIN;
	uint8_t x35 = UINT8_MAX;
	int32_t x36 = -1;
	volatile int32_t t7 = 2;

	t7 = ((x33+x34)&(x35^x36));

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = 5U;
	volatile int8_t x38 = INT8_MAX;
	int16_t x39 = -1;
	uint16_t x40 = 2576U;

	t8 = ((x37+x38)&(x39^x40));

	if (t8 != 132) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MIN;
	uint32_t x42 = 5900857U;
	volatile uint8_t x44 = 5U;
	uint32_t t9 = 1807753U;

	t9 = ((x41+x42)&(x43^x44));

	if (t9 != 2153384449U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = 0;
	int64_t x46 = 475611LL;
	uint64_t x47 = 3986637291LLU;

	t10 = ((x45+x46)&(x47^x48));

	if (t10 != 475595LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x50 = -1563;
	int32_t x51 = INT32_MIN;
	uint8_t x52 = 5U;
	int64_t t11 = 1527197354LL;

	t11 = ((x49+x50)&(x51^x52));

	if (t11 != 9223372034707292164LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x53 = UINT64_MAX;
	int32_t x54 = INT32_MIN;
	int16_t x55 = -13142;
	static int32_t x56 = INT32_MIN;
	volatile uint64_t t12 = 14984471337126968LLU;

	t12 = ((x53+x54)&(x55^x56));

	if (t12 != 2147470506LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MIN;
	volatile int64_t x58 = -1LL;
	uint16_t x59 = UINT16_MAX;
	static uint64_t t13 = 54513282LLU;

	t13 = ((x57+x58)&(x59^x60));

	if (t13 != 1499430035552968LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x61 = UINT32_MAX;
	int32_t x62 = INT32_MAX;
	uint16_t x63 = 84U;
	int64_t x64 = INT64_MIN;

	t14 = ((x61+x62)&(x63^x64));

	if (t14 != 84LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = 3749;
	static uint32_t x66 = 100U;
	uint32_t t15 = 30U;

	t15 = ((x65+x66)&(x67^x68));

	if (t15 != 520U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x69 = 126453U;
	int64_t x70 = -55233727LL;
	uint8_t x71 = 59U;
	int8_t x72 = INT8_MIN;
	int64_t t16 = 492099841902680038LL;

	t16 = ((x69+x70)&(x71^x72));

	if (t16 != -55107278LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x73 = INT32_MIN;
	static uint16_t x74 = 96U;
	int32_t t17 = INT32_MIN;

	t17 = ((x73+x74)&(x75^x76));

	if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = UINT64_MAX;
	int16_t x78 = INT16_MAX;
	int32_t x79 = -1;
	int64_t x80 = -7055790946LL;
	uint64_t t18 = 146233LLU;

	t18 = ((x77+x78)&(x79^x80));

	if (t18 != 21344LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x81 = -1;
	volatile int64_t x83 = INT64_MAX;
	uint32_t x84 = 604299030U;
	volatile int64_t t19 = -173896665911900839LL;

	t19 = ((x81+x82)&(x83^x84));

	if (t19 != 104LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = -1;
	int64_t x86 = -7LL;
	int64_t x87 = INT64_MIN;
	static uint64_t x88 = 814641906939LLU;
	uint64_t t20 = 42LLU;

	t20 = ((x85+x86)&(x87^x88));

	if (t20 != 9223372851496682744LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x89 = 80U;
	static int32_t x92 = -88544;
	int32_t t21 = -58;

	t21 = ((x89+x90)&(x91^x92));

	if (t21 != 7) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x93 = 192868805LLU;
	volatile int8_t x95 = INT8_MIN;
	int8_t x96 = 0;
	volatile uint64_t t22 = 3365620766689LLU;

	t22 = ((x93+x94)&(x95^x96));

	if (t22 != 103420544LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = INT16_MAX;
	int16_t x98 = 337;
	int64_t x99 = -2492991984790481689LL;
	int8_t x100 = 0;
	static int64_t t23 = -756112552LL;

	t23 = ((x97+x98)&(x99^x100));

	if (t23 != 32832LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint32_t x101 = 118339615U;
	uint64_t x103 = 1483120490357360LLU;
	uint8_t x104 = 101U;

	t24 = ((x101+x102)&(x103^x104));

	if (t24 != 84713493LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x105 = 109U;
	int16_t x106 = -1;
	int64_t x107 = INT64_MIN;
	int16_t x108 = 1;
	volatile int64_t t25 = 115LL;

	t25 = ((x105+x106)&(x107^x108));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x109 = 16733045237403762LLU;
	uint64_t x111 = 57279LLU;
	static int16_t x112 = INT16_MIN;
	volatile uint64_t t26 = 4774336588LLU;

	t26 = ((x109+x110)&(x111^x112));

	if (t26 != 16733043089887282LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x113 = INT8_MIN;
	static int16_t x114 = INT16_MAX;
	uint16_t x115 = UINT16_MAX;
	static volatile int8_t x116 = 0;
	int32_t t27 = -46;

	t27 = ((x113+x114)&(x115^x116));

	if (t27 != 32639) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x117 = -1;
	uint16_t x118 = 1U;
	int16_t x119 = -7979;
	static uint64_t x120 = 242949441358LLU;

	t28 = ((x117+x118)&(x119^x120));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x121 = 1192246780LLU;
	volatile int16_t x122 = INT16_MIN;
	uint8_t x123 = 1U;
	int32_t x124 = INT32_MIN;
	uint64_t t29 = 8287635048287396LLU;

	t29 = ((x121+x122)&(x123^x124));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x125 = 58931166733433LLU;
	int32_t x126 = INT32_MIN;
	static int8_t x128 = INT8_MIN;
	volatile uint64_t t30 = 11713LLU;

	t30 = ((x125+x126)&(x127^x128));

	if (t30 != 121LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x129 = UINT32_MAX;
	int32_t x130 = INT32_MAX;
	uint8_t x131 = 3U;
	int64_t x132 = INT64_MIN;

	t31 = ((x129+x130)&(x131^x132));

	if (t31 != 2LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x133 = INT16_MAX;
	int16_t x134 = INT16_MAX;
	static uint64_t x135 = 2141987893161LLU;
	uint16_t x136 = 9195U;

	t32 = ((x133+x134)&(x135^x136));

	if (t32 != 19522LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x137 = -421418;
	uint64_t x139 = 29859956LLU;
	int32_t x140 = -1;
	uint64_t t33 = 182656LLU;

	t33 = ((x137+x138)&(x139^x140));

	if (t33 != 2117603713LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = INT16_MIN;
	static int16_t x142 = INT16_MIN;
	int32_t x143 = 4150;
	uint16_t x144 = 79U;
	volatile int32_t t34 = 783529;

	t34 = ((x141+x142)&(x143^x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x146 = -1;
	int64_t x147 = -3901000202922LL;
	volatile uint64_t t35 = 93155353LLU;

	t35 = ((x145+x146)&(x147^x148));

	if (t35 != 14913LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x149 = 15U;
	volatile int32_t x152 = INT32_MIN;
	int32_t t36 = -260558029;

	t36 = ((x149+x150)&(x151^x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x154 = INT8_MIN;
	int64_t x156 = -255792784956146234LL;
	int64_t t37 = -1716278528845LL;

	t37 = ((x153+x154)&(x155^x156));

	if (t37 != 255792784956146233LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x157 = 1U;
	volatile uint16_t x159 = 1U;
	volatile int16_t x160 = INT16_MAX;
	uint32_t t38 = 15211U;

	t38 = ((x157+x158)&(x159^x160));

	if (t38 != 14U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = INT8_MIN;
	static uint8_t x163 = 0U;
	volatile uint64_t x164 = UINT64_MAX;
	volatile uint64_t t39 = 1843552006LLU;

	t39 = ((x161+x162)&(x163^x164));

	if (t39 != 18446744073709551537LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x165 = UINT8_MAX;
	int8_t x166 = -1;
	int16_t x168 = INT16_MIN;
	static uint32_t t40 = 87U;

	t40 = ((x165+x166)&(x167^x168));

	if (t40 != 254U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x169 = 165523U;
	uint64_t x171 = 320LLU;
	volatile uint64_t t41 = 1707670298LLU;

	t41 = ((x169+x170)&(x171^x172));

	if (t41 != 231058LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = INT16_MIN;
	int16_t x174 = INT16_MAX;
	static volatile uint64_t x175 = 519928472733LLU;
	static volatile int16_t x176 = INT16_MIN;
	static uint64_t t42 = 3LLU;

	t42 = ((x173+x174)&(x175^x176));

	if (t42 != 18446743553781097629LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x178 = UINT16_MAX;
	uint64_t x180 = 57970511LLU;

	t43 = ((x177+x178)&(x179^x180));

	if (t43 != 18446744071562096847LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = -87;
	int8_t x182 = INT8_MIN;
	static volatile uint32_t t44 = 5U;

	t44 = ((x181+x182)&(x183^x184));

	if (t44 != 4294941224U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x185 = UINT32_MAX;
	int64_t x187 = INT64_MIN;
	static int32_t x188 = 61713192;

	t45 = ((x185+x186)&(x187^x188));

	if (t45 != 61713192LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x193 = INT8_MIN;
	int8_t x194 = 1;
	int16_t x195 = INT16_MIN;
	int32_t x196 = -7;

	t46 = ((x193+x194)&(x195^x196));

	if (t46 != 32641) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = 0;
	static int8_t x203 = INT8_MIN;
	uint64_t x204 = 2149501665993LLU;
	uint64_t t47 = 1105696306903466600LLU;

	t47 = ((x201+x202)&(x203^x204));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x205 = INT64_MIN;
	int32_t x206 = INT32_MAX;
	uint32_t x207 = 128656U;
	static int32_t x208 = -3;
	int64_t t48 = -18981147962754852LL;

	t48 = ((x205+x206)&(x207^x208));

	if (t48 != 2147354989LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x210 = INT8_MIN;
	uint8_t x211 = 1U;
	volatile uint64_t t49 = 4368910290003081LLU;

	t49 = ((x209+x210)&(x211^x212));

	if (t49 != 232690644112LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x214 = INT64_MAX;
	int32_t x215 = 2624;
	int16_t x216 = INT16_MIN;
	volatile int64_t t50 = -24606637LL;

	t50 = ((x213+x214)&(x215^x216));

	if (t50 != 9223372036854745664LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x217 = INT64_MAX;
	volatile int8_t x218 = INT8_MIN;
	uint32_t x220 = UINT32_MAX;
	static int64_t t51 = 36727575018659LL;

	t51 = ((x217+x218)&(x219^x220));

	if (t51 != 6LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x224 = INT32_MIN;

	t52 = ((x221+x222)&(x223^x224));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x226 = UINT64_MAX;
	static int16_t x227 = -95;
	volatile uint64_t t53 = 242947928939LLU;

	t53 = ((x225+x226)&(x227^x228));

	if (t53 != 120LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x229 = INT8_MIN;
	volatile int32_t x230 = 97842;
	volatile int16_t x231 = -1;
	int16_t x232 = 0;
	int32_t t54 = -191;

	t54 = ((x229+x230)&(x231^x232));

	if (t54 != 97714) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x233 = 0U;
	uint8_t x234 = 35U;
	volatile uint64_t x235 = 462997437542128LLU;
	volatile int8_t x236 = -1;
	uint64_t t55 = 232496LLU;

	t55 = ((x233+x234)&(x235^x236));

	if (t55 != 3LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x237 = INT64_MIN;
	uint16_t x238 = 701U;
	uint32_t x239 = 149U;
	uint16_t x240 = UINT16_MAX;
	static int64_t t56 = 1LL;

	t56 = ((x237+x238)&(x239^x240));

	if (t56 != 552LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x241 = INT16_MAX;
	int64_t x242 = INT64_MIN;
	int8_t x243 = INT8_MIN;
	int64_t t57 = 2006LL;

	t57 = ((x241+x242)&(x243^x244));

	if (t57 != 2904LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x246 = UINT64_MAX;
	int8_t x247 = INT8_MIN;
	int16_t x248 = -1;

	t58 = ((x245+x246)&(x247^x248));

	if (t58 != 127LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x249 = INT16_MAX;
	uint16_t x250 = UINT16_MAX;
	int32_t x251 = 2;
	static int64_t x252 = INT64_MAX;
	int64_t t59 = -16591965029413LL;

	t59 = ((x249+x250)&(x251^x252));

	if (t59 != 98300LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x253 = INT32_MAX;
	static uint32_t x254 = 173U;
	int64_t x255 = 6802588904126093LL;
	static int8_t x256 = -1;

	t60 = ((x253+x254)&(x255^x256));

	if (t60 != 2147483680LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x257 = INT8_MIN;
	uint32_t x258 = UINT32_MAX;
	volatile int8_t x259 = INT8_MIN;
	int32_t x260 = INT32_MAX;
	volatile uint32_t t61 = 2032767474U;

	t61 = ((x257+x258)&(x259^x260));

	if (t61 != 2147483775U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x261 = 0;
	int32_t x262 = -1;
	int8_t x263 = 50;
	static int64_t x264 = INT64_MIN;
	volatile int64_t t62 = 0LL;

	t62 = ((x261+x262)&(x263^x264));

	if (t62 != -9223372036854775758LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x265 = 96U;
	int64_t x266 = -13703322LL;
	static int32_t x267 = -1;
	volatile int16_t x268 = -1;
	int64_t t63 = 32LL;

	t63 = ((x265+x266)&(x267^x268));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x269 = -1;
	uint8_t x270 = UINT8_MAX;
	int16_t x271 = INT16_MAX;
	volatile int8_t x272 = INT8_MIN;
	volatile int32_t t64 = -25789;

	t64 = ((x269+x270)&(x271^x272));

	if (t64 != 126) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x277 = INT8_MAX;
	uint16_t x278 = 19509U;
	int64_t x279 = -939632701LL;
	int64_t x280 = -1LL;
	int64_t t65 = 328709827989LL;

	t65 = ((x277+x278)&(x279^x280));

	if (t65 != 2100LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x281 = 757439156U;
	static int64_t x283 = INT64_MAX;
	static int8_t x284 = -7;
	int64_t t66 = -266164609654840LL;

	t66 = ((x281+x282)&(x283^x284));

	if (t66 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x285 = 51185280456261LLU;
	int64_t x286 = -1LL;
	static int8_t x287 = 1;
	uint64_t t67 = 12382438LLU;

	t67 = ((x285+x286)&(x287^x288));

	if (t67 != 68LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x289 = -220868468;
	static uint8_t x291 = 2U;
	uint16_t x292 = 13U;
	volatile int32_t t68 = -2869;

	t68 = ((x289+x290)&(x291^x292));

	if (t68 != 3) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x293 = 7;
	static uint64_t x294 = 6795387770448LLU;
	uint32_t x295 = 67016089U;
	static volatile int8_t x296 = 2;
	volatile uint64_t t69 = 30519175LLU;

	t69 = ((x293+x294)&(x295^x296));

	if (t69 != 11310099LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x299 = INT32_MIN;
	int32_t t70 = INT32_MIN;

	t70 = ((x297+x298)&(x299^x300));

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x301 = -1;
	volatile uint32_t x302 = 912U;
	uint32_t t71 = 62695030U;

	t71 = ((x301+x302)&(x303^x304));

	if (t71 != 911U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x305 = UINT8_MAX;
	volatile int64_t x306 = INT64_MIN;
	uint64_t x307 = UINT64_MAX;
	volatile uint16_t x308 = UINT16_MAX;
	volatile uint64_t t72 = 13473407349LLU;

	t72 = ((x305+x306)&(x307^x308));

	if (t72 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint32_t x309 = UINT32_MAX;
	static volatile int32_t x310 = 0;
	static int64_t x311 = 5865LL;
	volatile int32_t x312 = 94606;
	int64_t t73 = 6586158819820610LL;

	t73 = ((x309+x310)&(x311^x312));

	if (t73 != 92007LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x313 = INT64_MIN;
	int16_t x314 = INT16_MAX;
	int64_t x315 = INT64_MAX;
	uint32_t x316 = 29770535U;
	static volatile int64_t t74 = 1082LL;

	t74 = ((x313+x314)&(x315^x316));

	if (t74 != 15576LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x317 = 683873U;
	static uint16_t x320 = 54U;
	volatile uint32_t t75 = 182042490U;

	t75 = ((x317+x318)&(x319^x320));

	if (t75 != 24U) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint64_t x321 = UINT64_MAX;
	volatile int32_t x322 = -2020;
	static int8_t x323 = INT8_MIN;
	uint16_t x324 = 30U;

	t76 = ((x321+x322)&(x323^x324));

	if (t76 != 18446744073709549594LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x326 = 354880594LLU;
	uint64_t t77 = 43216266673LLU;

	t77 = ((x325+x326)&(x327^x328));

	if (t77 != 354880401LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x329 = INT16_MIN;
	static int8_t x331 = INT8_MIN;
	int64_t x332 = 358684572198608LL;
	volatile int64_t t78 = 43109LL;

	t78 = ((x329+x330)&(x331^x332));

	if (t78 != 22864LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x333 = INT64_MIN;
	int32_t x334 = INT32_MAX;
	int32_t x335 = INT32_MIN;
	static volatile int8_t x336 = INT8_MAX;
	volatile int64_t t79 = -52351LL;

	t79 = ((x333+x334)&(x335^x336));

	if (t79 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x337 = 0;
	int8_t x338 = INT8_MIN;
	uint32_t x339 = 322678696U;
	uint16_t x340 = 7U;
	uint32_t t80 = 338U;

	t80 = ((x337+x338)&(x339^x340));

	if (t80 != 322678656U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x341 = UINT16_MAX;
	volatile int8_t x342 = -1;
	uint32_t x343 = 23144769U;
	int64_t x344 = INT64_MIN;
	volatile int64_t t81 = 849132917825655584LL;

	t81 = ((x341+x342)&(x343^x344));

	if (t81 != 10560LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x345 = -392;
	int32_t x347 = INT32_MIN;
	volatile int16_t x348 = 1340;

	t82 = ((x345+x346)&(x347^x348));

	if (t82 != 2147484692U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x349 = INT16_MIN;
	static uint32_t x350 = UINT32_MAX;
	int32_t x351 = 3;
	int64_t t83 = -433LL;

	t83 = ((x349+x350)&(x351^x352));

	if (t83 != 4294934524LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x353 = INT32_MIN;
	uint8_t x354 = 31U;
	static volatile int32_t x355 = INT32_MAX;
	static int64_t x356 = INT64_MIN;
	volatile int64_t t84 = 2907646641725051LL;

	t84 = ((x353+x354)&(x355^x356));

	if (t84 != -9223372036854775777LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x357 = 22U;
	int32_t x358 = 0;
	uint64_t x359 = UINT64_MAX;
	volatile uint64_t x360 = 377802522708448660LLU;
	static uint64_t t85 = 886137503759021LLU;

	t85 = ((x357+x358)&(x359^x360));

	if (t85 != 2LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x361 = INT8_MIN;
	int64_t x362 = INT64_MAX;
	volatile int64_t t86 = -820571LL;

	t86 = ((x361+x362)&(x363^x364));

	if (t86 != 437659221409571LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x365 = INT32_MAX;
	volatile int64_t x366 = INT64_MIN;
	int32_t x368 = 16619;
	static volatile uint64_t t87 = 100770312580LLU;

	t87 = ((x365+x366)&(x367^x368));

	if (t87 != 9223372039002242836LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x369 = 7LLU;
	volatile int64_t x370 = -722672LL;
	static uint64_t x371 = UINT64_MAX;
	volatile int8_t x372 = INT8_MIN;
	uint64_t t88 = 32LLU;

	t88 = ((x369+x370)&(x371^x372));

	if (t88 != 23LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x373 = UINT8_MAX;
	uint8_t x374 = 1U;
	static volatile uint16_t x376 = UINT16_MAX;
	static volatile int32_t t89 = -12488;

	t89 = ((x373+x374)&(x375^x376));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x378 = -509;
	volatile int16_t x380 = INT16_MIN;
	volatile int32_t t90 = -151643365;

	t90 = ((x377+x378)&(x379^x380));

	if (t90 != 2147450882) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x381 = -1LL;
	int32_t x382 = INT32_MIN;
	volatile int8_t x383 = 15;
	uint64_t x384 = 73LLU;
	uint64_t t91 = 5708785980801781824LLU;

	t91 = ((x381+x382)&(x383^x384));

	if (t91 != 70LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x385 = -5;
	uint8_t x386 = 1U;

	t92 = ((x385+x386)&(x387^x388));

	if (t92 != 32404) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x389 = 1567139LLU;
	uint8_t x391 = 6U;
	volatile uint8_t x392 = UINT8_MAX;
	uint64_t t93 = 3405965962LLU;

	t93 = ((x389+x390)&(x391^x392));

	if (t93 != 160LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x395 = UINT16_MAX;
	volatile uint16_t x396 = 60U;
	volatile int32_t t94 = 3339;

	t94 = ((x393+x394)&(x395^x396));

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x397 = 2763603;
	volatile int32_t x398 = INT32_MIN;
	static uint8_t x399 = 0U;
	int32_t t95 = -196666;

	t95 = ((x397+x398)&(x399^x400));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x401 = INT64_MIN;
	uint16_t x403 = 19U;
	volatile int64_t t96 = -135406376574683LL;

	t96 = ((x401+x402)&(x403^x404));

	if (t96 != 114LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x405 = INT8_MAX;
	int8_t x406 = 0;
	volatile uint32_t x407 = UINT32_MAX;
	int32_t x408 = -1;
	uint32_t t97 = 59188U;

	t97 = ((x405+x406)&(x407^x408));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x409 = 2064U;
	int16_t x410 = INT16_MIN;
	volatile int32_t x411 = -12692855;
	uint16_t x412 = UINT16_MAX;

	t98 = ((x409+x410)&(x411^x412));

	if (t98 != 4282288144U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x413 = 48U;
	uint32_t x414 = 25U;
	volatile uint32_t x415 = UINT32_MAX;
	static uint32_t t99 = 1708U;

	t99 = ((x413+x414)&(x415^x416));

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

