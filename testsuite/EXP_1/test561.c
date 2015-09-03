#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x2 = INT32_MIN;
volatile int32_t t0 = -2601;
int16_t x6 = INT16_MIN;
int32_t x16 = -1;
volatile uint16_t x18 = 2792U;
static volatile int8_t x20 = -1;
static volatile int64_t t4 = 2LL;
uint16_t x25 = 18U;
volatile uint32_t x39 = UINT32_MAX;
uint32_t x45 = 18U;
uint32_t x46 = 1U;
int8_t x47 = -1;
volatile uint64_t x48 = 1640329761403LLU;
volatile uint64_t t9 = 6707583643691LLU;
uint64_t t11 = 481424504880LLU;
int64_t x63 = INT64_MAX;
int8_t x65 = INT8_MIN;
uint32_t t14 = 41017U;
int32_t t16 = 685359353;
static int8_t x90 = -1;
int32_t x91 = INT32_MAX;
volatile uint32_t t20 = 1612U;
int16_t x97 = -223;
int64_t x99 = INT64_MIN;
static volatile int64_t t22 = 463820LL;
static int8_t x110 = -4;
uint8_t x112 = 3U;
int8_t x121 = INT8_MAX;
int64_t x122 = INT64_MIN;
int32_t x125 = -1;
int64_t x130 = INT64_MIN;
static int64_t x131 = INT64_MIN;
volatile int64_t t28 = 155515LL;
int8_t x139 = INT8_MAX;
int32_t t31 = -891851;
uint32_t x145 = UINT32_MAX;
int64_t x147 = 90375913365213LL;
volatile int64_t t32 = 22763497LL;
volatile uint32_t x149 = UINT32_MAX;
static volatile int64_t x152 = 1390369549LL;
static int32_t x159 = -31931;
static uint16_t x160 = 508U;
volatile uint32_t t35 = 14256259U;
static volatile int64_t x161 = 85077620118LL;
static uint16_t x167 = 317U;
int8_t x173 = INT8_MAX;
static uint64_t x174 = UINT64_MAX;
int8_t x178 = INT8_MAX;
volatile int8_t x184 = -1;
int64_t x185 = -10006LL;
static uint32_t x190 = UINT32_MAX;
uint64_t x192 = 200036263LLU;
int16_t x193 = -2;
int16_t x199 = INT16_MAX;
uint32_t x207 = 8877U;
static int8_t x210 = INT8_MIN;
uint8_t x211 = 1U;
volatile int64_t t47 = -166587013372009626LL;
static int32_t x219 = INT32_MAX;
uint8_t x224 = 17U;
uint32_t x234 = 318U;
int64_t x239 = -349714LL;
uint16_t x245 = UINT16_MAX;
int64_t x246 = 88775721815524343LL;
uint64_t x250 = UINT64_MAX;
volatile int8_t x251 = -28;
uint64_t t57 = 14892240LLU;
volatile int16_t x261 = INT16_MIN;
int32_t x265 = INT32_MIN;
volatile uint64_t x270 = 1729LLU;
int32_t x274 = INT32_MIN;
int32_t x278 = INT32_MIN;
int32_t t63 = -3958960;
static int32_t x281 = INT32_MIN;
volatile int16_t x288 = -1;
volatile int32_t t65 = 138;
int8_t x294 = INT8_MAX;
int32_t t67 = -39;
int16_t x302 = INT16_MAX;
int8_t x305 = INT8_MAX;
static int64_t x309 = 183558275515559LL;
static int64_t x310 = INT64_MIN;
int8_t x314 = 53;
static uint8_t x320 = 4U;
uint16_t x326 = 5U;
volatile int64_t t76 = -2197017913137657LL;
int16_t x334 = 423;
static int32_t x337 = INT32_MAX;
uint16_t x345 = UINT16_MAX;
static int32_t x349 = -16729;
int16_t x357 = 112;
static int8_t x361 = INT8_MAX;
uint32_t t84 = 764U;
volatile uint64_t t87 = 794LLU;
static volatile int64_t t89 = 8183148810827402LL;
volatile uint64_t x389 = 226074LLU;
volatile int64_t x394 = INT64_MAX;
int64_t x400 = -1LL;
static volatile int32_t x401 = INT32_MIN;
uint64_t t93 = 3895929311374264660LLU;
volatile uint64_t t95 = 1545754518LLU;
uint32_t x414 = UINT32_MAX;
int32_t x416 = INT32_MAX;
int32_t x417 = INT32_MIN;
uint16_t x420 = UINT16_MAX;
volatile int64_t t99 = 118LL;


