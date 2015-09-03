#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MIN;
int32_t t1 = 433301758;
uint8_t x19 = 0U;
int32_t x20 = INT32_MAX;
int32_t t3 = -1;
volatile uint32_t x31 = 2U;
int64_t x33 = -1LL;
int16_t x34 = INT16_MIN;
uint8_t x38 = 29U;
volatile int32_t x40 = INT32_MIN;
volatile uint32_t t6 = 1839U;
uint64_t x47 = UINT64_MAX;
uint16_t x55 = 24585U;
int8_t x62 = -7;
uint64_t t10 = 13905513390802LLU;
static volatile int64_t x79 = 133584230484848LL;
int64_t x81 = INT64_MIN;
int8_t x109 = INT8_MIN;
int16_t x123 = INT16_MIN;
static volatile int32_t x128 = 4;
int32_t x129 = 53418;
volatile int64_t x131 = INT64_MIN;
int8_t x134 = INT8_MIN;
uint64_t x145 = 19410580529LLU;
uint64_t x146 = UINT64_MAX;
int32_t x148 = 0;
volatile int32_t t25 = -866384;
volatile int32_t x158 = INT32_MIN;
int64_t x163 = 395852LL;
int16_t x164 = INT16_MAX;
int64_t t28 = 1073381752238LL;
volatile uint8_t x173 = 13U;
volatile int8_t x192 = INT8_MAX;
volatile uint8_t x202 = 12U;
uint16_t x203 = UINT16_MAX;
int16_t x204 = 12;
uint32_t x214 = UINT32_MAX;
int32_t x215 = 1859;
int64_t x225 = INT64_MAX;
static int64_t t43 = -141LL;
volatile int64_t x233 = 743817236LL;
volatile int8_t x234 = 12;
static uint8_t x235 = 119U;
int16_t x243 = 55;
uint64_t t47 = 3060LLU;
volatile int16_t x248 = INT16_MIN;
volatile uint32_t t48 = 1035655013U;
static int32_t t52 = -1213;
int32_t x276 = INT32_MIN;
int32_t x281 = 1;
int16_t x286 = INT16_MAX;
volatile uint64_t t57 = 5260002488086348LLU;
volatile uint16_t x298 = 54U;
int16_t x305 = 81;
volatile int32_t x308 = 0;
static volatile int32_t t59 = 433247864;
volatile uint8_t x316 = 12U;
int16_t x321 = -1;
int8_t x322 = -1;
uint64_t x323 = UINT64_MAX;
uint16_t x337 = UINT16_MAX;
uint64_t t64 = 6717LLU;
static uint32_t t66 = 3U;
volatile int32_t x372 = 14606;
static uint16_t x391 = 10086U;
volatile uint32_t t74 = 65656587U;
volatile int32_t x419 = 349243;
uint16_t x420 = 0U;
volatile int32_t t75 = -14;
uint8_t x437 = 77U;
volatile uint8_t x439 = 90U;
int16_t x451 = INT16_MIN;
volatile int32_t t80 = 509;
uint8_t x456 = 7U;
static int64_t x473 = INT64_MIN;
int8_t x476 = -20;
volatile int8_t x481 = INT8_MIN;
static uint64_t x484 = UINT64_MAX;
uint32_t x498 = 1755233U;
volatile int32_t t89 = 109091472;
int64_t x515 = -1LL;
uint8_t x517 = 75U;
uint32_t t92 = 7309U;
uint64_t t94 = 15393449620804979LLU;
static volatile uint64_t x535 = UINT64_MAX;
volatile int64_t x538 = 793897878683LL;
int16_t x539 = -1;
int16_t x540 = 61;
int8_t x541 = -44;
static int16_t x543 = -1;
volatile int32_t x544 = INT32_MAX;
int16_t x550 = 11;
static int64_t x551 = -1LL;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int8_t x2 = INT8_MAX;
	int8_t x3 = 1;
	volatile int32_t t0 = 12;

	t0 = (((x1<=x2)^x3)*x4);

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x13 = INT16_MIN;
	volatile int8_t x14 = -3;
	uint16_t x15 = 13U;
	int32_t x16 = -113454;

	t1 = (((x13<=x14)^x15)*x16);

	if (t1 != -1361448) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = 8834343599141584LL;
	int32_t x18 = INT32_MIN;
	int32_t t2 = -107735;

	t2 = (((x17<=x18)^x19)*x20);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x21 = -1LL;
	volatile uint32_t x22 = 415U;
	int16_t x23 = INT16_MAX;
	static int8_t x24 = 9;

	t3 = (((x21<=x22)^x23)*x24);

	if (t3 != 294894) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x29 = INT32_MAX;
	uint32_t x30 = UINT32_MAX;
	int64_t x32 = -3LL;
	int64_t t4 = 1869507614213858LL;

	t4 = (((x29<=x30)^x31)*x32);

	if (t4 != -9LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x35 = INT16_MAX;
	volatile int16_t x36 = INT16_MIN;
	volatile int32_t t5 = 2;

	t5 = (((x33<=x34)^x35)*x36);

	if (t5 != -1073709056) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = -7;
	uint32_t x39 = UINT32_MAX;

	t6 = (((x37<=x38)^x39)*x40);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x45 = INT64_MAX;
	static uint8_t x46 = UINT8_MAX;
	int8_t x48 = 1;
	volatile uint64_t t7 = UINT64_MAX;

	t7 = (((x45<=x46)^x47)*x48);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x53 = 4598;
	uint32_t x54 = 6744U;
	uint32_t x56 = 215000227U;
	uint32_t t8 = 761683U;

	t8 = (((x53<=x54)^x55)*x56);

	if (t8 != 2755806488U) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint8_t x61 = UINT8_MAX;
	int64_t x63 = -1LL;
	static int32_t x64 = INT32_MIN;
	int64_t t9 = -15LL;

	t9 = (((x61<=x62)^x63)*x64);

	if (t9 != 2147483648LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x65 = INT16_MIN;
	static int32_t x66 = 23955;
	uint64_t x67 = 783914728LLU;
	int64_t x68 = INT64_MIN;

	t10 = (((x65<=x66)^x67)*x68);

	if (t10 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x69 = INT32_MIN;
	int8_t x70 = 27;
	volatile int16_t x71 = -1;
	uint8_t x72 = 0U;
	int32_t t11 = -97631084;

	t11 = (((x69<=x70)^x71)*x72);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x77 = INT64_MIN;
	volatile int16_t x78 = -1;
	volatile uint8_t x80 = UINT8_MAX;
	static volatile int64_t t12 = -29LL;

	t12 = (((x77<=x78)^x79)*x80);

	if (t12 != 34063978773636495LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x82 = INT64_MAX;
	uint64_t x83 = UINT64_MAX;
	int32_t x84 = -1;
	static volatile uint64_t t13 = 240585LLU;

	t13 = (((x81<=x82)^x83)*x84);

	if (t13 != 2LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x85 = 54U;
	uint16_t x86 = UINT16_MAX;
	static volatile int32_t x87 = 17207;
	uint16_t x88 = UINT16_MAX;
	volatile int32_t t14 = -285622;

	t14 = (((x85<=x86)^x87)*x88);

	if (t14 != 1127595210) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x97 = INT8_MIN;
	int8_t x98 = 3;
	int8_t x99 = 52;
	int16_t x100 = INT16_MIN;
	volatile int32_t t15 = 1;

	t15 = (((x97<=x98)^x99)*x100);

	if (t15 != -1736704) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x105 = 75U;
	volatile int64_t x106 = -3006LL;
	int8_t x107 = -40;
	volatile int8_t x108 = INT8_MAX;
	volatile int32_t t16 = -2036224;

	t16 = (((x105<=x106)^x107)*x108);

	if (t16 != -5080) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x110 = INT8_MIN;
	int16_t x111 = INT16_MIN;
	static int8_t x112 = INT8_MIN;
	int32_t t17 = -155;

	t17 = (((x109<=x110)^x111)*x112);

	if (t17 != 4194176) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x113 = 7047U;
	int64_t x114 = INT64_MAX;
	uint16_t x115 = UINT16_MAX;
	int16_t x116 = 107;
	volatile int32_t t18 = 501761295;

	t18 = (((x113<=x114)^x115)*x116);

	if (t18 != 7012138) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x121 = 95U;
	int8_t x122 = INT8_MIN;
	int64_t x124 = -1LL;
	int64_t t19 = 680733208LL;

	t19 = (((x121<=x122)^x123)*x124);

	if (t19 != 32768LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x125 = 5791;
	static uint8_t x126 = UINT8_MAX;
	uint8_t x127 = 0U;
	volatile int32_t t20 = -377;

	t20 = (((x125<=x126)^x127)*x128);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x130 = UINT16_MAX;
	static volatile int16_t x132 = -1;
	int64_t t21 = INT64_MAX;

	t21 = (((x129<=x130)^x131)*x132);

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x133 = UINT8_MAX;
	int32_t x135 = -1609312;
	int8_t x136 = INT8_MIN;
	volatile int32_t t22 = 227;

	t22 = (((x133<=x134)^x135)*x136);

	if (t22 != 205991936) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x137 = INT8_MIN;
	int64_t x138 = INT64_MIN;
	int32_t x139 = -96663;
	static int8_t x140 = INT8_MAX;
	volatile int32_t t23 = 37;

	t23 = (((x137<=x138)^x139)*x140);

	if (t23 != -12276201) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x147 = INT32_MAX;
	static int32_t t24 = -174;

	t24 = (((x145<=x146)^x147)*x148);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x149 = INT16_MIN;
	static volatile int64_t x150 = -335508LL;
	uint8_t x151 = UINT8_MAX;
	int16_t x152 = INT16_MAX;

	t25 = (((x149<=x150)^x151)*x152);

	if (t25 != 8355585) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x153 = 15U;
	volatile uint16_t x154 = 314U;
	uint64_t x155 = 95021LLU;
	int8_t x156 = 1;
	volatile uint64_t t26 = 51913384222LLU;

	t26 = (((x153<=x154)^x155)*x156);

	if (t26 != 95020LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x157 = 3286087449379008LLU;
	uint64_t x159 = 11428979016257660LLU;
	int8_t x160 = -1;
	static volatile uint64_t t27 = 13LLU;

	t27 = (((x157<=x158)^x159)*x160);

	if (t27 != 18435315094693293955LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x161 = INT8_MAX;
	uint64_t x162 = UINT64_MAX;

	t28 = (((x161<=x162)^x163)*x164);

	if (t28 != 12970915251LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x165 = 6;
	uint8_t x166 = UINT8_MAX;
	static uint16_t x167 = UINT16_MAX;
	uint16_t x168 = 1003U;
	volatile int32_t t29 = 9019941;

	t29 = (((x165<=x166)^x167)*x168);

	if (t29 != 65730602) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x169 = INT32_MIN;
	volatile uint32_t x170 = UINT32_MAX;
	volatile uint64_t x171 = UINT64_MAX;
	int16_t x172 = 697;
	uint64_t t30 = 45380LLU;

	t30 = (((x169<=x170)^x171)*x172);

	if (t30 != 18446744073709550222LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x174 = -1;
	uint16_t x175 = 512U;
	int16_t x176 = -4;
	volatile int32_t t31 = -187;

	t31 = (((x173<=x174)^x175)*x176);

	if (t31 != -2048) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x177 = INT32_MIN;
	uint64_t x178 = UINT64_MAX;
	volatile int32_t x179 = -29277414;
	uint32_t x180 = UINT32_MAX;
	volatile uint32_t t32 = 7708393U;

	t32 = (((x177<=x178)^x179)*x180);

	if (t32 != 29277413U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x181 = INT8_MAX;
	uint8_t x182 = 2U;
	int32_t x183 = -51763;
	static int8_t x184 = 36;
	volatile int32_t t33 = 0;

	t33 = (((x181<=x182)^x183)*x184);

	if (t33 != -1863468) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x185 = INT32_MAX;
	int16_t x186 = -5;
	volatile uint16_t x187 = 6469U;
	int16_t x188 = -1;
	volatile int32_t t34 = -3758262;

	t34 = (((x185<=x186)^x187)*x188);

	if (t34 != -6469) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x189 = 1;
	int8_t x190 = INT8_MIN;
	int8_t x191 = INT8_MIN;
	static volatile int32_t t35 = -1;

	t35 = (((x189<=x190)^x191)*x192);

	if (t35 != -16256) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x193 = 106LL;
	volatile uint32_t x194 = 208506U;
	int32_t x195 = -33345;
	static int8_t x196 = INT8_MAX;
	volatile int32_t t36 = 4090;

	t36 = (((x193<=x194)^x195)*x196);

	if (t36 != -4234942) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x197 = INT16_MIN;
	volatile int32_t x198 = -519;
	int32_t x199 = -1;
	static volatile int16_t x200 = INT16_MIN;
	volatile int32_t t37 = 8;

	t37 = (((x197<=x198)^x199)*x200);

	if (t37 != 65536) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x201 = INT64_MIN;
	int32_t t38 = 25;

	t38 = (((x201<=x202)^x203)*x204);

	if (t38 != 786408) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x205 = 7448310186006LLU;
	volatile int8_t x206 = INT8_MIN;
	uint8_t x207 = 59U;
	uint32_t x208 = 7U;
	uint32_t t39 = 388U;

	t39 = (((x205<=x206)^x207)*x208);

	if (t39 != 406U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x209 = 61970208LL;
	static int8_t x210 = INT8_MIN;
	volatile uint32_t x211 = UINT32_MAX;
	int8_t x212 = INT8_MAX;
	static volatile uint32_t t40 = 22765U;

	t40 = (((x209<=x210)^x211)*x212);

	if (t40 != 4294967169U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x213 = -527;
	static int8_t x216 = -1;
	int32_t t41 = 968;

	t41 = (((x213<=x214)^x215)*x216);

	if (t41 != -1858) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x221 = INT16_MIN;
	static uint16_t x222 = UINT16_MAX;
	static volatile uint32_t x223 = 6547879U;
	static int8_t x224 = 4;
	uint32_t t42 = 23129U;

	t42 = (((x221<=x222)^x223)*x224);

	if (t42 != 26191512U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x226 = INT16_MIN;
	volatile int64_t x227 = -1LL;
	int8_t x228 = INT8_MIN;

	t43 = (((x225<=x226)^x227)*x228);

	if (t43 != 128LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x229 = INT64_MAX;
	volatile int32_t x230 = -6;
	int64_t x231 = 2160946982407753LL;
	int32_t x232 = -1;
	int64_t t44 = -2756086527400LL;

	t44 = (((x229<=x230)^x231)*x232);

	if (t44 != -2160946982407753LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x236 = 13392260U;
	volatile uint32_t t45 = 0U;

	t45 = (((x233<=x234)^x235)*x236);

	if (t45 != 1593678940U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x237 = -8361689;
	uint64_t x238 = UINT64_MAX;
	int8_t x239 = -1;
	uint32_t x240 = 22743349U;
	volatile uint32_t t46 = 29254738U;

	t46 = (((x237<=x238)^x239)*x240);

	if (t46 != 4249480598U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x241 = INT64_MIN;
	volatile int16_t x242 = INT16_MIN;
	uint64_t x244 = 10360201511LLU;

	t47 = (((x241<=x242)^x243)*x244);

	if (t47 != 559450881594LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x245 = INT64_MIN;
	volatile uint16_t x246 = 500U;
	uint32_t x247 = 3495U;

	t48 = (((x245<=x246)^x247)*x248);

	if (t48 != 4180475904U) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x249 = 31564101U;
	int32_t x250 = -1;
	int8_t x251 = 0;
	volatile uint8_t x252 = 27U;
	volatile int32_t t49 = 63112;

	t49 = (((x249<=x250)^x251)*x252);

	if (t49 != 27) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x253 = 7601U;
	volatile int16_t x254 = -1107;
	volatile int32_t x255 = 108638941;
	static uint32_t x256 = 603295226U;
	volatile uint32_t t50 = 66156U;

	t50 = (((x253<=x254)^x255)*x256);

	if (t50 != 3202180306U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x257 = UINT16_MAX;
	volatile int64_t x258 = 10344533624635LL;
	static uint8_t x259 = UINT8_MAX;
	int64_t x260 = 40522LL;
	int64_t t51 = -751LL;

	t51 = (((x257<=x258)^x259)*x260);

	if (t51 != 10292588LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x261 = UINT32_MAX;
	uint64_t x262 = UINT64_MAX;
	uint8_t x263 = 6U;
	static volatile int16_t x264 = INT16_MAX;

	t52 = (((x261<=x262)^x263)*x264);

	if (t52 != 229369) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x265 = INT16_MAX;
	static volatile int32_t x266 = INT32_MIN;
	int16_t x267 = INT16_MIN;
	volatile int16_t x268 = INT16_MAX;
	int32_t t53 = -2;

	t53 = (((x265<=x266)^x267)*x268);

	if (t53 != -1073709056) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x273 = 81U;
	int64_t x274 = INT64_MIN;
	uint32_t x275 = UINT32_MAX;
	volatile uint32_t t54 = 660914U;

	t54 = (((x273<=x274)^x275)*x276);

	if (t54 != 2147483648U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x277 = INT16_MAX;
	uint32_t x278 = 135137847U;
	static int16_t x279 = -1;
	int16_t x280 = INT16_MAX;
	static volatile int32_t t55 = -121205;

	t55 = (((x277<=x278)^x279)*x280);

	if (t55 != -65534) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x282 = 3U;
	static volatile int64_t x283 = INT64_MAX;
	volatile uint64_t x284 = UINT64_MAX;
	static uint64_t t56 = 4968LLU;

	t56 = (((x281<=x282)^x283)*x284);

	if (t56 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x285 = INT16_MAX;
	volatile uint64_t x287 = UINT64_MAX;
	uint16_t x288 = 2038U;

	t57 = (((x285<=x286)^x287)*x288);

	if (t57 != 18446744073709547540LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x297 = -1;
	volatile uint8_t x299 = 0U;
	volatile int16_t x300 = -1;
	int32_t t58 = 203125335;

	t58 = (((x297<=x298)^x299)*x300);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x306 = INT16_MAX;
	static int16_t x307 = INT16_MAX;

	t59 = (((x305<=x306)^x307)*x308);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x313 = 11811U;
	static uint32_t x314 = UINT32_MAX;
	int8_t x315 = INT8_MAX;
	volatile int32_t t60 = 10;

	t60 = (((x313<=x314)^x315)*x316);

	if (t60 != 1512) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x317 = INT16_MIN;
	static volatile int8_t x318 = INT8_MAX;
	uint8_t x319 = 9U;
	int8_t x320 = INT8_MIN;
	volatile int32_t t61 = -223;

	t61 = (((x317<=x318)^x319)*x320);

	if (t61 != -1024) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x324 = -30LL;
	static volatile uint64_t t62 = 162LLU;

	t62 = (((x321<=x322)^x323)*x324);

	if (t62 != 60LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x333 = -1;
	static int64_t x334 = INT64_MIN;
	int16_t x335 = -33;
	static volatile int32_t x336 = -1;
	volatile int32_t t63 = 1031047;

	t63 = (((x333<=x334)^x335)*x336);

	if (t63 != 33) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x338 = INT64_MIN;
	static volatile int8_t x339 = INT8_MIN;
	uint64_t x340 = UINT64_MAX;

	t64 = (((x337<=x338)^x339)*x340);

	if (t64 != 128LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x341 = 94U;
	static volatile int8_t x342 = 41;
	volatile uint8_t x343 = 56U;
	uint64_t x344 = UINT64_MAX;
	volatile uint64_t t65 = 80296259553LLU;

	t65 = (((x341<=x342)^x343)*x344);

	if (t65 != 18446744073709551560LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x353 = UINT8_MAX;
	uint8_t x354 = 3U;
	volatile int32_t x355 = INT32_MIN;
	uint32_t x356 = 5416U;

	t66 = (((x353<=x354)^x355)*x356);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x369 = INT16_MAX;
	int64_t x370 = INT64_MAX;
	int64_t x371 = -245847004249LL;
	int64_t t67 = -1LL;

	t67 = (((x369<=x370)^x371)*x372);

	if (t67 != -3590841344075500LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x373 = 0U;
	int16_t x374 = INT16_MAX;
	volatile int32_t x375 = 10735040;
	uint32_t x376 = 641U;
	volatile uint32_t t68 = 512396226U;

	t68 = (((x373<=x374)^x375)*x376);

	if (t68 != 2586193985U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x377 = 2590835129539265LL;
	uint16_t x378 = 85U;
	int16_t x379 = 440;
	int64_t x380 = -1LL;
	int64_t t69 = -1278502235054027LL;

	t69 = (((x377<=x378)^x379)*x380);

	if (t69 != -440LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x385 = 8U;
	volatile int8_t x386 = -57;
	int8_t x387 = INT8_MIN;
	uint32_t x388 = UINT32_MAX;
	uint32_t t70 = 9357U;

	t70 = (((x385<=x386)^x387)*x388);

	if (t70 != 128U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x389 = 2598616LLU;
	uint64_t x390 = UINT64_MAX;
	int8_t x392 = INT8_MIN;
	volatile int32_t t71 = 549017532;

	t71 = (((x389<=x390)^x391)*x392);

	if (t71 != -1291136) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x393 = -1;
	int16_t x394 = INT16_MAX;
	volatile int64_t x395 = INT64_MIN;
	volatile int8_t x396 = -1;
	int64_t t72 = INT64_MAX;

	t72 = (((x393<=x394)^x395)*x396);

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x397 = INT32_MIN;
	volatile int16_t x398 = 0;
	uint16_t x399 = UINT16_MAX;
	int8_t x400 = INT8_MIN;
	int32_t t73 = 31590;

	t73 = (((x397<=x398)^x399)*x400);

	if (t73 != -8388352) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x413 = 411;
	int16_t x414 = INT16_MIN;
	volatile int8_t x415 = -7;
	uint32_t x416 = 149676975U;

	t74 = (((x413<=x414)^x415)*x416);

	if (t74 != 3247228471U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x417 = 1U;
	uint8_t x418 = UINT8_MAX;

	t75 = (((x417<=x418)^x419)*x420);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x425 = INT64_MAX;
	volatile uint32_t x426 = UINT32_MAX;
	int8_t x427 = INT8_MIN;
	uint8_t x428 = UINT8_MAX;
	int32_t t76 = 3980;

	t76 = (((x425<=x426)^x427)*x428);

	if (t76 != -32640) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x438 = 2;
	static uint32_t x440 = 2016282U;
	volatile uint32_t t77 = 275U;

	t77 = (((x437<=x438)^x439)*x440);

	if (t77 != 181465380U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x441 = 45U;
	uint8_t x442 = UINT8_MAX;
	uint8_t x443 = 8U;
	int16_t x444 = 3;
	static volatile int32_t t78 = -3856;

	t78 = (((x441<=x442)^x443)*x444);

	if (t78 != 27) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x445 = 4081;
	int16_t x446 = -1;
	int8_t x447 = -6;
	static int32_t x448 = -11;
	int32_t t79 = 0;

	t79 = (((x445<=x446)^x447)*x448);

	if (t79 != 66) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x449 = INT32_MIN;
	volatile int32_t x450 = INT32_MIN;
	int8_t x452 = -1;

	t80 = (((x449<=x450)^x451)*x452);

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x453 = INT8_MIN;
	static int16_t x454 = INT16_MIN;
	static uint16_t x455 = UINT16_MAX;
	int32_t t81 = -1;

	t81 = (((x453<=x454)^x455)*x456);

	if (t81 != 458745) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x461 = 38297;
	uint64_t x462 = 8068LLU;
	static int64_t x463 = -1LL;
	static int8_t x464 = 1;
	int64_t t82 = 806548LL;

	t82 = (((x461<=x462)^x463)*x464);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x474 = -1LL;
	static int16_t x475 = -1;
	volatile int32_t t83 = 22;

	t83 = (((x473<=x474)^x475)*x476);

	if (t83 != 40) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x477 = -1;
	int8_t x478 = INT8_MAX;
	static volatile int32_t x479 = -1;
	static int8_t x480 = INT8_MAX;
	volatile int32_t t84 = -62625;

	t84 = (((x477<=x478)^x479)*x480);

	if (t84 != -254) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x482 = -279878;
	int8_t x483 = -1;
	volatile uint64_t t85 = 1859962253072454LLU;

	t85 = (((x481<=x482)^x483)*x484);

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x485 = 2U;
	uint8_t x486 = 3U;
	int16_t x487 = INT16_MAX;
	uint64_t x488 = 62693359741018676LLU;
	uint64_t t86 = 9513084LLU;

	t86 = (((x485<=x486)^x487)*x488);

	if (t86 != 6622033092457708440LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x497 = 2U;
	int64_t x499 = -6163438LL;
	int32_t x500 = INT32_MIN;
	static volatile int64_t t87 = -1LL;

	t87 = (((x497<=x498)^x499)*x500);

	if (t87 != 13235880172978176LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x501 = -1LL;
	static int32_t x502 = INT32_MIN;
	uint64_t x503 = 2555643589880979989LLU;
	int16_t x504 = -1566;
	volatile uint64_t t88 = 315438LLU;

	t88 = (((x501<=x502)^x503)*x504);

	if (t88 != 805602241358037898LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x505 = 20;
	int64_t x506 = INT64_MIN;
	int8_t x507 = 0;
	int32_t x508 = INT32_MIN;

	t89 = (((x505<=x506)^x507)*x508);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x509 = -37;
	static volatile uint16_t x510 = 61U;
	uint16_t x511 = UINT16_MAX;
	static int16_t x512 = -1;
	volatile int32_t t90 = 1;

	t90 = (((x509<=x510)^x511)*x512);

	if (t90 != -65534) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x513 = -1;
	int32_t x514 = INT32_MIN;
	volatile uint8_t x516 = UINT8_MAX;
	volatile int64_t t91 = 2491756156858523LL;

	t91 = (((x513<=x514)^x515)*x516);

	if (t91 != -255LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x518 = -12039998;
	static int16_t x519 = INT16_MIN;
	static uint32_t x520 = 426U;

	t92 = (((x517<=x518)^x519)*x520);

	if (t92 != 4281008128U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x521 = INT32_MIN;
	static uint32_t x522 = 796U;
	uint32_t x523 = 14863237U;
	volatile int64_t x524 = 394424684405LL;
	volatile int64_t t93 = -2030314LL;

	t93 = (((x521<=x522)^x523)*x524);

	if (t93 != 5862427562961718985LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x525 = 8U;
	int16_t x526 = 1735;
	uint64_t x527 = 218724886LLU;
	static int16_t x528 = 0;

	t94 = (((x525<=x526)^x527)*x528);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x533 = INT8_MAX;
	static int64_t x534 = INT64_MAX;
	int16_t x536 = -626;
	volatile uint64_t t95 = 2432012729161LLU;

	t95 = (((x533<=x534)^x535)*x536);

	if (t95 != 1252LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x537 = UINT8_MAX;
	int32_t t96 = -395253847;

	t96 = (((x537<=x538)^x539)*x540);

	if (t96 != -122) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x542 = -860307;
	volatile int32_t t97 = -2846977;

	t97 = (((x541<=x542)^x543)*x544);

	if (t97 != -2147483647) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x549 = INT32_MIN;
	volatile int32_t x552 = -23700855;
	static int64_t t98 = -5LL;

	t98 = (((x549<=x550)^x551)*x552);

	if (t98 != 47401710LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x557 = 0U;
	int32_t x558 = INT32_MAX;
	int32_t x559 = INT32_MAX;
	uint64_t x560 = 653535LLU;
	uint64_t t99 = 76777LLU;

	t99 = (((x557<=x558)^x559)*x560);

	if (t99 != 1403455724588610LLU) { NG(); } else { ; }
	
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

