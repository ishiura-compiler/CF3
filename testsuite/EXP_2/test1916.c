#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x2 = 7950457;
static int32_t t2 = -402594;
static uint16_t x17 = UINT16_MAX;
volatile int64_t t4 = -24LL;
static int32_t x21 = INT32_MAX;
volatile uint64_t t5 = 429LLU;
static int64_t x25 = 20LL;
uint32_t x28 = 61461U;
int16_t x33 = 1;
volatile int32_t t8 = -7;
volatile int8_t x39 = -1;
static volatile uint32_t x43 = UINT32_MAX;
int32_t t13 = 3878;
int8_t x60 = INT8_MIN;
volatile int64_t t14 = -1207135812870LL;
volatile int64_t x64 = INT64_MAX;
static volatile int64_t t15 = 50LL;
static int16_t x70 = INT16_MIN;
int32_t x71 = INT32_MIN;
int8_t x73 = -1;
int32_t x84 = INT32_MIN;
int32_t x93 = INT32_MIN;
uint32_t x97 = UINT32_MAX;
static volatile uint16_t x100 = 3U;
int16_t x105 = INT16_MIN;
int32_t x108 = -520907664;
volatile int32_t t26 = 898106;
static int16_t x109 = -1;
int32_t x110 = INT32_MAX;
static int8_t x112 = INT8_MIN;
int16_t x114 = INT16_MAX;
volatile int64_t x121 = INT64_MAX;
uint32_t x122 = 57U;
int8_t x123 = INT8_MAX;
volatile int32_t x128 = 175098148;
volatile uint32_t x130 = UINT32_MAX;
uint8_t x133 = 0U;
volatile int16_t x137 = INT16_MAX;
int64_t x140 = INT64_MIN;
int32_t x143 = 1260963;
volatile uint32_t t35 = 39U;
static uint32_t x145 = 55U;
uint16_t x146 = UINT16_MAX;
uint64_t x150 = UINT64_MAX;
volatile uint64_t t37 = 1962637349288443854LLU;
volatile int32_t x156 = -272856565;
int32_t x160 = 1763021;
static int16_t x161 = -1;
int32_t x162 = -1;
volatile uint64_t x171 = 55385951863080915LLU;
int32_t x173 = INT32_MAX;
static int16_t x176 = -115;
static uint32_t x181 = UINT32_MAX;
uint64_t x184 = UINT64_MAX;
uint64_t t46 = 953252915957LLU;
volatile int64_t x192 = -1LL;
uint8_t x195 = 0U;
int16_t x197 = INT16_MIN;
int16_t x206 = 0;
int32_t x208 = INT32_MIN;
int32_t t52 = -418842;
volatile int64_t t53 = 43186579676LL;
uint32_t x222 = 19U;
int16_t x225 = 1;
volatile uint16_t x226 = UINT16_MAX;
volatile int64_t t56 = 10LL;
static uint8_t x235 = 8U;
static uint64_t t59 = 0LLU;
static uint16_t x247 = 836U;
int64_t x248 = INT64_MIN;
static int64_t t60 = 69429288241929975LL;
static int64_t x253 = 59493164LL;
uint16_t x261 = UINT16_MAX;
static volatile int32_t t64 = -1189;
static uint8_t x267 = 73U;
static uint64_t x268 = UINT64_MAX;
static int64_t x273 = INT64_MIN;
int64_t x275 = INT64_MIN;
int64_t t67 = -333709928016342LL;
volatile uint16_t x277 = UINT16_MAX;
static volatile int32_t t68 = -12195;
int8_t x288 = INT8_MIN;
int32_t x291 = 1975;
int16_t x292 = -1;
static int64_t t73 = -24LL;
volatile uint32_t x306 = UINT32_MAX;
volatile uint32_t x315 = UINT32_MAX;
int16_t x324 = -58;
static int32_t x327 = INT32_MIN;
static uint32_t x332 = 15U;
static uint64_t x334 = 39LLU;
volatile uint16_t x337 = 348U;
int8_t x342 = INT8_MIN;
static int32_t x343 = -12316;
int32_t x345 = INT32_MAX;
static int32_t x348 = INT32_MIN;
uint64_t x356 = 1170607066314297LLU;
int64_t x363 = 74480378364280LL;
static int64_t t88 = -25124315319LL;
int8_t x374 = -5;
uint64_t x382 = UINT64_MAX;
int64_t x385 = -148LL;
int32_t x392 = 2;
int64_t t95 = 9587251LL;
volatile int64_t x394 = -133591241LL;
volatile uint32_t x398 = 45U;
volatile int16_t x404 = -106;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	static uint16_t x3 = 1621U;
	int64_t x4 = INT64_MAX;
	volatile int64_t t0 = 1650970449167958LL;

	t0 = ((x1%(x2|x3))%x4);

	if (t0 != 888915LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 3932U;
	volatile int8_t x6 = -1;
	uint64_t x7 = 12538LLU;
	int64_t x8 = -1LL;
	uint64_t t1 = 814LLU;

	t1 = ((x5%(x6|x7))%x8);

	if (t1 != 3932LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 54U;
	int16_t x10 = 8;
	volatile int32_t x11 = INT32_MAX;
	volatile uint16_t x12 = UINT16_MAX;

	t2 = ((x9%(x10|x11))%x12);

	if (t2 != 54) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MIN;
	uint16_t x14 = 41U;
	uint64_t x15 = 56458LLU;
	int16_t x16 = INT16_MAX;
	volatile uint64_t t3 = 321443LLU;

	t3 = ((x13%(x14|x15))%x16);

	if (t3 != 19134LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x18 = 30U;
	int64_t x19 = -173968337815LL;
	uint8_t x20 = UINT8_MAX;

	t4 = ((x17%(x18|x19))%x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x22 = -4529LL;
	uint64_t x23 = 34829LLU;
	volatile uint8_t x24 = UINT8_MAX;

	t5 = ((x21%(x22|x23))%x24);

	if (t5 != 127LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = -1;
	int16_t x27 = -4249;
	int64_t t6 = 382385877009771958LL;

	t6 = ((x25%(x26|x27))%x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	volatile int32_t x30 = INT32_MAX;
	uint32_t x31 = 125970U;
	volatile uint8_t x32 = 19U;
	static int64_t t7 = 187LL;

	t7 = ((x29%(x30|x31))%x32);

	if (t7 != -2LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x34 = UINT16_MAX;
	int16_t x35 = -1;
	int16_t x36 = 1637;

	t8 = ((x33%(x34|x35))%x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	volatile int32_t x38 = -1;
	static uint8_t x40 = UINT8_MAX;
	volatile int32_t t9 = -3818;

	t9 = ((x37%(x38|x39))%x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 54U;
	int64_t x42 = INT64_MIN;
	int16_t x44 = -458;
	volatile int64_t t10 = 5LL;

	t10 = ((x41%(x42|x43))%x44);

	if (t10 != 54LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	uint64_t x46 = UINT64_MAX;
	int64_t x47 = 16104575524LL;
	static volatile int8_t x48 = -2;
	static uint64_t t11 = 507LLU;

	t11 = ((x45%(x46|x47))%x48);

	if (t11 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	int8_t x50 = -1;
	int32_t x51 = INT32_MIN;
	int8_t x52 = INT8_MIN;
	volatile int32_t t12 = 12429;

	t12 = ((x49%(x50|x51))%x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	uint16_t x54 = UINT16_MAX;
	uint16_t x55 = 150U;
	volatile int32_t x56 = 93310;

	t13 = ((x53%(x54|x55))%x56);

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x57 = 0U;
	int64_t x58 = 447868798LL;
	static uint32_t x59 = 894365U;

	t14 = ((x57%(x58|x59))%x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	static int8_t x62 = -1;
	int64_t x63 = -2415340278598469387LL;

	t15 = ((x61%(x62|x63))%x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 76561978889562779LLU;
	int16_t x66 = 460;
	volatile int16_t x67 = INT16_MIN;
	int8_t x68 = INT8_MIN;
	volatile uint64_t t16 = 74LLU;

	t16 = ((x65%(x66|x67))%x68);

	if (t16 != 76561978889562779LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = 1U;
	int64_t x72 = -233889673226155LL;
	int64_t t17 = 798801LL;

	t17 = ((x69%(x70|x71))%x72);

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = -1;
	uint16_t x75 = 10535U;
	uint16_t x76 = 3U;
	volatile int32_t t18 = -69;

	t18 = ((x73%(x74|x75))%x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	static volatile uint16_t x78 = UINT16_MAX;
	int64_t x79 = -1LL;
	uint16_t x80 = 1273U;
	int64_t t19 = 8291485644344LL;

	t19 = ((x77%(x78|x79))%x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	static int8_t x82 = INT8_MIN;
	int16_t x83 = -86;
	volatile int64_t t20 = 254225859LL;

	t20 = ((x81%(x82|x83))%x84);

	if (t20 != -42LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 32242011U;
	int64_t x86 = -1LL;
	int32_t x87 = 0;
	volatile int32_t x88 = -1;
	int64_t t21 = 431792LL;

	t21 = ((x85%(x86|x87))%x88);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = 568428734;
	int16_t x90 = INT16_MIN;
	static uint64_t x91 = 51597LLU;
	int64_t x92 = INT64_MIN;
	uint64_t t22 = 2416498127LLU;

	t22 = ((x89%(x90|x91))%x92);

	if (t22 != 568428734LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x94 = INT64_MAX;
	uint64_t x95 = UINT64_MAX;
	volatile uint16_t x96 = 17U;
	uint64_t t23 = 611LLU;

	t23 = ((x93%(x94|x95))%x96);

	if (t23 != 9LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x98 = INT8_MIN;
	int16_t x99 = -1;
	static volatile uint32_t t24 = 1737015U;

	t24 = ((x97%(x98|x99))%x100);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	int8_t x102 = INT8_MIN;
	int32_t x103 = INT32_MIN;
	volatile int16_t x104 = INT16_MIN;
	static volatile int32_t t25 = 60218082;

	t25 = ((x101%(x102|x103))%x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x106 = 10U;
	volatile int16_t x107 = 8167;

	t26 = ((x105%(x106|x107))%x108);

	if (t26 != -68) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x111 = INT32_MIN;
	int32_t t27 = 463;

	t27 = ((x109%(x110|x111))%x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x113 = INT16_MIN;
	volatile uint8_t x115 = 2U;
	uint64_t x116 = 34944560966326521LLU;
	volatile uint64_t t28 = 91686151LLU;

	t28 = ((x113%(x114|x115))%x116);

	if (t28 != 30960444455475048LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = 8;
	volatile int16_t x118 = INT16_MIN;
	uint64_t x119 = UINT64_MAX;
	int32_t x120 = INT32_MIN;
	uint64_t t29 = 1034219076519430614LLU;

	t29 = ((x117%(x118|x119))%x120);

	if (t29 != 8LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x124 = -1LL;
	volatile int64_t t30 = -79415917LL;

	t30 = ((x121%(x122|x123))%x124);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MAX;
	volatile uint8_t x126 = 7U;
	uint8_t x127 = 0U;
	volatile int32_t t31 = -24;

	t31 = ((x125%(x126|x127))%x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x129 = 1329432808LLU;
	int32_t x131 = 544;
	int64_t x132 = 2103222233473LL;
	volatile uint64_t t32 = 51214235LLU;

	t32 = ((x129%(x130|x131))%x132);

	if (t32 != 1329432808LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = INT16_MIN;
	int8_t x135 = -7;
	int16_t x136 = INT16_MAX;
	static int32_t t33 = 500;

	t33 = ((x133%(x134|x135))%x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x138 = INT16_MIN;
	uint16_t x139 = 2U;
	static int64_t t34 = 88532802284LL;

	t34 = ((x137%(x138|x139))%x140);

	if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = 428;
	int16_t x142 = INT16_MIN;
	uint32_t x144 = 51781649U;

	t35 = ((x141%(x142|x143))%x144);

	if (t35 != 428U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x147 = INT16_MIN;
	static int16_t x148 = INT16_MAX;
	static uint32_t t36 = 212743U;

	t36 = ((x145%(x146|x147))%x148);

	if (t36 != 55U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MAX;
	int8_t x151 = 1;
	int8_t x152 = -14;

	t37 = ((x149%(x150|x151))%x152);

	if (t37 != 127LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = 11;
	volatile uint64_t x154 = 2942375590398LLU;
	int8_t x155 = -1;
	uint64_t t38 = 414389LLU;

	t38 = ((x153%(x154|x155))%x156);

	if (t38 != 11LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	static uint16_t x158 = 193U;
	int16_t x159 = INT16_MIN;
	int32_t t39 = -9300;

	t39 = ((x157%(x158|x159))%x160);

	if (t39 != -9348) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x163 = -1LL;
	static volatile uint32_t x164 = UINT32_MAX;
	volatile int64_t t40 = -63335743566LL;

	t40 = ((x161%(x162|x163))%x164);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x165 = UINT64_MAX;
	int16_t x166 = INT16_MIN;
	uint8_t x167 = 82U;
	static int32_t x168 = 10114;
	static uint64_t t41 = 261394380901538994LLU;

	t41 = ((x165%(x166|x167))%x168);

	if (t41 != 2343LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x169 = INT64_MIN;
	int8_t x170 = -1;
	static int8_t x172 = INT8_MIN;
	uint64_t t42 = 351603908163451LLU;

	t42 = ((x169%(x170|x171))%x172);

	if (t42 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x174 = 144689LLU;
	int32_t x175 = -1;
	volatile uint64_t t43 = 3520LLU;

	t43 = ((x173%(x174|x175))%x176);

	if (t43 != 2147483647LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = UINT64_MAX;
	int64_t x178 = INT64_MAX;
	int32_t x179 = 105776;
	int16_t x180 = INT16_MIN;
	uint64_t t44 = 6035445022882LLU;

	t44 = ((x177%(x178|x179))%x180);

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x182 = 24U;
	int8_t x183 = -1;
	static uint64_t t45 = 145994182550425968LLU;

	t45 = ((x181%(x182|x183))%x184);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x185 = 512005LLU;
	volatile uint32_t x186 = UINT32_MAX;
	int64_t x187 = INT64_MIN;
	static uint64_t x188 = UINT64_MAX;

	t46 = ((x185%(x186|x187))%x188);

	if (t46 != 512005LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = UINT16_MAX;
	uint64_t x190 = UINT64_MAX;
	int16_t x191 = -1;
	uint64_t t47 = 3150LLU;

	t47 = ((x189%(x190|x191))%x192);

	if (t47 != 65535LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -215;
	int64_t x194 = -52405684381LL;
	uint32_t x196 = 425062U;
	volatile int64_t t48 = 55076LL;

	t48 = ((x193%(x194|x195))%x196);

	if (t48 != -215LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x198 = 7832U;
	static uint64_t x199 = 12405LLU;
	static uint32_t x200 = 6291U;
	volatile uint64_t t49 = 573502LLU;

	t49 = ((x197%(x198|x199))%x200);

	if (t49 != 5057LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint16_t x201 = UINT16_MAX;
	int16_t x202 = INT16_MAX;
	uint16_t x203 = 1204U;
	volatile int8_t x204 = 1;
	volatile int32_t t50 = -13448958;

	t50 = ((x201%(x202|x203))%x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = UINT8_MAX;
	int16_t x207 = -1995;
	int32_t t51 = 7688311;

	t51 = ((x205%(x206|x207))%x208);

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -72834;
	volatile int16_t x210 = INT16_MIN;
	static int16_t x211 = -279;
	volatile int32_t x212 = -6520;

	t52 = ((x209%(x210|x211))%x212);

	if (t52 != -15) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = UINT32_MAX;
	int32_t x214 = -5455;
	int8_t x215 = -1;
	volatile int64_t x216 = 54494203425211LL;

	t53 = ((x213%(x214|x215))%x216);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = -1;
	uint32_t x223 = 605U;
	int32_t x224 = 914379;
	volatile uint32_t t54 = 3U;

	t54 = ((x221%(x222|x223))%x224);

	if (t54 != 399U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x227 = UINT32_MAX;
	int32_t x228 = INT32_MIN;
	volatile uint32_t t55 = 11U;

	t55 = ((x225%(x226|x227))%x228);

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x229 = INT32_MIN;
	int64_t x230 = 59430666564160352LL;
	volatile int32_t x231 = INT32_MIN;
	static int8_t x232 = INT8_MAX;

	t56 = ((x229%(x230|x231))%x232);

	if (t56 != -32LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x233 = 1;
	int16_t x234 = 247;
	int32_t x236 = INT32_MIN;
	static volatile int32_t t57 = -1970;

	t57 = ((x233%(x234|x235))%x236);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x237 = INT16_MIN;
	int16_t x238 = INT16_MIN;
	volatile int32_t x239 = INT32_MIN;
	uint32_t x240 = 1476930U;
	volatile uint32_t t58 = 333147791U;

	t58 = ((x237%(x238|x239))%x240);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x241 = INT32_MIN;
	int64_t x242 = 1LL;
	volatile uint64_t x243 = 17599862921551524LLU;
	volatile uint64_t x244 = UINT64_MAX;

	t59 = ((x241%(x242|x243))%x244);

	if (t59 != 2087729776069768LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x245 = -5470;
	static int8_t x246 = -1;

	t60 = ((x245%(x246|x247))%x248);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x249 = -1LL;
	uint32_t x250 = 307603316U;
	int64_t x251 = INT64_MAX;
	static int64_t x252 = INT64_MIN;
	volatile int64_t t61 = -1313LL;

	t61 = ((x249%(x250|x251))%x252);

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x254 = INT16_MIN;
	static int8_t x255 = INT8_MIN;
	uint64_t x256 = 7609810238149668LLU;
	static uint64_t t62 = 25642LLU;

	t62 = ((x253%(x254|x255))%x256);

	if (t62 != 44LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x257 = INT8_MAX;
	int8_t x258 = -1;
	int64_t x259 = -1LL;
	static volatile int8_t x260 = INT8_MIN;
	static int64_t t63 = -4LL;

	t63 = ((x257%(x258|x259))%x260);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x262 = -1;
	volatile int8_t x263 = INT8_MIN;
	int32_t x264 = -1;

	t64 = ((x261%(x262|x263))%x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x265 = -1LL;
	int16_t x266 = 1208;
	static volatile uint64_t t65 = 2131142335930LLU;

	t65 = ((x265%(x266|x267))%x268);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x269 = -1;
	uint64_t x270 = UINT64_MAX;
	static int16_t x271 = 3842;
	int8_t x272 = INT8_MIN;
	volatile uint64_t t66 = 1747653287426LLU;

	t66 = ((x269%(x270|x271))%x272);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x274 = -1LL;
	int8_t x276 = -2;

	t67 = ((x273%(x274|x275))%x276);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x278 = INT16_MIN;
	int16_t x279 = 7673;
	int16_t x280 = INT16_MIN;

	t68 = ((x277%(x278|x279))%x280);

	if (t68 != 15345) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x281 = 4;
	volatile int32_t x282 = INT32_MIN;
	int64_t x283 = -1607361134145LL;
	uint8_t x284 = UINT8_MAX;
	static int64_t t69 = -241756646LL;

	t69 = ((x281%(x282|x283))%x284);

	if (t69 != 4LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x285 = 431;
	uint8_t x286 = UINT8_MAX;
	uint32_t x287 = 31564143U;
	volatile uint32_t t70 = 12472U;

	t70 = ((x285%(x286|x287))%x288);

	if (t70 != 431U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x289 = -1;
	int64_t x290 = -1LL;
	int64_t t71 = -2539204LL;

	t71 = ((x289%(x290|x291))%x292);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x293 = 292U;
	static int8_t x294 = -9;
	int16_t x295 = INT16_MAX;
	static volatile uint32_t x296 = 8056U;
	static volatile uint32_t t72 = 96U;

	t72 = ((x293%(x294|x295))%x296);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x297 = INT8_MIN;
	static int64_t x298 = INT64_MIN;
	int8_t x299 = -1;
	uint8_t x300 = 8U;

	t73 = ((x297%(x298|x299))%x300);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x301 = INT16_MIN;
	volatile uint16_t x302 = 0U;
	int64_t x303 = INT64_MAX;
	uint16_t x304 = 5443U;
	int64_t t74 = 0LL;

	t74 = ((x301%(x302|x303))%x304);

	if (t74 != -110LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x305 = UINT8_MAX;
	uint16_t x307 = 3U;
	int64_t x308 = INT64_MAX;
	static int64_t t75 = 1LL;

	t75 = ((x305%(x306|x307))%x308);

	if (t75 != 255LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x313 = 23;
	static volatile int16_t x314 = 355;
	volatile int32_t x316 = INT32_MIN;
	static volatile uint32_t t76 = 3U;

	t76 = ((x313%(x314|x315))%x316);

	if (t76 != 23U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x317 = INT16_MIN;
	volatile int32_t x318 = 5383074;
	int16_t x319 = INT16_MIN;
	int16_t x320 = INT16_MIN;
	int32_t t77 = -9;

	t77 = ((x317%(x318|x319))%x320);

	if (t77 != -9122) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x321 = 2189391U;
	uint64_t x322 = 299150605230401LLU;
	static uint8_t x323 = 19U;
	volatile uint64_t t78 = 1529256287529804470LLU;

	t78 = ((x321%(x322|x323))%x324);

	if (t78 != 2189391LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x325 = UINT16_MAX;
	volatile int16_t x326 = INT16_MIN;
	volatile int16_t x328 = -7;
	static volatile int32_t t79 = 0;

	t79 = ((x325%(x326|x327))%x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x329 = INT16_MAX;
	uint8_t x330 = 0U;
	int8_t x331 = -1;
	volatile uint32_t t80 = 3240U;

	t80 = ((x329%(x330|x331))%x332);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x333 = 20351829U;
	int64_t x335 = -40496005605514533LL;
	volatile uint32_t x336 = 348U;
	volatile uint64_t t81 = 181914567031LLU;

	t81 = ((x333%(x334|x335))%x336);

	if (t81 != 93LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x338 = -43;
	int8_t x339 = INT8_MAX;
	int64_t x340 = INT64_MAX;
	static volatile int64_t t82 = -334573662829249LL;

	t82 = ((x337%(x338|x339))%x340);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x341 = INT32_MAX;
	int16_t x344 = INT16_MAX;
	volatile int32_t t83 = -2782361;

	t83 = ((x341%(x342|x343))%x344);

	if (t83 != 15) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x346 = UINT32_MAX;
	volatile int16_t x347 = INT16_MIN;
	volatile uint32_t t84 = 431106U;

	t84 = ((x345%(x346|x347))%x348);

	if (t84 != 2147483647U) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x349 = -1LL;
	int16_t x350 = -1;
	volatile int8_t x351 = INT8_MAX;
	int16_t x352 = -1;
	volatile int64_t t85 = 664973856485774369LL;

	t85 = ((x349%(x350|x351))%x352);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x353 = 62;
	volatile uint8_t x354 = UINT8_MAX;
	uint64_t x355 = UINT64_MAX;
	volatile uint64_t t86 = 1952161073786190244LLU;

	t86 = ((x353%(x354|x355))%x356);

	if (t86 != 62LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x357 = INT32_MIN;
	int8_t x358 = 38;
	int16_t x359 = -1;
	static volatile uint64_t x360 = 1846LLU;
	uint64_t t87 = 3857LLU;

	t87 = ((x357%(x358|x359))%x360);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x361 = -1;
	uint8_t x362 = 2U;
	int8_t x364 = INT8_MAX;

	t88 = ((x361%(x362|x363))%x364);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x365 = INT8_MIN;
	uint16_t x366 = 0U;
	static volatile uint8_t x367 = 6U;
	uint8_t x368 = UINT8_MAX;
	int32_t t89 = 14;

	t89 = ((x365%(x366|x367))%x368);

	if (t89 != -2) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x369 = 89;
	volatile uint8_t x370 = 0U;
	volatile int8_t x371 = -1;
	static int64_t x372 = -3916905077586461855LL;
	volatile int64_t t90 = -372928490667616LL;

	t90 = ((x369%(x370|x371))%x372);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x373 = 0;
	int32_t x375 = INT32_MIN;
	volatile uint16_t x376 = 15830U;
	static volatile int32_t t91 = -14922826;

	t91 = ((x373%(x374|x375))%x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x377 = INT64_MAX;
	uint8_t x378 = 14U;
	volatile uint32_t x379 = UINT32_MAX;
	int8_t x380 = INT8_MIN;
	volatile int64_t t92 = -111630LL;

	t92 = ((x377%(x378|x379))%x380);

	if (t92 != 127LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint64_t x381 = 976LLU;
	int8_t x383 = INT8_MIN;
	int64_t x384 = 1395553885379LL;
	uint64_t t93 = 150234143657LLU;

	t93 = ((x381%(x382|x383))%x384);

	if (t93 != 976LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x386 = INT16_MIN;
	volatile int8_t x387 = INT8_MIN;
	int16_t x388 = INT16_MIN;
	static volatile int64_t t94 = -31000052423996LL;

	t94 = ((x385%(x386|x387))%x388);

	if (t94 != -20LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x389 = INT16_MIN;
	int16_t x390 = INT16_MIN;
	static int64_t x391 = -1LL;

	t95 = ((x389%(x390|x391))%x392);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x393 = INT8_MIN;
	int64_t x395 = 183213989LL;
	int8_t x396 = -1;
	int64_t t96 = 13321468LL;

	t96 = ((x393%(x394|x395))%x396);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x397 = -1;
	uint64_t x399 = UINT64_MAX;
	static volatile int32_t x400 = -1;
	static volatile uint64_t t97 = 339450977388034342LLU;

	t97 = ((x397%(x398|x399))%x400);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x401 = -1LL;
	uint16_t x402 = 473U;
	int16_t x403 = INT16_MAX;
	volatile int64_t t98 = 9807594952079012LL;

	t98 = ((x401%(x402|x403))%x404);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x405 = 3091U;
	int8_t x406 = -1;
	int64_t x407 = INT64_MIN;
	uint32_t x408 = UINT32_MAX;
	int64_t t99 = -21196LL;

	t99 = ((x405%(x406|x407))%x408);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

