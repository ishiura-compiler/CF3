#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MIN;
static uint16_t x7 = 2U;
int32_t t1 = 43467;
int8_t x11 = INT8_MIN;
static volatile uint64_t x13 = UINT64_MAX;
volatile int8_t x16 = 3;
uint8_t x22 = 13U;
int16_t x23 = INT16_MIN;
int32_t x25 = 65527370;
static volatile int16_t x30 = INT16_MAX;
int64_t x31 = -23088547737271LL;
volatile uint32_t x33 = 1494U;
int64_t x35 = INT64_MAX;
int32_t t9 = -18725;
int8_t x43 = INT8_MAX;
int64_t x49 = INT64_MIN;
int32_t t12 = 11459125;
uint16_t x53 = 471U;
volatile int16_t x54 = -1;
uint32_t x57 = 959327853U;
volatile int8_t x64 = INT8_MIN;
volatile int16_t x68 = INT16_MAX;
static volatile int16_t x71 = INT16_MIN;
int32_t t17 = 215723619;
volatile int32_t t18 = -89765;
static int32_t x115 = -7642;
uint16_t x118 = UINT16_MAX;
static uint64_t x119 = 1555560LLU;
int8_t x132 = INT8_MAX;
int32_t t32 = -1;
int32_t t33 = -254643;
int64_t x153 = -1LL;
int32_t x154 = -247442;
static int64_t x161 = -19107113911412LL;
int8_t x171 = INT8_MIN;
static uint8_t x175 = 14U;
int32_t t43 = -44737;
int8_t x186 = -7;
uint8_t x190 = UINT8_MAX;
volatile int32_t t47 = 11;
int8_t x195 = INT8_MAX;
static uint32_t x200 = 1308U;
volatile int32_t t50 = 7631142;
int16_t x205 = INT16_MIN;
volatile int8_t x210 = -1;
volatile int8_t x217 = 4;
int8_t x219 = -2;
int64_t x221 = -1LL;
uint8_t x222 = 1U;
volatile int32_t t55 = 2;
int64_t x225 = INT64_MAX;
uint64_t x231 = 27305763LLU;
static volatile int32_t t57 = -42804;
int8_t x241 = INT8_MAX;
volatile int32_t x246 = INT32_MAX;
static int8_t x248 = 0;
int32_t x253 = -1;
int16_t x257 = INT16_MIN;
int8_t x259 = INT8_MIN;
int32_t x264 = -4121703;
int32_t t65 = 1899859;
static uint8_t x265 = 48U;
int16_t x268 = -1;
uint16_t x272 = 51U;
int32_t x274 = -1;
static uint16_t x276 = UINT16_MAX;
volatile int32_t t68 = -1;
int64_t x277 = -136903LL;
uint32_t x278 = 180U;
int8_t x279 = -3;
int8_t x281 = -1;
static int32_t x286 = INT32_MAX;
static int64_t x289 = -1LL;
int64_t x293 = INT64_MIN;
int8_t x298 = INT8_MAX;
volatile int64_t x300 = -28441LL;
int32_t t75 = 2999;
static volatile uint16_t x306 = UINT16_MAX;
static int32_t x309 = -1;
static int16_t x311 = -1;
volatile int32_t t77 = 30727;
int64_t x318 = -272398LL;
uint32_t x331 = 2518U;
uint64_t x342 = 510649422922001LLU;
int32_t x354 = -1;
int64_t x355 = 179018746349LL;
uint32_t x358 = 5404925U;
static int64_t x369 = -2029LL;
volatile int32_t t92 = 54366;
uint16_t x374 = UINT16_MAX;
volatile uint64_t x392 = 13864LLU;
int32_t x397 = -1;


