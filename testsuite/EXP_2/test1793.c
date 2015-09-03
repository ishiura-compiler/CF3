#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = UINT16_MAX;
int16_t x3 = 55;
int16_t x4 = INT16_MIN;
static volatile uint64_t x8 = 1316479LLU;
volatile uint64_t t1 = 381LLU;
int32_t x32 = 94892;
int8_t x35 = INT8_MAX;
int8_t x41 = -1;
volatile uint32_t x49 = UINT32_MAX;
volatile uint64_t t12 = 5845442388LLU;
static int64_t x67 = -362753930824LL;
volatile int32_t x68 = INT32_MIN;
static int8_t x70 = 0;
uint32_t x72 = 129U;
uint32_t x74 = 12469456U;
volatile int32_t x79 = INT32_MAX;
volatile int32_t t23 = 62343649;
int16_t x100 = -1;
int32_t x101 = INT32_MIN;
volatile uint16_t x103 = UINT16_MAX;
static volatile uint32_t t25 = 77158U;
volatile int16_t x109 = INT16_MAX;
volatile uint32_t x112 = 24626U;
int8_t x129 = INT8_MIN;
static int8_t x137 = 0;
int16_t x139 = -20;
int16_t x144 = 4013;
static uint16_t x149 = 5U;
int16_t x151 = -1;
static volatile int8_t x152 = -10;
volatile int32_t t37 = 12;
int8_t x154 = -2;
static int8_t x157 = 4;
int32_t t41 = -14;
int32_t x173 = INT32_MIN;
int32_t t44 = 511;
int8_t x192 = -1;
int32_t x195 = 43846983;
static int32_t x198 = INT32_MIN;
int64_t x200 = INT64_MIN;
volatile uint64_t x203 = 70084980151335LLU;
static int64_t x208 = INT64_MIN;
int16_t x216 = INT16_MIN;
int32_t t54 = 166887;
uint16_t x227 = UINT16_MAX;
static uint32_t x236 = UINT32_MAX;
volatile uint64_t x237 = UINT64_MAX;
volatile int32_t x239 = 3360239;
int64_t x240 = 19LL;
volatile uint32_t x256 = 15235U;
uint8_t x258 = UINT8_MAX;
int64_t t65 = -517829LL;
static int64_t x269 = INT64_MAX;
uint16_t x274 = UINT16_MAX;
uint32_t x288 = UINT32_MAX;
uint16_t x290 = 726U;
static int32_t t72 = INT32_MIN;
volatile int16_t x293 = INT16_MIN;
int32_t t73 = 20923040;
int8_t x297 = INT8_MIN;
static uint64_t x300 = UINT64_MAX;
int32_t x302 = -1;
uint64_t x305 = 14671074854736LLU;
int64_t x311 = INT64_MAX;
volatile int32_t t77 = -4;
int8_t x313 = -2;
uint8_t x322 = 3U;
int32_t x327 = -1;
volatile uint32_t x329 = UINT32_MAX;
uint8_t x331 = 101U;
volatile uint64_t x341 = UINT64_MAX;
int16_t x346 = -70;
int16_t x350 = 1;
int8_t x354 = INT8_MIN;
uint32_t x359 = 49718647U;
static int64_t t91 = INT64_MIN;
int16_t x375 = INT16_MAX;
int8_t x377 = -1;
int64_t x379 = INT64_MIN;
uint8_t x381 = 61U;
static int32_t x389 = INT32_MIN;
volatile uint32_t x391 = UINT32_MAX;
uint8_t x397 = UINT8_MAX;
static uint64_t x398 = UINT64_MAX;


