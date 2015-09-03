#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x2 = 11989744LLU;
int32_t x9 = -1;
volatile int32_t t2 = -23087;
int8_t x17 = 6;
int32_t x18 = INT32_MAX;
uint32_t x28 = 6U;
int32_t t6 = 5;
int32_t t7 = -1406;
int8_t x35 = INT8_MIN;
static uint8_t x36 = 26U;
volatile int16_t x44 = INT16_MAX;
int8_t x47 = -52;
volatile int16_t x49 = -1;
uint8_t x55 = 3U;
static volatile int32_t t13 = -677061741;
uint8_t x58 = UINT8_MAX;
int64_t x59 = INT64_MAX;
volatile int64_t x61 = 49627LL;
volatile int32_t t15 = 86;
uint16_t x68 = 29698U;
int8_t x70 = -1;
uint32_t x72 = 7407U;
static int64_t x78 = INT64_MAX;
static volatile int16_t x80 = -1;
volatile uint16_t x83 = 5375U;
int64_t x85 = INT64_MIN;
uint64_t x90 = UINT64_MAX;
int64_t x95 = INT64_MIN;
uint8_t x96 = UINT8_MAX;
volatile int64_t x97 = 779047412207LL;
static volatile uint64_t x104 = 158711356665104LLU;
uint32_t x109 = UINT32_MAX;
int32_t t28 = 379;
volatile int32_t x117 = -910;
int32_t t29 = 1997;
static int64_t x130 = INT64_MIN;
int64_t x132 = INT64_MAX;
volatile int32_t t32 = 19699;
uint8_t x134 = 54U;
int32_t t33 = -4178;
volatile int32_t t34 = -193;
int64_t x141 = 48166LL;
volatile uint32_t x145 = 1402632U;
static uint32_t x148 = UINT32_MAX;
int8_t x153 = -14;
int16_t x154 = -1;
int16_t x155 = INT16_MAX;
int32_t t38 = 156992236;
int16_t x158 = INT16_MIN;
volatile int8_t x165 = 24;
uint32_t x166 = 5482U;
uint64_t x167 = 35152379340LLU;
volatile int32_t t41 = 1;
uint64_t x169 = UINT64_MAX;
uint32_t x172 = 1520900836U;
int16_t x177 = -1;
int64_t x182 = -1LL;
int32_t x183 = INT32_MAX;
int16_t x185 = -1430;
volatile uint64_t x186 = UINT64_MAX;
int8_t x188 = -13;
int64_t x206 = -163408166815993076LL;
uint8_t x209 = UINT8_MAX;
uint16_t x210 = UINT16_MAX;
static volatile int8_t x218 = 5;
int32_t t55 = -6909;
static uint64_t x225 = 41661LLU;
int16_t x239 = INT16_MIN;
int8_t x242 = -1;
uint8_t x243 = 1U;
volatile int32_t t61 = 12;
uint64_t x256 = 12223354LLU;
int32_t x258 = -1;
static int8_t x259 = -1;
int64_t x271 = -2747870953LL;
int16_t x275 = -1412;
static int16_t x277 = -1;
volatile int64_t x293 = -1LL;
static volatile uint64_t x294 = 530160504182LLU;
int32_t t73 = -2;
int32_t x297 = -1;
uint32_t x299 = 3751319U;
static uint16_t x305 = 0U;
static volatile int32_t t76 = -3975;
int32_t t78 = -1035911614;
static volatile uint16_t x317 = UINT16_MAX;
uint8_t x318 = 6U;
int32_t x319 = -115745692;
static uint32_t x321 = UINT32_MAX;
uint32_t x326 = 845U;
uint32_t x335 = 731U;
int16_t x336 = INT16_MIN;
volatile int32_t t84 = 3;
int32_t x345 = -1;
static int8_t x349 = -1;
int32_t t87 = -2;
uint32_t x358 = 15483U;
int64_t x369 = INT64_MIN;
uint8_t x370 = 1U;
volatile int32_t x377 = INT32_MIN;
static uint16_t x382 = UINT16_MAX;
volatile int32_t t95 = -63980454;
static uint32_t x386 = 2U;
int8_t x387 = INT8_MAX;
static uint8_t x392 = UINT8_MAX;
uint64_t x398 = UINT64_MAX;
uint64_t x400 = 1LLU;