void f0(void) {
	int16_t x1 = INT16_MIN;
	static uint8_t x2 = UINT8_MAX;
	int8_t x3 = -1;
	volatile int32_t t0 = -707700082;

	t0 = ((x1==(x2<x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	uint8_t x6 = 28U;
	uint64_t x8 = UINT64_MAX;

	t1 = ((x5==(x6<x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 2U;
	uint16_t x10 = 0U;
	uint8_t x12 = 13U;
	int32_t t2 = -29;

	t2 = ((x9==(x10<x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = -33LL;
	volatile uint16_t x15 = 12464U;
	int32_t t3 = -1;

	t3 = ((x13==(x14<x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = INT32_MAX;
	int8_t x18 = INT8_MIN;
	int32_t x19 = INT32_MIN;
	volatile int32_t x20 = INT32_MAX;
	int32_t t4 = 1290;

	t4 = ((x17==(x18<x19))<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x21 = 3LLU;
	uint8_t x24 = 0U;
	static int32_t t5 = -360024557;

	t5 = ((x21==(x22<x23))<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = INT8_MAX;
	static volatile int16_t x27 = INT16_MAX;
	static int32_t x28 = INT32_MAX;
	int32_t t6 = 267;

	t6 = ((x25==(x26<x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MAX;
	volatile uint64_t x32 = UINT64_MAX;
	volatile int32_t t7 = 3715;

	t7 = ((x29==(x30<x31))<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = -9;
	int16_t x36 = INT16_MAX;
	int32_t t8 = -8937;

	t8 = ((x33==(x34<x35))<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = INT8_MIN;
	int16_t x38 = INT16_MIN;
	int16_t x39 = INT16_MAX;
	uint32_t x40 = UINT32_MAX;

	t9 = ((x37==(x38<x39))<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MIN;
	static int8_t x42 = INT8_MIN;
	uint64_t x44 = UINT64_MAX;
	int32_t t10 = -33632;

	t10 = ((x41==(x42<x43))<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	uint32_t x46 = UINT32_MAX;
	volatile uint32_t x47 = 2212U;
	static int8_t x48 = 7;
	int32_t t11 = 62;

	t11 = ((x45==(x46<x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x50 = UINT64_MAX;
	volatile int16_t x51 = -3;
	uint8_t x52 = 27U;

	t12 = ((x49==(x50<x51))<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x55 = INT64_MIN;
	int8_t x56 = INT8_MIN;
	int32_t t13 = -14030;

	t13 = ((x53==(x54<x55))<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = 6221073014575LL;
	int8_t x59 = -1;
	int64_t x60 = INT64_MIN;
	int32_t t14 = -76097;

	t14 = ((x57==(x58<x59))<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = INT8_MIN;
	static uint8_t x62 = UINT8_MAX;
	int8_t x63 = INT8_MIN;
	int32_t t15 = -477473605;

	t15 = ((x61==(x62<x63))<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x65 = 10;
	int64_t x66 = INT64_MIN;
	int32_t x67 = INT32_MIN;
	int32_t t16 = -599646;

	t16 = ((x65==(x66<x67))<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x69 = 845239U;
	volatile int32_t x70 = INT32_MIN;
	int64_t x72 = INT64_MAX;

	t17 = ((x69==(x70<x71))<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = -40;
	int64_t x74 = -1LL;
	int32_t x75 = INT32_MIN;
	static int16_t x76 = INT16_MIN;

	t18 = ((x73==(x74<x75))<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = -1;
	volatile uint64_t x78 = 42916931061303LLU;
	uint8_t x79 = 25U;
	int32_t x80 = INT32_MAX;
	static int32_t t19 = 76432809;

	t19 = ((x77==(x78<x79))<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = 8;
	uint16_t x82 = 0U;
	volatile uint32_t x83 = 14U;
	int64_t x84 = -1LL;
	volatile int32_t t20 = -1;

	t20 = ((x81==(x82<x83))<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	int8_t x86 = INT8_MIN;
	static int16_t x87 = INT16_MIN;
	static volatile int8_t x88 = INT8_MIN;
	volatile int32_t t21 = -5685;

	t21 = ((x85==(x86<x87))<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -307;
	volatile uint64_t x90 = 11LLU;
	static int64_t x91 = 16201795501045LL;
	int8_t x92 = -1;
	int32_t t22 = 3999;

	t22 = ((x89==(x90<x91))<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = 440608LL;
	volatile int32_t x94 = INT32_MIN;
	int16_t x95 = 9369;
	int64_t x96 = -1LL;
	int32_t t23 = -7670001;

	t23 = ((x93==(x94<x95))<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -40;
	volatile int16_t x98 = INT16_MIN;
	static int8_t x99 = 12;
	int32_t x100 = -1;
	int32_t t24 = -25230614;

	t24 = ((x97==(x98<x99))<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = -1LL;
	volatile int64_t x102 = INT64_MAX;
	uint64_t x103 = 9719241LLU;
	uint64_t x104 = 3052119840600189495LLU;
	volatile int32_t t25 = 398047903;

	t25 = ((x101==(x102<x103))<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x105 = 2541906411926247LLU;
	uint64_t x106 = 41293395LLU;
	int32_t x107 = -121882185;
	uint16_t x108 = 1947U;
	volatile int32_t t26 = 791605309;

	t26 = ((x105==(x106<x107))<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = -2137088389534LL;
	volatile int8_t x110 = -6;
	volatile uint16_t x111 = UINT16_MAX;
	int16_t x112 = INT16_MIN;
	int32_t t27 = -2703955;

	t27 = ((x109==(x110<x111))<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 46919U;
	int32_t x114 = 1128134;
	uint16_t x116 = UINT16_MAX;
	int32_t t28 = -1;

	t28 = ((x113==(x114<x115))<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 1U;
	uint16_t x120 = 4U;
	volatile int32_t t29 = -3899;

	t29 = ((x117==(x118<x119))<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	uint16_t x122 = UINT16_MAX;
	uint8_t x123 = 26U;
	int64_t x124 = -1103877095471197LL;
	int32_t t30 = 83;

	t30 = ((x121==(x122<x123))<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	volatile int16_t x126 = 21;
	static uint64_t x127 = UINT64_MAX;
	int8_t x128 = INT8_MIN;
	int32_t t31 = 108;

	t31 = ((x125==(x126<x127))<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x129 = 7170U;
	uint64_t x130 = UINT64_MAX;
	int32_t x131 = INT32_MAX;

	t32 = ((x129==(x130<x131))<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x133 = -1LL;
	int16_t x134 = INT16_MIN;
	int16_t x135 = -1;
	volatile int32_t x136 = INT32_MIN;

	t33 = ((x133==(x134<x135))<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -1;
	static uint8_t x138 = 2U;
	uint32_t x139 = UINT32_MAX;
	uint16_t x140 = 2U;
	int32_t t34 = 26132009;

	t34 = ((x137==(x138<x139))<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = 5;
	uint16_t x142 = 9320U;
	int16_t x143 = -1;
	uint16_t x144 = 1U;
	static volatile int32_t t35 = -14847255;

	t35 = ((x141==(x142<x143))<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = 1;
	volatile uint16_t x146 = UINT16_MAX;
	static int64_t x147 = INT64_MAX;
	uint16_t x148 = 0U;
	volatile int32_t t36 = 35;

	t36 = ((x145==(x146<x147))<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 72859LLU;
	int8_t x150 = 0;
	int8_t x151 = INT8_MIN;
	int32_t x152 = INT32_MIN;
	volatile int32_t t37 = 30362;

	t37 = ((x149==(x150<x151))<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x155 = -438;
	int16_t x156 = INT16_MIN;
	int32_t t38 = -269395;

	t38 = ((x153==(x154<x155))<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MAX;
	static uint16_t x158 = UINT16_MAX;
	volatile uint32_t x159 = 102335358U;
	uint32_t x160 = 1U;
	int32_t t39 = -42;

	t39 = ((x157==(x158<x159))<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x162 = 1842415U;
	uint64_t x163 = 1074814LLU;
	int8_t x164 = -1;
	volatile int32_t t40 = -106;

	t40 = ((x161==(x162<x163))<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -1;
	uint16_t x166 = 353U;
	volatile uint32_t x167 = UINT32_MAX;
	static uint16_t x168 = 31U;
	int32_t t41 = -1;

	t41 = ((x165==(x166<x167))<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	uint8_t x170 = UINT8_MAX;
	uint32_t x172 = 6U;
	static volatile int32_t t42 = -13775331;

	t42 = ((x169==(x170<x171))<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 6;
	int64_t x174 = -1004676387581232441LL;
	volatile uint16_t x176 = UINT16_MAX;

	t43 = ((x173==(x174<x175))<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MAX;
	uint32_t x178 = 605553U;
	volatile uint8_t x179 = 0U;
	int8_t x180 = INT8_MIN;
	int32_t t44 = 11;

	t44 = ((x177==(x178<x179))<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	uint64_t x182 = 144292118LLU;
	int32_t x183 = INT32_MIN;
	static int16_t x184 = -230;
	int32_t t45 = 23617;

	t45 = ((x181==(x182<x183))<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 27921322U;
	int32_t x187 = INT32_MAX;
	int8_t x188 = 3;
	volatile int32_t t46 = -417;

	t46 = ((x185==(x186<x187))<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -1LL;
	static int16_t x191 = INT16_MAX;
	int16_t x192 = INT16_MAX;

	t47 = ((x189==(x190<x191))<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x193 = -1;
	static int32_t x194 = INT32_MIN;
	static uint16_t x196 = 14U;
	int32_t t48 = 1197;

	t48 = ((x193==(x194<x195))<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = -20;
	int8_t x198 = INT8_MIN;
	int16_t x199 = -1;
	volatile int32_t t49 = 13403583;

	t49 = ((x197==(x198<x199))<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = UINT64_MAX;
	volatile uint8_t x202 = 31U;
	static volatile int64_t x203 = INT64_MIN;
	volatile int16_t x204 = -1;

	t50 = ((x201==(x202<x203))<x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x206 = INT8_MAX;
	static uint64_t x207 = 32548549LLU;
	uint16_t x208 = 1U;
	int32_t t51 = 144675;

	t51 = ((x205==(x206<x207))<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = UINT64_MAX;
	uint32_t x211 = UINT32_MAX;
	int32_t x212 = 0;
	int32_t t52 = -477;

	t52 = ((x209==(x210<x211))<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MIN;
	int8_t x214 = INT8_MIN;
	int8_t x215 = INT8_MIN;
	uint16_t x216 = 727U;
	int32_t t53 = 1006488;

	t53 = ((x213==(x214<x215))<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x218 = UINT8_MAX;
	uint8_t x220 = 109U;
	volatile int32_t t54 = 56;

	t54 = ((x217==(x218<x219))<x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x223 = -103021882;
	static int64_t x224 = 3293003539718LL;

	t55 = ((x221==(x222<x223))<x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x226 = INT32_MIN;
	volatile int64_t x227 = -1LL;
	static int8_t x228 = -1;
	volatile int32_t t56 = -2;

	t56 = ((x225==(x226<x227))<x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x229 = INT32_MIN;
	static int32_t x230 = 7;
	uint32_t x232 = 2121121659U;

	t57 = ((x229==(x230<x231))<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = -1;
	uint32_t x234 = 15067U;
	static uint64_t x235 = UINT64_MAX;
	uint16_t x236 = 638U;
	volatile int32_t t58 = 1;

	t58 = ((x233==(x234<x235))<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	uint16_t x238 = 12U;
	int32_t x239 = 81;
	uint64_t x240 = 5LLU;
	static int32_t t59 = -1980;

	t59 = ((x237==(x238<x239))<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x242 = INT8_MIN;
	int16_t x243 = INT16_MIN;
	int8_t x244 = -1;
	volatile int32_t t60 = 490466887;

	t60 = ((x241==(x242<x243))<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = -13;
	volatile int16_t x247 = -1;
	static int32_t t61 = 19;

	t61 = ((x245==(x246<x247))<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MAX;
	int32_t x250 = INT32_MIN;
	uint16_t x251 = UINT16_MAX;
	int8_t x252 = INT8_MIN;
	int32_t t62 = -2441;

	t62 = ((x249==(x250<x251))<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x254 = INT32_MAX;
	volatile int32_t x255 = -1;
	volatile uint16_t x256 = UINT16_MAX;
	int32_t t63 = 1;

	t63 = ((x253==(x254<x255))<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint32_t x258 = UINT32_MAX;
	static uint16_t x260 = UINT16_MAX;
	volatile int32_t t64 = -560;

	t64 = ((x257==(x258<x259))<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x261 = 76695027U;
	static uint16_t x262 = 938U;
	volatile int8_t x263 = -1;

	t65 = ((x261==(x262<x263))<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x266 = UINT8_MAX;
	int64_t x267 = -1LL;
	static volatile int32_t t66 = -7553;

	t66 = ((x265==(x266<x267))<x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x269 = INT64_MIN;
	static volatile uint32_t x270 = 378659246U;
	volatile int16_t x271 = INT16_MAX;
	volatile int32_t t67 = 24;

	t67 = ((x269==(x270<x271))<x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -41840;
	int32_t x275 = INT32_MIN;

	t68 = ((x273==(x274<x275))<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x280 = 396183;
	volatile int32_t t69 = 61119;

	t69 = ((x277==(x278<x279))<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x282 = -1;
	int32_t x283 = INT32_MAX;
	static volatile int8_t x284 = INT8_MAX;
	volatile int32_t t70 = 9;

	t70 = ((x281==(x282<x283))<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	uint16_t x287 = 30451U;
	static uint16_t x288 = 13U;
	int32_t t71 = -1;

	t71 = ((x285==(x286<x287))<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x290 = INT32_MIN;
	int8_t x291 = -1;
	volatile int8_t x292 = INT8_MIN;
	int32_t t72 = -173;

	t72 = ((x289==(x290<x291))<x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x294 = -1;
	uint64_t x295 = UINT64_MAX;
	uint32_t x296 = UINT32_MAX;
	volatile int32_t t73 = 3910;

	t73 = ((x293==(x294<x295))<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MAX;
	int8_t x299 = INT8_MIN;
	static int32_t t74 = -232;

	t74 = ((x297==(x298<x299))<x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x301 = 1LLU;
	volatile int64_t x302 = INT64_MIN;
	int8_t x303 = 1;
	static int64_t x304 = 23898019LL;

	t75 = ((x301==(x302<x303))<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = INT32_MIN;
	int32_t x307 = -1;
	int32_t x308 = INT32_MIN;
	int32_t t76 = 1761;

	t76 = ((x305==(x306<x307))<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x310 = 3455517732LL;
	static int8_t x312 = -1;

	t77 = ((x309==(x310<x311))<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x313 = INT8_MIN;
	int64_t x314 = -887991488139LL;
	int8_t x315 = INT8_MIN;
	int8_t x316 = INT8_MIN;
	int32_t t78 = -348;

	t78 = ((x313==(x314<x315))<x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x317 = -1;
	int16_t x319 = -1;
	static uint64_t x320 = 37508253498640467LLU;
	int32_t t79 = 16643318;

	t79 = ((x317==(x318<x319))<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x321 = UINT32_MAX;
	int64_t x322 = INT64_MAX;
	int64_t x323 = 16LL;
	int16_t x324 = INT16_MAX;
	int32_t t80 = -1251;

	t80 = ((x321==(x322<x323))<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x325 = 35353333363477967LLU;
	int32_t x326 = INT32_MIN;
	int16_t x327 = -124;
	uint32_t x328 = 46822U;
	int32_t t81 = 7281419;

	t81 = ((x325==(x326<x327))<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 29U;
	int16_t x330 = -1;
	uint64_t x332 = 9799LLU;
	int32_t t82 = -3;

	t82 = ((x329==(x330<x331))<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 353U;
	int64_t x334 = -1LL;
	int8_t x335 = -15;
	volatile int32_t x336 = INT32_MIN;
	static volatile int32_t t83 = 63866;

	t83 = ((x333==(x334<x335))<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x337 = -1;
	int64_t x338 = INT64_MIN;
	int8_t x339 = -48;
	int16_t x340 = INT16_MAX;
	volatile int32_t t84 = 6;

	t84 = ((x337==(x338<x339))<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	uint16_t x343 = 7U;
	int32_t x344 = INT32_MAX;
	static volatile int32_t t85 = 34;

	t85 = ((x341==(x342<x343))<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x345 = INT8_MAX;
	uint8_t x346 = 28U;
	uint32_t x347 = UINT32_MAX;
	int16_t x348 = 0;
	int32_t t86 = -106268353;

	t86 = ((x345==(x346<x347))<x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	uint64_t x350 = UINT64_MAX;
	int16_t x351 = INT16_MIN;
	static uint16_t x352 = 3612U;
	volatile int32_t t87 = -8142581;

	t87 = ((x349==(x350<x351))<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -1;
	uint16_t x356 = 471U;
	volatile int32_t t88 = -11;

	t88 = ((x353==(x354<x355))<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x357 = INT32_MIN;
	int8_t x359 = 1;
	int32_t x360 = INT32_MIN;
	int32_t t89 = 334984508;

	t89 = ((x357==(x358<x359))<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x361 = INT32_MIN;
	static uint32_t x362 = UINT32_MAX;
	static volatile int64_t x363 = INT64_MIN;
	static volatile int32_t x364 = INT32_MIN;
	int32_t t90 = 1;

	t90 = ((x361==(x362<x363))<x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MIN;
	uint8_t x366 = 6U;
	uint8_t x367 = UINT8_MAX;
	volatile int8_t x368 = -1;
	int32_t t91 = 39406474;

	t91 = ((x365==(x366<x367))<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x370 = -1LL;
	uint8_t x371 = 2U;
	uint64_t x372 = UINT64_MAX;

	t92 = ((x369==(x370<x371))<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 162703LLU;
	uint32_t x375 = 24264389U;
	volatile int64_t x376 = -4084LL;
	volatile int32_t t93 = -5497694;

	t93 = ((x373==(x374<x375))<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x377 = INT16_MAX;
	static int64_t x378 = INT64_MIN;
	int32_t x379 = INT32_MAX;
	volatile int16_t x380 = INT16_MIN;
	static int32_t t94 = 11889528;

	t94 = ((x377==(x378<x379))<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	volatile uint32_t x382 = 14U;
	int32_t x383 = 5744;
	int16_t x384 = INT16_MIN;
	static int32_t t95 = -160;

	t95 = ((x381==(x382<x383))<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x385 = -1;
	int8_t x386 = INT8_MAX;
	static int32_t x387 = 39483;
	int16_t x388 = INT16_MIN;
	volatile int32_t t96 = -1850536;

	t96 = ((x385==(x386<x387))<x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = 6;
	volatile uint8_t x390 = 58U;
	int32_t x391 = INT32_MAX;
	volatile int32_t t97 = -47909868;

	t97 = ((x389==(x390<x391))<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x393 = -7;
	volatile int32_t x394 = INT32_MAX;
	volatile uint32_t x395 = 3882U;
	int16_t x396 = INT16_MIN;
	volatile int32_t t98 = 175;

	t98 = ((x393==(x394<x395))<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x398 = 146710;
	volatile int16_t x399 = -1;
	uint16_t x400 = 17U;
	volatile int32_t t99 = -1360992;

	t99 = ((x397==(x398<x399))<x400);

	if (t99 != 1) { NG(); } else { ; }
	
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