void f0(void) {
	static int16_t x2 = INT16_MIN;
	volatile int32_t t0 = 759;

	t0 = ((x1==(x2&x3))|x4);

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	uint8_t x6 = 3U;
	volatile int32_t x7 = INT32_MIN;

	t1 = ((x5==(x6&x7))|x8);

	if (t1 != 1316479LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 738235U;
	static int16_t x10 = INT16_MAX;
	uint8_t x11 = 12U;
	static uint64_t x12 = 64323730626421LLU;
	static uint64_t t2 = 3605649629966431840LLU;

	t2 = ((x9==(x10&x11))|x12);

	if (t2 != 64323730626421LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -44982;
	int8_t x14 = 0;
	int32_t x15 = 103260676;
	static int32_t x16 = INT32_MIN;
	static int32_t t3 = INT32_MIN;

	t3 = ((x13==(x14&x15))|x16);

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int16_t x18 = 1436;
	static uint16_t x19 = 8144U;
	uint8_t x20 = 106U;
	volatile int32_t t4 = -1079578;

	t4 = ((x17==(x18&x19))|x20);

	if (t4 != 106) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = 3;
	int64_t x22 = INT64_MIN;
	uint16_t x23 = UINT16_MAX;
	int32_t x24 = 67;
	int32_t t5 = -180;

	t5 = ((x21==(x22&x23))|x24);

	if (t5 != 67) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = 1207U;
	int8_t x26 = 1;
	int32_t x27 = INT32_MIN;
	volatile int64_t x28 = -1LL;
	volatile int64_t t6 = 1232770LL;

	t6 = ((x25==(x26&x27))|x28);

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = INT64_MAX;
	static int64_t x30 = INT64_MIN;
	uint32_t x31 = UINT32_MAX;
	volatile int32_t t7 = -496367;

	t7 = ((x29==(x30&x31))|x32);

	if (t7 != 94892) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MAX;
	int8_t x34 = -3;
	static int8_t x36 = INT8_MAX;
	volatile int32_t t8 = 90;

	t8 = ((x33==(x34&x35))|x36);

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	uint32_t x38 = 1751812869U;
	static int16_t x39 = INT16_MAX;
	volatile int64_t x40 = 4425115696858389LL;
	int64_t t9 = -4614803643475829LL;

	t9 = ((x37==(x38&x39))|x40);

	if (t9 != 4425115696858389LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x42 = INT8_MIN;
	int16_t x43 = INT16_MIN;
	volatile int8_t x44 = 14;
	int32_t t10 = -1;

	t10 = ((x41==(x42&x43))|x44);

	if (t10 != 14) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x45 = 54764470U;
	static volatile int32_t x46 = -1;
	int16_t x47 = -655;
	static volatile int64_t x48 = INT64_MIN;
	static volatile int64_t t11 = INT64_MIN;

	t11 = ((x45==(x46&x47))|x48);

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x50 = 86709427719374645LLU;
	uint16_t x51 = 375U;
	uint64_t x52 = 1235266LLU;

	t12 = ((x49==(x50&x51))|x52);

	if (t12 != 1235266LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	int16_t x54 = INT16_MIN;
	int64_t x55 = -4068019LL;
	static int8_t x56 = INT8_MAX;
	volatile int32_t t13 = -1206862;

	t13 = ((x53==(x54&x55))|x56);

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 2U;
	int32_t x58 = 902445;
	int16_t x59 = INT16_MAX;
	int16_t x60 = INT16_MIN;
	int32_t t14 = 2;

	t14 = ((x57==(x58&x59))|x60);

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 105U;
	volatile int8_t x62 = -7;
	volatile int16_t x63 = -3;
	volatile int16_t x64 = -9286;
	int32_t t15 = -179461417;

	t15 = ((x61==(x62&x63))|x64);

	if (t15 != -9286) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x65 = 52U;
	int64_t x66 = INT64_MIN;
	int32_t t16 = INT32_MIN;

	t16 = ((x65==(x66&x67))|x68);

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	int64_t x71 = INT64_MIN;
	uint32_t t17 = 245422U;

	t17 = ((x69==(x70&x71))|x72);

	if (t17 != 129U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	static volatile uint32_t x75 = 6413U;
	static int64_t x76 = INT64_MIN;
	volatile int64_t t18 = INT64_MIN;

	t18 = ((x73==(x74&x75))|x76);

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = INT16_MAX;
	uint8_t x78 = 4U;
	volatile int32_t x80 = INT32_MIN;
	volatile int32_t t19 = INT32_MIN;

	t19 = ((x77==(x78&x79))|x80);

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	uint64_t x82 = UINT64_MAX;
	int8_t x83 = -1;
	volatile int8_t x84 = INT8_MIN;
	volatile int32_t t20 = -14;

	t20 = ((x81==(x82&x83))|x84);

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 1U;
	int32_t x86 = -1;
	uint64_t x87 = 7508167019870963484LLU;
	static uint64_t x88 = 2530442859658214LLU;
	uint64_t t21 = 417LLU;

	t21 = ((x85==(x86&x87))|x88);

	if (t21 != 2530442859658214LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MAX;
	int8_t x90 = INT8_MIN;
	volatile int64_t x91 = INT64_MIN;
	int64_t x92 = INT64_MAX;
	volatile int64_t t22 = INT64_MAX;

	t22 = ((x89==(x90&x91))|x92);

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = INT8_MIN;
	static volatile int32_t x94 = -1;
	static volatile int16_t x95 = 15;
	int16_t x96 = -244;

	t23 = ((x93==(x94&x95))|x96);

	if (t23 != -244) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x97 = 752U;
	int16_t x98 = -1;
	volatile int32_t x99 = INT32_MAX;
	static volatile int32_t t24 = 11571;

	t24 = ((x97==(x98&x99))|x100);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x102 = 941U;
	uint32_t x104 = 98257080U;

	t25 = ((x101==(x102&x103))|x104);

	if (t25 != 98257080U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -7528550946LL;
	uint64_t x106 = 7533LLU;
	int8_t x107 = INT8_MIN;
	uint16_t x108 = 40U;
	volatile int32_t t26 = -11;

	t26 = ((x105==(x106&x107))|x108);

	if (t26 != 40) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x110 = 3790U;
	int8_t x111 = INT8_MAX;
	volatile uint32_t t27 = 328128190U;

	t27 = ((x109==(x110&x111))|x112);

	if (t27 != 24626U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = 249546668813LLU;
	int64_t x114 = INT64_MAX;
	int64_t x115 = INT64_MIN;
	uint64_t x116 = 21301177LLU;
	static volatile uint64_t t28 = 99LLU;

	t28 = ((x113==(x114&x115))|x116);

	if (t28 != 21301177LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x117 = -14;
	int32_t x118 = -1;
	int64_t x119 = 627LL;
	int16_t x120 = INT16_MAX;
	int32_t t29 = -6233;

	t29 = ((x117==(x118&x119))|x120);

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -1;
	static uint16_t x122 = 557U;
	uint8_t x123 = 8U;
	int16_t x124 = -1;
	int32_t t30 = -2032;

	t30 = ((x121==(x122&x123))|x124);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = INT64_MIN;
	static uint64_t x126 = UINT64_MAX;
	uint16_t x127 = 317U;
	int64_t x128 = -1LL;
	static volatile int64_t t31 = -152133LL;

	t31 = ((x125==(x126&x127))|x128);

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x130 = INT16_MIN;
	int16_t x131 = -1;
	volatile int16_t x132 = 1;
	static volatile int32_t t32 = 2;

	t32 = ((x129==(x130&x131))|x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x133 = -1LL;
	static int64_t x134 = -3200349759LL;
	volatile int8_t x135 = -1;
	int16_t x136 = INT16_MIN;
	int32_t t33 = -124107;

	t33 = ((x133==(x134&x135))|x136);

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x138 = INT32_MIN;
	int64_t x140 = -1LL;
	volatile int64_t t34 = -115034041981LL;

	t34 = ((x137==(x138&x139))|x140);

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = 751150845154LL;
	static int64_t x142 = -1LL;
	int64_t x143 = INT64_MIN;
	int32_t t35 = 106;

	t35 = ((x141==(x142&x143))|x144);

	if (t35 != 4013) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x145 = UINT16_MAX;
	uint16_t x146 = 1U;
	int8_t x147 = -1;
	int64_t x148 = -8114839LL;
	int64_t t36 = 5156978582444563LL;

	t36 = ((x145==(x146&x147))|x148);

	if (t36 != -8114839LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x150 = INT64_MAX;

	t37 = ((x149==(x150&x151))|x152);

	if (t37 != -10) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 173U;
	int8_t x155 = 1;
	uint16_t x156 = 4473U;
	volatile int32_t t38 = -23910355;

	t38 = ((x153==(x154&x155))|x156);

	if (t38 != 4473) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = -1217;
	int8_t x159 = 1;
	int16_t x160 = -1;
	volatile int32_t t39 = -44836944;

	t39 = ((x157==(x158&x159))|x160);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = INT16_MIN;
	int8_t x162 = INT8_MIN;
	uint64_t x163 = UINT64_MAX;
	volatile int16_t x164 = INT16_MIN;
	volatile int32_t t40 = -11420651;

	t40 = ((x161==(x162&x163))|x164);

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = 1;
	static int64_t x166 = -111453866627654LL;
	int64_t x167 = INT64_MIN;
	uint16_t x168 = 1425U;

	t41 = ((x165==(x166&x167))|x168);

	if (t41 != 1425) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -1;
	uint8_t x170 = 7U;
	int32_t x171 = INT32_MIN;
	uint32_t x172 = 450U;
	static volatile uint32_t t42 = 78U;

	t42 = ((x169==(x170&x171))|x172);

	if (t42 != 450U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x174 = INT16_MIN;
	volatile int32_t x175 = INT32_MAX;
	uint32_t x176 = 457097U;
	uint32_t t43 = 387599U;

	t43 = ((x173==(x174&x175))|x176);

	if (t43 != 457097U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	int8_t x178 = INT8_MAX;
	volatile uint64_t x179 = UINT64_MAX;
	int16_t x180 = 3155;

	t44 = ((x177==(x178&x179))|x180);

	if (t44 != 3155) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = 178LL;
	volatile int32_t x182 = INT32_MIN;
	volatile int32_t x183 = INT32_MIN;
	int8_t x184 = INT8_MIN;
	volatile int32_t t45 = -894613162;

	t45 = ((x181==(x182&x183))|x184);

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x185 = INT16_MIN;
	volatile int64_t x186 = INT64_MIN;
	static int64_t x187 = -1LL;
	volatile int16_t x188 = INT16_MAX;
	volatile int32_t t46 = -76517;

	t46 = ((x185==(x186&x187))|x188);

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -136285909780LL;
	volatile int32_t x190 = -1;
	int16_t x191 = INT16_MAX;
	static volatile int32_t t47 = 274574;

	t47 = ((x189==(x190&x191))|x192);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x193 = -10448;
	int32_t x194 = INT32_MIN;
	int8_t x196 = INT8_MIN;
	int32_t t48 = -290685;

	t48 = ((x193==(x194&x195))|x196);

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x197 = -1;
	static int8_t x199 = -18;
	int64_t t49 = INT64_MIN;

	t49 = ((x197==(x198&x199))|x200);

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x201 = 29025U;
	volatile int64_t x202 = -6686LL;
	static int32_t x204 = 2137986;
	int32_t t50 = -606;

	t50 = ((x201==(x202&x203))|x204);

	if (t50 != 2137986) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x205 = -1;
	volatile int8_t x206 = 28;
	static uint32_t x207 = 8242699U;
	volatile int64_t t51 = INT64_MIN;

	t51 = ((x205==(x206&x207))|x208);

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 910735967LLU;
	static int32_t x210 = -28212;
	uint16_t x211 = UINT16_MAX;
	int64_t x212 = INT64_MIN;
	volatile int64_t t52 = INT64_MIN;

	t52 = ((x209==(x210&x211))|x212);

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -470;
	uint16_t x214 = UINT16_MAX;
	uint8_t x215 = 116U;
	int32_t t53 = 2053614;

	t53 = ((x213==(x214&x215))|x216);

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = INT8_MIN;
	int16_t x218 = -1;
	int8_t x219 = INT8_MIN;
	int32_t x220 = 10801228;

	t54 = ((x217==(x218&x219))|x220);

	if (t54 != 10801229) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 9911U;
	int32_t x222 = INT32_MIN;
	volatile int16_t x223 = 4;
	int16_t x224 = INT16_MAX;
	static int32_t t55 = 182814441;

	t55 = ((x221==(x222&x223))|x224);

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = UINT8_MAX;
	volatile int8_t x226 = -1;
	int8_t x228 = 0;
	volatile int32_t t56 = -12336;

	t56 = ((x225==(x226&x227))|x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x229 = 5338U;
	int16_t x230 = INT16_MIN;
	static uint64_t x231 = UINT64_MAX;
	int64_t x232 = -27LL;
	int64_t t57 = 53LL;

	t57 = ((x229==(x230&x231))|x232);

	if (t57 != -27LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 5U;
	int32_t x234 = INT32_MIN;
	uint16_t x235 = 89U;
	volatile uint32_t t58 = UINT32_MAX;

	t58 = ((x233==(x234&x235))|x236);

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x238 = -1LL;
	volatile int64_t t59 = 1485706278594961276LL;

	t59 = ((x237==(x238&x239))|x240);

	if (t59 != 19LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x241 = 58114805LL;
	static int8_t x242 = -1;
	int64_t x243 = INT64_MIN;
	static volatile int32_t x244 = INT32_MAX;
	static volatile int32_t t60 = INT32_MAX;

	t60 = ((x241==(x242&x243))|x244);

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x245 = UINT8_MAX;
	uint64_t x246 = UINT64_MAX;
	static uint8_t x247 = UINT8_MAX;
	volatile int16_t x248 = INT16_MAX;
	static int32_t t61 = 31;

	t61 = ((x245==(x246&x247))|x248);

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MIN;
	static volatile int32_t x250 = -1;
	int8_t x251 = -1;
	static volatile int32_t x252 = INT32_MIN;
	int32_t t62 = INT32_MIN;

	t62 = ((x249==(x250&x251))|x252);

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -2464LL;
	int64_t x254 = -1LL;
	uint64_t x255 = UINT64_MAX;
	volatile uint32_t t63 = 2721367U;

	t63 = ((x253==(x254&x255))|x256);

	if (t63 != 15235U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = -1;
	uint16_t x259 = UINT16_MAX;
	int8_t x260 = INT8_MAX;
	volatile int32_t t64 = 3;

	t64 = ((x257==(x258&x259))|x260);

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = -1;
	int16_t x262 = -1;
	static int16_t x263 = -219;
	int64_t x264 = 120729732517481599LL;

	t65 = ((x261==(x262&x263))|x264);

	if (t65 != 120729732517481599LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x265 = INT16_MAX;
	volatile uint64_t x266 = UINT64_MAX;
	uint32_t x267 = UINT32_MAX;
	int32_t x268 = -18864;
	int32_t t66 = 68097263;

	t66 = ((x265==(x266&x267))|x268);

	if (t66 != -18864) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x270 = 27739U;
	static volatile int8_t x271 = INT8_MIN;
	volatile int64_t x272 = INT64_MIN;
	int64_t t67 = INT64_MIN;

	t67 = ((x269==(x270&x271))|x272);

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	uint64_t x275 = UINT64_MAX;
	int16_t x276 = -1;
	volatile int32_t t68 = 7335926;

	t68 = ((x273==(x274&x275))|x276);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x277 = 3494;
	volatile int64_t x278 = -1LL;
	int64_t x279 = INT64_MIN;
	int32_t x280 = INT32_MIN;
	volatile int32_t t69 = INT32_MIN;

	t69 = ((x277==(x278&x279))|x280);

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x281 = -8802;
	uint8_t x282 = UINT8_MAX;
	int16_t x283 = 49;
	int64_t x284 = INT64_MIN;
	volatile int64_t t70 = INT64_MIN;

	t70 = ((x281==(x282&x283))|x284);

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x285 = INT64_MAX;
	uint32_t x286 = 1U;
	int64_t x287 = -1LL;
	static uint32_t t71 = UINT32_MAX;

	t71 = ((x285==(x286&x287))|x288);

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = 19934074091820230LLU;
	volatile int64_t x291 = INT64_MIN;
	int32_t x292 = INT32_MIN;

	t72 = ((x289==(x290&x291))|x292);

	if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x294 = INT32_MIN;
	volatile int16_t x295 = 1;
	uint8_t x296 = 3U;

	t73 = ((x293==(x294&x295))|x296);

	if (t73 != 3) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x298 = INT8_MIN;
	volatile int16_t x299 = -1;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = ((x297==(x298&x299))|x300);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = -5438111541LL;
	int16_t x303 = INT16_MIN;
	uint16_t x304 = UINT16_MAX;
	static int32_t t75 = 7974492;

	t75 = ((x301==(x302&x303))|x304);

	if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x306 = UINT8_MAX;
	uint64_t x307 = 2392226653560511LLU;
	int16_t x308 = 15179;
	volatile int32_t t76 = -1;

	t76 = ((x305==(x306&x307))|x308);

	if (t76 != 15179) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = 6937975005880LLU;
	uint8_t x310 = 0U;
	uint16_t x312 = UINT16_MAX;

	t77 = ((x309==(x310&x311))|x312);

	if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x314 = INT16_MAX;
	int16_t x315 = 276;
	static int16_t x316 = INT16_MIN;
	int32_t t78 = -1901;

	t78 = ((x313==(x314&x315))|x316);

	if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MAX;
	static uint64_t x318 = 95956LLU;
	int8_t x319 = -1;
	volatile int64_t x320 = 65174LL;
	int64_t t79 = -1416LL;

	t79 = ((x317==(x318&x319))|x320);

	if (t79 != 65174LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -54774;
	int64_t x323 = INT64_MIN;
	uint64_t x324 = 194933112380821LLU;
	uint64_t t80 = 37954278251547984LLU;

	t80 = ((x321==(x322&x323))|x324);

	if (t80 != 194933112380821LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x325 = UINT16_MAX;
	static int32_t x326 = INT32_MIN;
	int8_t x328 = -1;
	int32_t t81 = -1;

	t81 = ((x325==(x326&x327))|x328);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x330 = 27U;
	volatile int32_t x332 = INT32_MAX;
	int32_t t82 = INT32_MAX;

	t82 = ((x329==(x330&x331))|x332);

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 0U;
	volatile int32_t x334 = INT32_MIN;
	int32_t x335 = 8356241;
	volatile int32_t x336 = -1;
	volatile int32_t t83 = -348255;

	t83 = ((x333==(x334&x335))|x336);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -1;
	int8_t x338 = INT8_MAX;
	int64_t x339 = 5282769822909575LL;
	volatile int32_t x340 = -1;
	volatile int32_t t84 = -634738;

	t84 = ((x337==(x338&x339))|x340);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x342 = UINT8_MAX;
	int64_t x343 = INT64_MIN;
	int64_t x344 = -1LL;
	static volatile int64_t t85 = 1LL;

	t85 = ((x341==(x342&x343))|x344);

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MIN;
	uint32_t x347 = UINT32_MAX;
	int64_t x348 = -383728LL;
	volatile int64_t t86 = 435136729875532276LL;

	t86 = ((x345==(x346&x347))|x348);

	if (t86 != -383728LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x349 = -15252;
	int32_t x351 = -1;
	int32_t x352 = 12;
	int32_t t87 = 8874265;

	t87 = ((x349==(x350&x351))|x352);

	if (t87 != 12) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x353 = -1;
	int64_t x355 = INT64_MIN;
	uint16_t x356 = 80U;
	volatile int32_t t88 = -260829;

	t88 = ((x353==(x354&x355))|x356);

	if (t88 != 80) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 13LLU;
	volatile int16_t x358 = -1;
	uint64_t x360 = 10716203122LLU;
	uint64_t t89 = 60722900022LLU;

	t89 = ((x357==(x358&x359))|x360);

	if (t89 != 10716203122LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = -7;
	static uint32_t x362 = UINT32_MAX;
	static int8_t x363 = INT8_MIN;
	int32_t x364 = INT32_MIN;
	volatile int32_t t90 = INT32_MIN;

	t90 = ((x361==(x362&x363))|x364);

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MIN;
	volatile int64_t x366 = INT64_MIN;
	uint8_t x367 = 1U;
	int64_t x368 = INT64_MIN;

	t91 = ((x365==(x366&x367))|x368);

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x369 = 13U;
	int64_t x370 = INT64_MIN;
	int8_t x371 = 1;
	uint8_t x372 = 85U;
	static int32_t t92 = 148658;

	t92 = ((x369==(x370&x371))|x372);

	if (t92 != 85) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	static uint16_t x374 = UINT16_MAX;
	volatile int64_t x376 = 8761508099LL;
	volatile int64_t t93 = -1056717970733915555LL;

	t93 = ((x373==(x374&x375))|x376);

	if (t93 != 8761508099LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x378 = INT8_MAX;
	static int64_t x380 = INT64_MAX;
	int64_t t94 = INT64_MAX;

	t94 = ((x377==(x378&x379))|x380);

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x382 = 3;
	int32_t x383 = INT32_MIN;
	int64_t x384 = -1LL;
	volatile int64_t t95 = -1531013235877LL;

	t95 = ((x381==(x382&x383))|x384);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = UINT32_MAX;
	static int8_t x386 = -1;
	static int64_t x387 = -1LL;
	int64_t x388 = -57380956580673223LL;
	volatile int64_t t96 = -130651791LL;

	t96 = ((x385==(x386&x387))|x388);

	if (t96 != -57380956580673223LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x390 = INT32_MAX;
	uint32_t x392 = UINT32_MAX;
	uint32_t t97 = UINT32_MAX;

	t97 = ((x389==(x390&x391))|x392);

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x393 = -1;
	int32_t x394 = 953;
	uint8_t x395 = 45U;
	int64_t x396 = INT64_MIN;
	int64_t t98 = INT64_MIN;

	t98 = ((x393==(x394&x395))|x396);

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x399 = 3;
	volatile int64_t x400 = -1LL;
	volatile int64_t t99 = 1660873851989LL;

	t99 = ((x397==(x398&x399))|x400);

	if (t99 != -1LL) { NG(); } else { ; }
	
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