void f0(void) {
	int64_t x1 = INT64_MIN;
	volatile int8_t x3 = -1;
	static int32_t x4 = -1011;
	volatile int32_t t0 = -117;

	t0 = (((x1&x2)&x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	uint8_t x6 = UINT8_MAX;
	uint8_t x7 = 18U;
	int16_t x8 = 7;
	volatile int32_t t1 = 253;

	t1 = (((x5&x6)&x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x10 = 7U;
	volatile int16_t x11 = 3447;
	volatile uint8_t x12 = 106U;

	t2 = (((x9&x10)&x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	static int16_t x14 = INT16_MAX;
	uint16_t x15 = 5722U;
	uint64_t x16 = UINT64_MAX;
	static volatile int32_t t3 = 7;

	t3 = (((x13&x14)&x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x19 = 177U;
	uint64_t x20 = 45784966358LLU;
	static volatile int32_t t4 = -88;

	t4 = (((x17&x18)&x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = INT8_MAX;
	int32_t x22 = INT32_MIN;
	static uint8_t x23 = 42U;
	int16_t x24 = 9;
	volatile int32_t t5 = 15435045;

	t5 = (((x21&x22)&x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 761;
	int64_t x26 = INT64_MIN;
	volatile uint8_t x27 = 6U;

	t6 = (((x25&x26)&x27)<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	volatile uint8_t x30 = 6U;
	int16_t x31 = -1;
	static int16_t x32 = 61;

	t7 = (((x29&x30)&x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	uint16_t x34 = 2U;
	int32_t t8 = 125510819;

	t8 = (((x33&x34)&x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MAX;
	int16_t x38 = -925;
	static int32_t x39 = INT32_MAX;
	int8_t x40 = INT8_MIN;
	static int32_t t9 = 38;

	t9 = (((x37&x38)&x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 1;
	int16_t x42 = -1;
	int64_t x43 = INT64_MAX;
	static volatile int32_t t10 = 2;

	t10 = (((x41&x42)&x43)<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 37U;
	uint64_t x46 = UINT64_MAX;
	uint16_t x48 = UINT16_MAX;
	volatile int32_t t11 = 84590;

	t11 = (((x45&x46)&x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x50 = 3;
	int16_t x51 = -404;
	int8_t x52 = -1;
	int32_t t12 = 121939;

	t12 = (((x49&x50)&x51)<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	static volatile int16_t x54 = -1;
	volatile int16_t x56 = INT16_MAX;

	t13 = (((x53&x54)&x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	volatile int8_t x60 = -1;
	volatile int32_t t14 = -68643;

	t14 = (((x57&x58)&x59)<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x62 = 1497224U;
	int32_t x63 = -18684;
	static uint64_t x64 = 445742897345728LLU;

	t15 = (((x61&x62)&x63)<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	uint64_t x66 = 394112469387LLU;
	int16_t x67 = INT16_MIN;
	int32_t t16 = 5;

	t16 = (((x65&x66)&x67)<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	int32_t x71 = INT32_MIN;
	volatile int32_t t17 = -200987;

	t17 = (((x69&x70)&x71)<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -13;
	int64_t x74 = -1LL;
	static int8_t x75 = -60;
	int8_t x76 = -1;
	volatile int32_t t18 = 110395;

	t18 = (((x73&x74)&x75)<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 3708011106LLU;
	int8_t x79 = 1;
	static volatile int32_t t19 = -251596;

	t19 = (((x77&x78)&x79)<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	int8_t x82 = INT8_MAX;
	int8_t x84 = INT8_MAX;
	volatile int32_t t20 = 86;

	t20 = (((x81&x82)&x83)<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x86 = 5U;
	volatile uint32_t x87 = UINT32_MAX;
	uint64_t x88 = UINT64_MAX;
	int32_t t21 = -7288;

	t21 = (((x85&x86)&x87)<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = UINT16_MAX;
	uint16_t x91 = 25211U;
	int64_t x92 = -889044936591729775LL;
	int32_t t22 = 1;

	t22 = (((x89&x90)&x91)<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MAX;
	static int8_t x94 = INT8_MIN;
	int32_t t23 = 1;

	t23 = (((x93&x94)&x95)<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x98 = INT16_MAX;
	int8_t x99 = INT8_MIN;
	static int8_t x100 = -1;
	int32_t t24 = 8702169;

	t24 = (((x97&x98)&x99)<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x101 = 199586490789LL;
	int32_t x102 = -1;
	int16_t x103 = -1;
	volatile int32_t t25 = -1;

	t25 = (((x101&x102)&x103)<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x105 = INT8_MIN;
	int16_t x106 = 6;
	int16_t x107 = -12;
	int64_t x108 = INT64_MAX;
	static volatile int32_t t26 = -889;

	t26 = (((x105&x106)&x107)<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = 8743151605LL;
	int16_t x111 = INT16_MIN;
	int8_t x112 = 5;
	int32_t t27 = 2;

	t27 = (((x109&x110)&x111)<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MAX;
	static volatile uint64_t x114 = UINT64_MAX;
	uint8_t x115 = 0U;
	int16_t x116 = -66;

	t28 = (((x113&x114)&x115)<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = 1;
	uint8_t x119 = UINT8_MAX;
	int64_t x120 = INT64_MIN;

	t29 = (((x117&x118)&x119)<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = UINT64_MAX;
	uint16_t x122 = UINT16_MAX;
	uint8_t x123 = 0U;
	int16_t x124 = -24;
	volatile int32_t t30 = 237;

	t30 = (((x121&x122)&x123)<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MAX;
	uint8_t x126 = UINT8_MAX;
	uint32_t x127 = 9U;
	uint16_t x128 = 2887U;
	int32_t t31 = -619448;

	t31 = (((x125&x126)&x127)<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = INT64_MIN;
	int8_t x131 = -1;

	t32 = (((x129&x130)&x131)<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = -879;
	int64_t x135 = 1314534606653251LL;
	volatile int32_t x136 = INT32_MAX;

	t33 = (((x133&x134)&x135)<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = 1888;
	int32_t x138 = -1;
	uint32_t x139 = 24010U;
	int8_t x140 = -29;

	t34 = (((x137&x138)&x139)<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint8_t x142 = 31U;
	int8_t x143 = 3;
	int64_t x144 = 1039624632122065604LL;
	int32_t t35 = -323;

	t35 = (((x141&x142)&x143)<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = INT8_MIN;
	int64_t x147 = -799273141579223LL;
	static volatile int32_t t36 = 5437;

	t36 = (((x145&x146)&x147)<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = 73;
	volatile uint16_t x150 = 23698U;
	static int32_t x151 = INT32_MIN;
	int16_t x152 = INT16_MAX;
	volatile int32_t t37 = 81783239;

	t37 = (((x149&x150)&x151)<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x156 = INT64_MAX;

	t38 = (((x153&x154)&x155)<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	uint64_t x159 = 0LLU;
	static int16_t x160 = INT16_MIN;
	int32_t t39 = 13045404;

	t39 = (((x157&x158)&x159)<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MAX;
	int8_t x162 = INT8_MIN;
	static int16_t x163 = -1;
	static int64_t x164 = -1LL;
	static volatile int32_t t40 = -121920288;

	t40 = (((x161&x162)&x163)<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x168 = INT8_MIN;

	t41 = (((x165&x166)&x167)<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x170 = 0U;
	volatile int8_t x171 = INT8_MIN;
	static volatile int32_t t42 = 7853;

	t42 = (((x169&x170)&x171)<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MAX;
	static int16_t x174 = INT16_MIN;
	int16_t x175 = INT16_MIN;
	int8_t x176 = INT8_MIN;
	int32_t t43 = 438;

	t43 = (((x173&x174)&x175)<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x178 = 1586U;
	int16_t x179 = INT16_MAX;
	volatile int64_t x180 = INT64_MIN;
	volatile int32_t t44 = 169572;

	t44 = (((x177&x178)&x179)<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MAX;
	int32_t x184 = INT32_MIN;
	int32_t t45 = 1782391;

	t45 = (((x181&x182)&x183)<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x187 = 43;
	static volatile int32_t t46 = -4480;

	t46 = (((x185&x186)&x187)<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = 1883;
	int64_t x190 = -1LL;
	int64_t x191 = INT64_MAX;
	volatile uint16_t x192 = 3357U;
	int32_t t47 = 46;

	t47 = (((x189&x190)&x191)<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 194026U;
	volatile uint32_t x194 = 760433418U;
	int8_t x195 = INT8_MIN;
	int16_t x196 = INT16_MAX;
	int32_t t48 = 7040594;

	t48 = (((x193&x194)&x195)<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 7019906U;
	int8_t x198 = INT8_MIN;
	int16_t x199 = 12;
	static int64_t x200 = INT64_MAX;
	int32_t t49 = -12;

	t49 = (((x197&x198)&x199)<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MAX;
	int16_t x202 = -1;
	int16_t x203 = INT16_MIN;
	int32_t x204 = INT32_MIN;
	int32_t t50 = -9958801;

	t50 = (((x201&x202)&x203)<x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = 20979;
	volatile int16_t x207 = INT16_MIN;
	static int32_t x208 = 3458;
	volatile int32_t t51 = -89241577;

	t51 = (((x205&x206)&x207)<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x211 = 539880920066803LLU;
	int32_t x212 = INT32_MAX;
	int32_t t52 = 492;

	t52 = (((x209&x210)&x211)<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x213 = UINT64_MAX;
	int64_t x214 = 0LL;
	static int16_t x215 = -1;
	int32_t x216 = -36899235;
	volatile int32_t t53 = 43;

	t53 = (((x213&x214)&x215)<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	volatile int64_t x219 = INT64_MIN;
	int32_t x220 = INT32_MIN;
	static int32_t t54 = -1621536;

	t54 = (((x217&x218)&x219)<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = -5;
	int64_t x222 = -1LL;
	uint16_t x223 = 54U;
	volatile int64_t x224 = 29LL;

	t55 = (((x221&x222)&x223)<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x226 = INT8_MIN;
	volatile int32_t x227 = -1;
	int8_t x228 = 14;
	volatile int32_t t56 = -280;

	t56 = (((x225&x226)&x227)<x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = UINT16_MAX;
	int32_t x230 = INT32_MIN;
	int32_t x231 = INT32_MIN;
	int32_t x232 = 2;
	int32_t t57 = 882529546;

	t57 = (((x229&x230)&x231)<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = UINT8_MAX;
	int8_t x234 = 23;
	int64_t x235 = -385149LL;
	volatile uint32_t x236 = 361040U;
	int32_t t58 = 56561;

	t58 = (((x233&x234)&x235)<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -221436LL;
	static int8_t x238 = -3;
	volatile int16_t x240 = INT16_MAX;
	volatile int32_t t59 = 3486267;

	t59 = (((x237&x238)&x239)<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 490095925U;
	uint16_t x244 = UINT16_MAX;
	volatile int32_t t60 = 1;

	t60 = (((x241&x242)&x243)<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x245 = 55U;
	volatile uint8_t x246 = UINT8_MAX;
	int64_t x247 = -1LL;
	int32_t x248 = -1;

	t61 = (((x245&x246)&x247)<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 0U;
	volatile int16_t x250 = 3;
	int64_t x251 = INT64_MAX;
	volatile int16_t x252 = INT16_MAX;
	int32_t t62 = 176;

	t62 = (((x249&x250)&x251)<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = 1;
	uint16_t x254 = 32155U;
	int16_t x255 = -12;
	static int32_t t63 = 2600;

	t63 = (((x253&x254)&x255)<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x257 = -3;
	int8_t x260 = INT8_MAX;
	volatile int32_t t64 = -1;

	t64 = (((x257&x258)&x259)<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -1LL;
	uint16_t x262 = 30112U;
	static uint16_t x263 = UINT16_MAX;
	int32_t x264 = 4835;
	volatile int32_t t65 = -119021;

	t65 = (((x261&x262)&x263)<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MAX;
	int8_t x266 = 3;
	uint16_t x267 = 960U;
	int64_t x268 = INT64_MIN;
	int32_t t66 = 7;

	t66 = (((x265&x266)&x267)<x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint8_t x269 = 41U;
	int8_t x270 = INT8_MAX;
	int8_t x272 = INT8_MIN;
	static int32_t t67 = -2947;

	t67 = (((x269&x270)&x271)<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x273 = INT16_MIN;
	int16_t x274 = INT16_MAX;
	volatile uint16_t x276 = 30U;
	int32_t t68 = 2352548;

	t68 = (((x273&x274)&x275)<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x278 = UINT64_MAX;
	uint16_t x279 = 0U;
	int16_t x280 = -48;
	volatile int32_t t69 = 4245985;

	t69 = (((x277&x278)&x279)<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x281 = 11219U;
	volatile int32_t x282 = -40946987;
	int64_t x283 = INT64_MIN;
	static uint64_t x284 = 10397LLU;
	volatile int32_t t70 = 1499;

	t70 = (((x281&x282)&x283)<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = 262U;
	volatile int16_t x286 = INT16_MIN;
	int32_t x287 = -1;
	static int16_t x288 = -14296;
	int32_t t71 = -734;

	t71 = (((x285&x286)&x287)<x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 416U;
	uint8_t x290 = 3U;
	uint32_t x291 = UINT32_MAX;
	int64_t x292 = INT64_MIN;
	volatile int32_t t72 = -1;

	t72 = (((x289&x290)&x291)<x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x295 = INT32_MIN;
	int32_t x296 = -22004;

	t73 = (((x293&x294)&x295)<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x298 = -1;
	static uint16_t x300 = UINT16_MAX;
	int32_t t74 = -1894;

	t74 = (((x297&x298)&x299)<x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	volatile uint16_t x302 = 254U;
	int64_t x303 = INT64_MIN;
	int8_t x304 = INT8_MAX;
	volatile int32_t t75 = 715464;

	t75 = (((x301&x302)&x303)<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = 10;
	int64_t x307 = INT64_MIN;
	volatile int8_t x308 = INT8_MIN;

	t76 = (((x305&x306)&x307)<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x309 = INT8_MIN;
	volatile int16_t x310 = INT16_MIN;
	volatile int64_t x311 = -1LL;
	int32_t x312 = -83907;
	static volatile int32_t t77 = -23803439;

	t77 = (((x309&x310)&x311)<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x313 = 8U;
	int8_t x314 = INT8_MIN;
	int32_t x315 = INT32_MAX;
	volatile int8_t x316 = INT8_MAX;

	t78 = (((x313&x314)&x315)<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x320 = 158330481547117324LLU;
	volatile int32_t t79 = -47380481;

	t79 = (((x317&x318)&x319)<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x322 = INT64_MAX;
	volatile int16_t x323 = -1;
	int16_t x324 = -3625;
	int32_t t80 = -306794;

	t80 = (((x321&x322)&x323)<x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	uint16_t x327 = UINT16_MAX;
	volatile int16_t x328 = -1;
	static volatile int32_t t81 = -2678843;

	t81 = (((x325&x326)&x327)<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = 17357LL;
	static int32_t x330 = INT32_MAX;
	uint8_t x331 = 1U;
	int16_t x332 = INT16_MIN;
	volatile int32_t t82 = 2667493;

	t82 = (((x329&x330)&x331)<x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x333 = UINT16_MAX;
	int8_t x334 = INT8_MIN;
	int32_t t83 = -160241;

	t83 = (((x333&x334)&x335)<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = 1;
	volatile int16_t x338 = -1;
	volatile int32_t x339 = INT32_MIN;
	volatile int32_t x340 = INT32_MAX;

	t84 = (((x337&x338)&x339)<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = UINT16_MAX;
	int16_t x342 = -1;
	int64_t x343 = 130640621159477LL;
	int64_t x344 = INT64_MAX;
	volatile int32_t t85 = 171;

	t85 = (((x341&x342)&x343)<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x346 = 1U;
	int64_t x347 = INT64_MIN;
	uint64_t x348 = 688LLU;
	static volatile int32_t t86 = -3238096;

	t86 = (((x345&x346)&x347)<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x350 = 6U;
	uint64_t x351 = UINT64_MAX;
	static uint16_t x352 = 1U;

	t87 = (((x349&x350)&x351)<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 1305980830LLU;
	int64_t x354 = -114010596613526468LL;
	uint64_t x355 = 1016LLU;
	static uint32_t x356 = 19692918U;
	volatile int32_t t88 = -1185;

	t88 = (((x353&x354)&x355)<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = UINT8_MAX;
	static int8_t x359 = -1;
	int8_t x360 = -8;
	volatile int32_t t89 = 3260;

	t89 = (((x357&x358)&x359)<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x361 = UINT8_MAX;
	static volatile int64_t x362 = INT64_MIN;
	static int8_t x363 = 1;
	static uint32_t x364 = UINT32_MAX;
	volatile int32_t t90 = 5356051;

	t90 = (((x361&x362)&x363)<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = 208267016208296222LL;
	volatile uint16_t x366 = 1923U;
	uint32_t x367 = UINT32_MAX;
	int16_t x368 = 1;
	volatile int32_t t91 = 1007;

	t91 = (((x365&x366)&x367)<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x371 = -1LL;
	static uint8_t x372 = UINT8_MAX;
	int32_t t92 = -1;

	t92 = (((x369&x370)&x371)<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x373 = INT8_MIN;
	int8_t x374 = INT8_MIN;
	uint32_t x375 = UINT32_MAX;
	uint64_t x376 = UINT64_MAX;
	int32_t t93 = 35;

	t93 = (((x373&x374)&x375)<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x378 = UINT32_MAX;
	int8_t x379 = 1;
	uint64_t x380 = 486LLU;
	volatile int32_t t94 = 562436;

	t94 = (((x377&x378)&x379)<x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x381 = 323686LL;
	uint8_t x383 = 83U;
	volatile int64_t x384 = 910968970247LL;

	t95 = (((x381&x382)&x383)<x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -1;
	int8_t x388 = INT8_MIN;
	static volatile int32_t t96 = 14;

	t96 = (((x385&x386)&x387)<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x389 = INT64_MIN;
	uint16_t x390 = 1U;
	volatile uint32_t x391 = 108689104U;
	int32_t t97 = 17904;

	t97 = (((x389&x390)&x391)<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x393 = INT64_MIN;
	int16_t x394 = -1175;
	uint8_t x395 = 29U;
	int64_t x396 = INT64_MIN;
	int32_t t98 = 4900;

	t98 = (((x393&x394)&x395)<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 119U;
	uint64_t x399 = 5865724177LLU;
	static volatile int32_t t99 = 8150534;

	t99 = (((x397&x398)&x399)<x400);

	if (t99 != 0) { NG(); } else { ; }
	
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