void f0(void) {
	int32_t x1 = -1;
	int32_t x3 = INT32_MIN;
	static int8_t x4 = 1;

	t0 = (((x1/x2)%x3)-x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 41U;
	int32_t x7 = 5168965;
	uint32_t x8 = 13442743U;
	static volatile uint32_t t1 = 79U;

	t1 = (((x5/x6)%x7)-x8);

	if (t1 != 4281524553U) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 11233U;
	static int8_t x14 = INT8_MIN;
	volatile int64_t x15 = INT64_MAX;
	static volatile int64_t t2 = 5805561156190LL;

	t2 = (((x13/x14)%x15)-x16);

	if (t2 != -86LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 8U;
	int64_t x19 = 47079167863LL;
	volatile int64_t t3 = 171839LL;

	t3 = (((x17/x18)%x19)-x20);

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = -1;
	uint32_t x22 = 18U;
	int64_t x23 = -1LL;
	uint32_t x24 = 143088U;

	t4 = (((x21/x22)%x23)-x24);

	if (t4 != -143088LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x26 = INT16_MAX;
	int16_t x27 = INT16_MIN;
	int64_t x28 = 1052693163153LL;
	int64_t t5 = -2447172513LL;

	t5 = (((x25/x26)%x27)-x28);

	if (t5 != -1052693163153LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = 1533;
	int16_t x30 = INT16_MIN;
	int8_t x31 = -22;
	static int32_t x32 = -22153995;
	int32_t t6 = -30364316;

	t6 = (((x29/x30)%x31)-x32);

	if (t6 != 22153995) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x37 = 2U;
	static int16_t x38 = 1;
	volatile uint32_t x40 = 0U;
	volatile uint32_t t7 = 28U;

	t7 = (((x37/x38)%x39)-x40);

	if (t7 != 2U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = 1;
	volatile int16_t x42 = INT16_MIN;
	static int16_t x43 = -1;
	int8_t x44 = -1;
	volatile int32_t t8 = -6955;

	t8 = (((x41/x42)%x43)-x44);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {


	t9 = (((x45/x46)%x47)-x48);

	if (t9 != 18446742433379790231LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x49 = UINT64_MAX;
	uint32_t x50 = 18775368U;
	int64_t x51 = INT64_MIN;
	static int64_t x52 = INT64_MAX;
	uint64_t t10 = 17302545207207395LLU;

	t10 = (((x49/x50)%x51)-x52);

	if (t10 != 9223373019351847169LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = INT8_MIN;
	uint8_t x58 = 98U;
	uint64_t x59 = 6403422282405158LLU;
	static uint64_t x60 = UINT64_MAX;

	t11 = (((x57/x58)%x59)-x60);

	if (t11 != 4887900382696576LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = -3;
	int16_t x62 = INT16_MAX;
	int8_t x64 = INT8_MIN;
	static int64_t t12 = 3247280639781LL;

	t12 = (((x61/x62)%x63)-x64);

	if (t12 != 128LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x66 = INT8_MAX;
	int8_t x67 = -1;
	uint8_t x68 = 49U;
	volatile int32_t t13 = 9211112;

	t13 = (((x65/x66)%x67)-x68);

	if (t13 != -49) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x69 = UINT32_MAX;
	volatile int32_t x70 = INT32_MAX;
	volatile int16_t x71 = 247;
	volatile int8_t x72 = INT8_MIN;

	t14 = (((x69/x70)%x71)-x72);

	if (t14 != 130U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x73 = 2U;
	int32_t x74 = 2;
	uint64_t x75 = 110711549634486055LLU;
	volatile int32_t x76 = INT32_MAX;
	uint64_t t15 = 873LLU;

	t15 = (((x73/x74)%x75)-x76);

	if (t15 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x77 = 12743U;
	uint16_t x78 = 68U;
	int32_t x79 = 1895437;
	int32_t x80 = -2442833;

	t16 = (((x77/x78)%x79)-x80);

	if (t16 != 2443020) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x81 = 1297U;
	int16_t x82 = INT16_MIN;
	uint32_t x83 = 2U;
	int8_t x84 = INT8_MIN;
	uint32_t t17 = 905620730U;

	t17 = (((x81/x82)%x83)-x84);

	if (t17 != 128U) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x85 = -1;
	static int8_t x86 = -7;
	uint64_t x87 = 54243335777356LLU;
	int8_t x88 = INT8_MIN;
	volatile uint64_t t18 = 1211909LLU;

	t18 = (((x85/x86)%x87)-x88);

	if (t18 != 128LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x89 = UINT32_MAX;
	static volatile int64_t x92 = 4274LL;
	static int64_t t19 = -9369842115399234LL;

	t19 = (((x89/x90)%x91)-x92);

	if (t19 != -4273LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x93 = UINT32_MAX;
	volatile int16_t x94 = INT16_MIN;
	int8_t x95 = INT8_MAX;
	int8_t x96 = 24;

	t20 = (((x93/x94)%x95)-x96);

	if (t20 != 4294967273U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x98 = 5302U;
	uint16_t x100 = 476U;
	volatile int64_t t21 = -8243569507559LL;

	t21 = (((x97/x98)%x99)-x100);

	if (t21 != 809589LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x101 = 937477957733LL;
	int64_t x102 = INT64_MIN;
	static uint32_t x103 = 73806U;
	uint16_t x104 = 2373U;

	t22 = (((x101/x102)%x103)-x104);

	if (t22 != -2373LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = INT32_MIN;
	static int8_t x106 = -44;
	volatile int16_t x107 = -6956;
	int32_t x108 = 45;
	int32_t t23 = 1049;

	t23 = (((x105/x106)%x107)-x108);

	if (t23 != 3105) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = 1;
	volatile int16_t x111 = INT16_MIN;
	static int32_t t24 = -3;

	t24 = (((x109/x110)%x111)-x112);

	if (t24 != -3) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x113 = 1077526999108757411LL;
	uint32_t x114 = UINT32_MAX;
	volatile int64_t x115 = INT64_MAX;
	int8_t x116 = INT8_MIN;
	volatile int64_t t25 = -32740LL;

	t25 = (((x113/x114)%x115)-x116);

	if (t25 != 250881432LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x123 = 5;
	int64_t x124 = -1LL;
	static volatile int64_t t26 = 8299750522LL;

	t26 = (((x121/x122)%x123)-x124);

	if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x126 = INT8_MAX;
	uint8_t x127 = 79U;
	int32_t x128 = -2233;
	volatile int32_t t27 = -1;

	t27 = (((x125/x126)%x127)-x128);

	if (t27 != 2233) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x129 = INT16_MAX;
	int64_t x132 = -1LL;

	t28 = (((x129/x130)%x131)-x132);

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x133 = UINT32_MAX;
	int8_t x134 = -1;
	int16_t x135 = -528;
	uint16_t x136 = UINT16_MAX;
	static volatile uint32_t t29 = 6U;

	t29 = (((x133/x134)%x135)-x136);

	if (t29 != 4294901762U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x137 = UINT32_MAX;
	int16_t x138 = -3;
	uint32_t x140 = 445226U;
	volatile uint32_t t30 = 916629U;

	t30 = (((x137/x138)%x139)-x140);

	if (t30 != 4294522071U) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x141 = INT32_MAX;
	static volatile uint8_t x142 = 44U;
	int8_t x143 = INT8_MIN;
	uint16_t x144 = UINT16_MAX;

	t31 = (((x141/x142)%x143)-x144);

	if (t31 != -65489) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x146 = -1LL;
	int64_t x148 = -1LL;

	t32 = (((x145/x146)%x147)-x148);

	if (t32 != -4294967294LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x150 = INT16_MAX;
	static uint64_t x151 = 3837LLU;
	volatile uint64_t t33 = 1041804296853371285LLU;

	t33 = (((x149/x150)%x151)-x152);

	if (t33 != 18446744072319182685LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x153 = 6U;
	static volatile int8_t x154 = INT8_MAX;
	uint16_t x155 = 81U;
	int8_t x156 = INT8_MIN;
	static int32_t t34 = 2;

	t34 = (((x153/x154)%x155)-x156);

	if (t34 != 128) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x157 = -643;
	volatile uint32_t x158 = 11485763U;

	t35 = (((x157/x158)%x159)-x160);

	if (t35 != 4294967161U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x162 = -1;
	int64_t x163 = INT64_MIN;
	int16_t x164 = INT16_MIN;
	volatile int64_t t36 = -17429942331477LL;

	t36 = (((x161/x162)%x163)-x164);

	if (t36 != -85077587350LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x165 = UINT32_MAX;
	int16_t x166 = 20;
	uint32_t x168 = 1201U;
	uint32_t t37 = 2822U;

	t37 = (((x165/x166)%x167)-x168);

	if (t37 != 4294966296U) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x169 = INT32_MIN;
	static volatile uint8_t x170 = 45U;
	static volatile int16_t x171 = 19;
	int8_t x172 = INT8_MIN;
	int32_t t38 = -26967;

	t38 = (((x169/x170)%x171)-x172);

	if (t38 != 114) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x175 = 8085U;
	volatile int8_t x176 = INT8_MAX;
	uint64_t t39 = 528973429207652016LLU;

	t39 = (((x173/x174)%x175)-x176);

	if (t39 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x177 = INT8_MAX;
	uint32_t x179 = UINT32_MAX;
	int8_t x180 = INT8_MIN;
	static volatile uint32_t t40 = 494U;

	t40 = (((x177/x178)%x179)-x180);

	if (t40 != 129U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x181 = UINT64_MAX;
	uint16_t x182 = UINT16_MAX;
	int32_t x183 = -1;
	volatile uint64_t t41 = 115581958846944316LLU;

	t41 = (((x181/x182)%x183)-x184);

	if (t41 != 281479271743490LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x186 = INT8_MAX;
	uint8_t x187 = 22U;
	volatile int16_t x188 = INT16_MIN;
	int64_t t42 = 156796819LL;

	t42 = (((x185/x186)%x187)-x188);

	if (t42 != 32756LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x189 = 4982U;
	static uint8_t x191 = UINT8_MAX;
	static uint64_t t43 = 108LLU;

	t43 = (((x189/x190)%x191)-x192);

	if (t43 != 18446744073509515353LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x194 = INT8_MIN;
	volatile int16_t x195 = INT16_MAX;
	volatile int32_t x196 = 28492;
	int32_t t44 = -9389;

	t44 = (((x193/x194)%x195)-x196);

	if (t44 != -28492) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x197 = 121U;
	uint8_t x198 = 116U;
	int8_t x200 = INT8_MIN;
	int32_t t45 = 0;

	t45 = (((x197/x198)%x199)-x200);

	if (t45 != 129) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x205 = -4;
	int16_t x206 = -1;
	int64_t x208 = INT64_MAX;
	int64_t t46 = -321516268015312LL;

	t46 = (((x205/x206)%x207)-x208);

	if (t46 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x209 = INT64_MAX;
	volatile uint8_t x212 = 22U;

	t47 = (((x209/x210)%x211)-x212);

	if (t47 != -22LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x213 = 2U;
	volatile int32_t x214 = INT32_MAX;
	uint32_t x215 = 4297845U;
	int64_t x216 = 963004LL;
	int64_t t48 = 110LL;

	t48 = (((x213/x214)%x215)-x216);

	if (t48 != -963004LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x217 = UINT8_MAX;
	int8_t x218 = INT8_MAX;
	int8_t x220 = -1;
	int32_t t49 = -51;

	t49 = (((x217/x218)%x219)-x220);

	if (t49 != 3) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x221 = 7854;
	static uint32_t x222 = UINT32_MAX;
	uint64_t x223 = UINT64_MAX;
	volatile uint64_t t50 = 297813053783046560LLU;

	t50 = (((x221/x222)%x223)-x224);

	if (t50 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x225 = 68314900571LLU;
	static volatile int64_t x226 = INT64_MAX;
	int32_t x227 = 249707137;
	uint8_t x228 = UINT8_MAX;
	volatile uint64_t t51 = 175092LLU;

	t51 = (((x225/x226)%x227)-x228);

	if (t51 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x233 = 846;
	int64_t x235 = -1LL;
	int64_t x236 = -1LL;
	volatile int64_t t52 = -1238740LL;

	t52 = (((x233/x234)%x235)-x236);

	if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x237 = UINT32_MAX;
	uint64_t x238 = 102843676458369172LLU;
	static uint16_t x240 = 0U;
	uint64_t t53 = 28939329826148LLU;

	t53 = (((x237/x238)%x239)-x240);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x241 = 49772534U;
	int64_t x242 = INT64_MAX;
	int8_t x243 = -7;
	int16_t x244 = -71;
	int64_t t54 = 5099126461577261LL;

	t54 = (((x241/x242)%x243)-x244);

	if (t54 != 71LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x247 = 118;
	uint64_t x248 = 56457039914677LLU;
	uint64_t t55 = 44613080205LLU;

	t55 = (((x245/x246)%x247)-x248);

	if (t55 != 18446687616669636939LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x249 = 10U;
	uint64_t x252 = 212663954646276973LLU;
	volatile uint64_t t56 = 123388548LLU;

	t56 = (((x249/x250)%x251)-x252);

	if (t56 != 18234080119063274643LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x253 = INT8_MIN;
	volatile int16_t x254 = INT16_MAX;
	int8_t x255 = INT8_MIN;
	volatile uint64_t x256 = 1097589LLU;

	t57 = (((x253/x254)%x255)-x256);

	if (t57 != 18446744073708454027LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x257 = INT8_MAX;
	uint32_t x258 = UINT32_MAX;
	static int8_t x259 = INT8_MIN;
	volatile int8_t x260 = -1;
	volatile uint32_t t58 = 108312084U;

	t58 = (((x257/x258)%x259)-x260);

	if (t58 != 1U) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x262 = -1;
	volatile int8_t x263 = INT8_MIN;
	static int32_t x264 = 0;
	volatile int32_t t59 = 50720057;

	t59 = (((x261/x262)%x263)-x264);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x266 = 88974968;
	int64_t x267 = 2LL;
	static int64_t x268 = 1LL;
	volatile int64_t t60 = -5865LL;

	t60 = (((x265/x266)%x267)-x268);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x269 = INT8_MIN;
	volatile uint32_t x271 = 14093587U;
	volatile uint32_t x272 = UINT32_MAX;
	volatile uint64_t t61 = 225LLU;

	t61 = (((x269/x270)%x271)-x272);

	if (t61 != 18446744069415784235LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x273 = 73U;
	int8_t x275 = 1;
	int16_t x276 = INT16_MIN;
	volatile int32_t t62 = 697921;

	t62 = (((x273/x274)%x275)-x276);

	if (t62 != 32768) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x277 = 6U;
	int16_t x279 = INT16_MAX;
	int8_t x280 = 3;

	t63 = (((x277/x278)%x279)-x280);

	if (t63 != -3) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x282 = INT64_MAX;
	static uint16_t x283 = 24U;
	uint16_t x284 = 19U;
	int64_t t64 = 30387541782517LL;

	t64 = (((x281/x282)%x283)-x284);

	if (t64 != -19LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x285 = 0U;
	static uint8_t x286 = 24U;
	uint16_t x287 = UINT16_MAX;

	t65 = (((x285/x286)%x287)-x288);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x289 = INT8_MIN;
	uint8_t x290 = UINT8_MAX;
	static int8_t x291 = INT8_MIN;
	int16_t x292 = INT16_MAX;
	int32_t t66 = -891;

	t66 = (((x289/x290)%x291)-x292);

	if (t66 != -32767) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x293 = 27U;
	uint16_t x295 = UINT16_MAX;
	uint16_t x296 = 7809U;

	t67 = (((x293/x294)%x295)-x296);

	if (t67 != -7809) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x297 = 19997009011521606LL;
	int64_t x298 = 2718881LL;
	uint16_t x299 = 364U;
	int16_t x300 = INT16_MIN;
	volatile int64_t t68 = 246232003LL;

	t68 = (((x297/x298)%x299)-x300);

	if (t68 != 32931LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x301 = 8112;
	uint16_t x303 = UINT16_MAX;
	int32_t x304 = -135351115;
	static int32_t t69 = 842989;

	t69 = (((x301/x302)%x303)-x304);

	if (t69 != 135351115) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x306 = 7U;
	uint64_t x307 = 1LLU;
	static uint32_t x308 = 297615U;
	static volatile uint64_t t70 = 119LLU;

	t70 = (((x305/x306)%x307)-x308);

	if (t70 != 18446744073709254001LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x311 = 3U;
	volatile int64_t x312 = 68035177925749396LL;
	int64_t t71 = -14106089211520226LL;

	t71 = (((x309/x310)%x311)-x312);

	if (t71 != -68035177925749396LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x313 = -4;
	uint8_t x315 = 8U;
	uint8_t x316 = UINT8_MAX;
	volatile int32_t t72 = 14030553;

	t72 = (((x313/x314)%x315)-x316);

	if (t72 != -255) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x317 = 1483514LLU;
	int32_t x318 = INT32_MAX;
	uint16_t x319 = 19517U;
	uint64_t t73 = 13961632LLU;

	t73 = (((x317/x318)%x319)-x320);

	if (t73 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x321 = 1U;
	volatile int16_t x322 = 1;
	static int64_t x323 = -1LL;
	static int32_t x324 = 809299;
	volatile int64_t t74 = 145611241574011LL;

	t74 = (((x321/x322)%x323)-x324);

	if (t74 != -809299LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x325 = -13258LL;
	volatile int32_t x327 = INT32_MIN;
	uint64_t x328 = UINT64_MAX;
	uint64_t t75 = 61LLU;

	t75 = (((x325/x326)%x327)-x328);

	if (t75 != 18446744073709548966LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x329 = -1LL;
	volatile int16_t x330 = INT16_MIN;
	int8_t x331 = INT8_MAX;
	volatile int16_t x332 = -1;

	t76 = (((x329/x330)%x331)-x332);

	if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x333 = INT64_MIN;
	static int64_t x335 = -240575886408880LL;
	static int32_t x336 = 125667;
	int64_t t77 = 8680139865490LL;

	t77 = (((x333/x334)%x335)-x336);

	if (t77 != -152832248987875LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x338 = 105;
	int64_t x339 = INT64_MIN;
	uint8_t x340 = 1U;
	volatile int64_t t78 = 107540369408312547LL;

	t78 = (((x337/x338)%x339)-x340);

	if (t78 != 20452224LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x341 = 71;
	uint64_t x342 = 30838526LLU;
	volatile int8_t x343 = INT8_MIN;
	volatile int32_t x344 = INT32_MAX;
	uint64_t t79 = 26734899061702LLU;

	t79 = (((x341/x342)%x343)-x344);

	if (t79 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x346 = 4082U;
	int16_t x347 = INT16_MAX;
	static volatile int32_t x348 = 19137;
	volatile uint32_t t80 = 6447833U;

	t80 = (((x345/x346)%x347)-x348);

	if (t80 != 4294948175U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x350 = -32;
	volatile int64_t x351 = INT64_MIN;
	uint16_t x352 = 2788U;
	int64_t t81 = -91124962640LL;

	t81 = (((x349/x350)%x351)-x352);

	if (t81 != -2266LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x353 = 681333;
	int32_t x354 = -27969350;
	uint16_t x355 = 3U;
	volatile int8_t x356 = -6;
	volatile int32_t t82 = 195035934;

	t82 = (((x353/x354)%x355)-x356);

	if (t82 != 6) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x358 = INT8_MIN;
	int8_t x359 = -1;
	static int8_t x360 = -1;
	int32_t t83 = 59;

	t83 = (((x357/x358)%x359)-x360);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x362 = INT32_MAX;
	volatile int16_t x363 = INT16_MIN;
	uint32_t x364 = UINT32_MAX;

	t84 = (((x361/x362)%x363)-x364);

	if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x365 = 24LL;
	int64_t x366 = -1LL;
	static uint32_t x367 = 4U;
	int64_t x368 = -57337703LL;
	volatile int64_t t85 = 33192165105961060LL;

	t85 = (((x365/x366)%x367)-x368);

	if (t85 != 57337703LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x373 = 19300720U;
	int32_t x374 = -1;
	int32_t x375 = -1601488;
	static int16_t x376 = -500;
	static uint32_t t86 = 29U;

	t86 = (((x373/x374)%x375)-x376);

	if (t86 != 500U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x377 = INT16_MIN;
	uint64_t x378 = 105256LLU;
	static volatile int64_t x379 = INT64_MIN;
	uint64_t x380 = UINT64_MAX;

	t87 = (((x377/x378)%x379)-x380);

	if (t87 != 175255986107296LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x381 = 4204;
	int8_t x382 = 1;
	volatile int16_t x383 = 1791;
	uint16_t x384 = UINT16_MAX;
	int32_t t88 = 3;

	t88 = (((x381/x382)%x383)-x384);

	if (t88 != -64913) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x385 = 393U;
	int64_t x386 = 26344814201LL;
	volatile uint8_t x387 = 3U;
	int64_t x388 = -5239356LL;

	t89 = (((x385/x386)%x387)-x388);

	if (t89 != 5239356LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x390 = -1LL;
	int8_t x391 = INT8_MAX;
	volatile int16_t x392 = 164;
	volatile uint64_t t90 = 1016202679365LLU;

	t90 = (((x389/x390)%x391)-x392);

	if (t90 != 18446744073709551452LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x393 = -1;
	static volatile uint64_t x395 = 673625LLU;
	uint16_t x396 = 3U;
	volatile uint64_t t91 = 2004600354698806720LLU;

	t91 = (((x393/x394)%x395)-x396);

	if (t91 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x397 = UINT32_MAX;
	int32_t x398 = -5184;
	int64_t x399 = INT64_MAX;
	volatile int64_t t92 = 3530326619704216465LL;

	t92 = (((x397/x398)%x399)-x400);

	if (t92 != 2LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x402 = 451LLU;
	uint16_t x403 = 2568U;
	int64_t x404 = -1143268LL;

	t93 = (((x401/x402)%x403)-x404);

	if (t93 != 1144655LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x405 = 8;
	volatile int8_t x406 = INT8_MIN;
	int32_t x407 = -107639751;
	volatile int64_t x408 = -1LL;
	volatile int64_t t94 = 689236LL;

	t94 = (((x405/x406)%x407)-x408);

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x409 = UINT64_MAX;
	uint32_t x410 = 859752546U;
	int8_t x411 = -1;
	uint16_t x412 = UINT16_MAX;

	t95 = (((x409/x410)%x411)-x412);

	if (t95 != 21455810530LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x413 = 245U;
	static volatile uint32_t x415 = 373U;
	uint32_t t96 = 999342107U;

	t96 = (((x413/x414)%x415)-x416);

	if (t96 != 2147483649U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x418 = -19;
	int16_t x419 = INT16_MAX;
	volatile int32_t t97 = 8025;

	t97 = (((x417/x418)%x419)-x420);

	if (t97 != -53463) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x421 = INT16_MIN;
	int64_t x422 = INT64_MIN;
	int64_t x423 = 14260854369LL;
	uint64_t x424 = UINT64_MAX;
	static uint64_t t98 = 8404453LLU;

	t98 = (((x421/x422)%x423)-x424);

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x425 = -1LL;
	volatile int8_t x426 = INT8_MIN;
	static int64_t x427 = 803463LL;
	int16_t x428 = INT16_MIN;

	t99 = (((x425/x426)%x427)-x428);

	if (t99 != 32768LL) { NG(); } else { ; }
	
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

