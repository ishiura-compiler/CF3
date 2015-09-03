#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = -1LL;
int16_t x8 = INT16_MAX;
uint32_t x31 = 204U;
uint16_t x32 = UINT16_MAX;
uint16_t x39 = 19369U;
int32_t x47 = -1311792;
volatile int32_t t11 = 1;
volatile int8_t x65 = INT8_MIN;
int64_t x66 = 10253258975578LL;
int16_t x69 = -1;
int16_t x70 = INT16_MAX;
int8_t x80 = -1;
int32_t x84 = -1;
volatile int64_t t20 = 11839802481LL;
uint32_t x96 = UINT32_MAX;
volatile int64_t t24 = -33378297LL;
uint64_t x116 = 185290535624LLU;
static volatile uint64_t t26 = 9207LLU;
volatile int32_t t27 = 23655583;
int8_t x124 = INT8_MIN;
int64_t x125 = 880078648490LL;
volatile uint64_t t29 = 13083553440LLU;
volatile uint64_t x132 = 715LLU;
uint64_t t30 = 25801LLU;
static volatile int64_t t31 = -720718676LL;
int64_t x139 = -1LL;
volatile int64_t t32 = -2311395267661419LL;
static int16_t x151 = 3826;
static volatile int64_t t36 = -364878062623984LL;
int16_t x159 = 385;
uint64_t x161 = 211LLU;
int64_t x173 = -1LL;
volatile uint64_t x175 = 302466536271LLU;
int64_t t42 = -1339LL;
volatile int16_t x198 = INT16_MIN;
uint16_t x202 = 26132U;
static int32_t x204 = -1;
volatile int32_t t48 = 43251932;
uint64_t x205 = UINT64_MAX;
int16_t x208 = INT16_MIN;
volatile int32_t x216 = INT32_MIN;
volatile uint64_t t51 = 172441692LLU;
int32_t x218 = 219398;
volatile uint32_t x220 = UINT32_MAX;
static int16_t x226 = 2347;
uint64_t x230 = UINT64_MAX;
uint64_t x236 = 31227LLU;
volatile uint64_t t56 = 253207090LLU;
volatile uint16_t x238 = 2356U;
int32_t t57 = 21786;
int32_t x253 = -1996;
uint32_t t61 = 4833569U;
uint32_t x271 = UINT32_MAX;
volatile int64_t t65 = -921802453203LL;
int64_t x276 = -1LL;
volatile uint16_t x283 = UINT16_MAX;
uint32_t t69 = 16406U;
volatile int64_t t70 = -235288945296LL;
uint16_t x295 = UINT16_MAX;
static volatile int64_t x297 = INT64_MAX;
static int64_t x302 = 3984630811LL;
int32_t x304 = INT32_MIN;
volatile int8_t x308 = INT8_MIN;
uint8_t x311 = 37U;
volatile int64_t t75 = 219098266LL;
int64_t x315 = -1LL;
int32_t x316 = INT32_MAX;
uint16_t x317 = UINT16_MAX;
int8_t x321 = -5;
int32_t x323 = -1;
static uint32_t x326 = 29099516U;
int32_t x330 = -950;
static int8_t x335 = INT8_MAX;
volatile int32_t x336 = 126948;
uint8_t x342 = 59U;
int16_t x343 = -1;
uint32_t x344 = 4U;
int16_t x345 = INT16_MAX;
volatile int32_t t84 = -15;
volatile uint64_t t85 = UINT64_MAX;
static volatile int16_t x360 = INT16_MIN;
int32_t x361 = INT32_MIN;
static int32_t t88 = 2;
static int8_t x368 = 32;
static uint8_t x378 = UINT8_MAX;
uint16_t x398 = 447U;
volatile uint32_t x399 = 74297710U;
static int16_t x400 = INT16_MIN;
static int8_t x401 = -1;
int64_t x411 = -2837889140853674LL;


void f0(void) {
	volatile int16_t x5 = -1;
	int64_t x7 = -4945700109140776LL;
	volatile int64_t t0 = 326672435390574300LL;

	t0 = ((x5%(x6|x7))-x8);

	if (t0 != -32767LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x9 = 40785U;
	uint16_t x10 = 17U;
	int16_t x11 = INT16_MIN;
	volatile int64_t x12 = 687457419219LL;
	int64_t t1 = 99589640757166LL;

	t1 = ((x9%(x10|x11))-x12);

	if (t1 != -687457378434LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x13 = 3;
	static uint16_t x14 = 0U;
	int8_t x15 = -1;
	uint8_t x16 = UINT8_MAX;
	volatile int32_t t2 = -122337860;

	t2 = ((x13%(x14|x15))-x16);

	if (t2 != -255) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x17 = INT64_MIN;
	static volatile uint64_t x18 = UINT64_MAX;
	volatile int64_t x19 = INT64_MIN;
	volatile int16_t x20 = INT16_MIN;
	volatile uint64_t t3 = 3316034094927462308LLU;

	t3 = ((x17%(x18|x19))-x20);

	if (t3 != 9223372036854808576LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x21 = -1;
	static uint8_t x22 = 69U;
	int32_t x23 = -1;
	int8_t x24 = -1;
	static volatile int32_t t4 = 7104;

	t4 = ((x21%(x22|x23))-x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = UINT8_MAX;
	uint8_t x26 = 15U;
	int32_t x27 = -261091285;
	int8_t x28 = INT8_MIN;
	volatile int32_t t5 = 8;

	t5 = ((x25%(x26|x27))-x28);

	if (t5 != 383) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x29 = INT8_MIN;
	uint16_t x30 = UINT16_MAX;
	volatile uint32_t t6 = 10672U;

	t6 = ((x29%(x30|x31))-x32);

	if (t6 != 4294967169U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = INT8_MIN;
	static volatile int16_t x38 = -1;
	uint64_t x40 = 512LLU;
	uint64_t t7 = 623949196836584LLU;

	t7 = ((x37%(x38|x39))-x40);

	if (t7 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = -48;
	int16_t x42 = INT16_MIN;
	int8_t x43 = INT8_MAX;
	static uint8_t x44 = 1U;
	static volatile int32_t t8 = -66607129;

	t8 = ((x41%(x42|x43))-x44);

	if (t8 != -49) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = -1;
	uint16_t x46 = 11U;
	uint8_t x48 = UINT8_MAX;
	volatile int32_t t9 = -320125026;

	t9 = ((x45%(x46|x47))-x48);

	if (t9 != -256) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x49 = -1;
	int16_t x50 = 51;
	uint32_t x51 = UINT32_MAX;
	int16_t x52 = -8399;
	uint32_t t10 = 155608U;

	t10 = ((x49%(x50|x51))-x52);

	if (t10 != 8399U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x53 = INT32_MIN;
	int8_t x54 = 1;
	int16_t x55 = -10680;
	uint8_t x56 = 0U;

	t11 = ((x53%(x54|x55))-x56);

	if (t11 != -822) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = 6056853U;
	int64_t x58 = INT64_MIN;
	int32_t x59 = -1;
	static int64_t x60 = -87LL;
	static volatile int64_t t12 = -16314556LL;

	t12 = ((x57%(x58|x59))-x60);

	if (t12 != 87LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x61 = 3593144863465099LLU;
	uint16_t x62 = 8U;
	uint8_t x63 = 9U;
	int16_t x64 = INT16_MAX;
	volatile uint64_t t13 = 8854173351931458419LLU;

	t13 = ((x61%(x62|x63))-x64);

	if (t13 != 18446744073709518856LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x67 = 3;
	uint16_t x68 = 848U;
	int64_t t14 = -66524792478LL;

	t14 = ((x65%(x66|x67))-x68);

	if (t14 != -976LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x71 = 217;
	int64_t x72 = INT64_MIN;
	static int64_t t15 = INT64_MAX;

	t15 = ((x69%(x70|x71))-x72);

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = INT8_MAX;
	static uint8_t x74 = 5U;
	volatile uint64_t x75 = 82LLU;
	int32_t x76 = 1057335278;
	uint64_t t16 = 30604985741340LLU;

	t16 = ((x73%(x74|x75))-x76);

	if (t16 != 18446744072652216378LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MIN;
	static uint16_t x78 = UINT16_MAX;
	int32_t x79 = INT32_MIN;
	int32_t t17 = -24;

	t17 = ((x77%(x78|x79))-x80);

	if (t17 != -32767) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = -134;
	int64_t x82 = -1LL;
	static int16_t x83 = INT16_MAX;
	static int64_t t18 = -8830730745175488LL;

	t18 = ((x81%(x82|x83))-x84);

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = -22484451183518LL;
	int64_t x86 = INT64_MIN;
	static int64_t x87 = INT64_MAX;
	static int32_t x88 = 1072;
	volatile int64_t t19 = -124232965314934LL;

	t19 = ((x85%(x86|x87))-x88);

	if (t19 != -1072LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x89 = INT16_MAX;
	int32_t x90 = INT32_MIN;
	int64_t x91 = -226584479066LL;
	int64_t x92 = -3536261689770627953LL;

	t20 = ((x89%(x90|x91))-x92);

	if (t20 != 3536261689770660720LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = -15;
	uint32_t x94 = 39U;
	int8_t x95 = -57;
	volatile uint32_t t21 = 5U;

	t21 = ((x93%(x94|x95))-x96);

	if (t21 != 11U) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x97 = 0LL;
	volatile uint64_t x98 = UINT64_MAX;
	uint8_t x99 = 18U;
	int8_t x100 = INT8_MIN;
	uint64_t t22 = 58462794064254LLU;

	t22 = ((x97%(x98|x99))-x100);

	if (t22 != 128LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = INT64_MAX;
	static volatile int32_t x102 = 1304378;
	int64_t x103 = -7840407412LL;
	volatile uint64_t x104 = 203151452LLU;
	uint64_t t23 = 108553LLU;

	t23 = ((x101%(x102|x103))-x104);

	if (t23 != 5648208407LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = -5;
	static uint16_t x106 = 27U;
	int64_t x107 = -1LL;
	int16_t x108 = INT16_MIN;

	t24 = ((x105%(x106|x107))-x108);

	if (t24 != 32768LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x109 = 24U;
	volatile int8_t x110 = -1;
	static uint8_t x111 = 1U;
	int64_t x112 = -2446LL;
	volatile int64_t t25 = -11480674113080LL;

	t25 = ((x109%(x110|x111))-x112);

	if (t25 != 2446LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = INT64_MAX;
	static volatile int8_t x114 = -42;
	uint64_t x115 = 45697353224704LLU;

	t26 = ((x113%(x114|x115))-x116);

	if (t26 != 9223371851564240183LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = INT16_MIN;
	uint16_t x118 = 14601U;
	int8_t x119 = INT8_MIN;
	uint16_t x120 = UINT16_MAX;

	t27 = ((x117%(x118|x119))-x120);

	if (t27 != -65578) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x121 = 7538U;
	uint32_t x122 = 983U;
	int8_t x123 = INT8_MIN;
	volatile uint32_t t28 = 428U;

	t28 = ((x121%(x122|x123))-x124);

	if (t28 != 7666U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x126 = 3463986LLU;
	volatile uint8_t x127 = UINT8_MAX;
	static int8_t x128 = INT8_MAX;

	t29 = ((x125%(x126|x127))-x128);

	if (t29 != 924813LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x129 = 0U;
	static uint32_t x130 = 582U;
	volatile int16_t x131 = INT16_MAX;

	t30 = ((x129%(x130|x131))-x132);

	if (t30 != 18446744073709550901LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = INT32_MAX;
	int64_t x134 = 16163LL;
	int64_t x135 = INT64_MAX;
	uint16_t x136 = 4668U;

	t31 = ((x133%(x134|x135))-x136);

	if (t31 != 2147478979LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x137 = 1U;
	volatile int32_t x138 = -1;
	int64_t x140 = -1LL;

	t32 = ((x137%(x138|x139))-x140);

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x141 = UINT8_MAX;
	static int64_t x142 = INT64_MIN;
	int16_t x143 = INT16_MIN;
	static volatile int8_t x144 = INT8_MAX;
	int64_t t33 = -273774750209376LL;

	t33 = ((x141%(x142|x143))-x144);

	if (t33 != 128LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x145 = 4U;
	uint32_t x146 = UINT32_MAX;
	static int16_t x147 = INT16_MAX;
	volatile int8_t x148 = INT8_MIN;
	uint32_t t34 = 0U;

	t34 = ((x145%(x146|x147))-x148);

	if (t34 != 132U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x149 = -4;
	int64_t x150 = INT64_MIN;
	uint8_t x152 = 121U;
	static int64_t t35 = 574863130003792686LL;

	t35 = ((x149%(x150|x151))-x152);

	if (t35 != -125LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x153 = UINT8_MAX;
	volatile int32_t x154 = -10;
	int64_t x155 = -1LL;
	int8_t x156 = INT8_MAX;

	t36 = ((x153%(x154|x155))-x156);

	if (t36 != -127LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x157 = INT8_MIN;
	int64_t x158 = -1LL;
	int16_t x160 = INT16_MIN;
	int64_t t37 = -115198LL;

	t37 = ((x157%(x158|x159))-x160);

	if (t37 != 32768LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x162 = INT16_MIN;
	volatile int64_t x163 = -1LL;
	int8_t x164 = -1;
	uint64_t t38 = 11723048282183680LLU;

	t38 = ((x161%(x162|x163))-x164);

	if (t38 != 212LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x165 = UINT16_MAX;
	uint64_t x166 = 0LLU;
	int32_t x167 = INT32_MIN;
	volatile int8_t x168 = INT8_MAX;
	volatile uint64_t t39 = 25254823039665307LLU;

	t39 = ((x165%(x166|x167))-x168);

	if (t39 != 65408LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = INT16_MIN;
	uint32_t x170 = 455055294U;
	int64_t x171 = 2633545254880LL;
	static uint64_t x172 = 88743678841LLU;
	static volatile uint64_t t40 = 10028507884LLU;

	t40 = ((x169%(x170|x171))-x172);

	if (t40 != 18446743984965840007LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x174 = INT64_MIN;
	uint32_t x176 = 20278159U;
	volatile uint64_t t41 = 1301769LLU;

	t41 = ((x173%(x174|x175))-x176);

	if (t41 != 9223371734367961377LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x177 = INT64_MIN;
	int16_t x178 = 9;
	int64_t x179 = -1LL;
	static int64_t x180 = 123LL;

	t42 = ((x177%(x178|x179))-x180);

	if (t42 != -123LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x181 = UINT16_MAX;
	int64_t x182 = INT64_MAX;
	static int8_t x183 = INT8_MIN;
	static uint16_t x184 = 192U;
	int64_t t43 = 15267340LL;

	t43 = ((x181%(x182|x183))-x184);

	if (t43 != -192LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x185 = 2061526027LLU;
	int8_t x186 = 13;
	uint64_t x187 = UINT64_MAX;
	int64_t x188 = INT64_MIN;
	uint64_t t44 = 3LLU;

	t44 = ((x185%(x186|x187))-x188);

	if (t44 != 9223372038916301835LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x189 = INT8_MIN;
	uint8_t x190 = 2U;
	static uint64_t x191 = 6LLU;
	volatile int8_t x192 = -1;
	static uint64_t t45 = 108LLU;

	t45 = ((x189%(x190|x191))-x192);

	if (t45 != 3LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x193 = UINT16_MAX;
	static int8_t x194 = INT8_MIN;
	uint8_t x195 = 51U;
	volatile int8_t x196 = 0;
	int32_t t46 = -2;

	t46 = ((x193%(x194|x195))-x196);

	if (t46 != 8) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x197 = 3U;
	int64_t x199 = INT64_MAX;
	static int64_t x200 = -918198192654LL;
	volatile int64_t t47 = -3LL;

	t47 = ((x197%(x198|x199))-x200);

	if (t47 != 918198192654LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x201 = UINT16_MAX;
	int16_t x203 = -1942;

	t48 = ((x201%(x202|x203))-x204);

	if (t48 != 302) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x206 = 1131954307626LLU;
	volatile int8_t x207 = -1;
	static uint64_t t49 = 369739402629LLU;

	t49 = ((x205%(x206|x207))-x208);

	if (t49 != 32768LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x209 = 840668U;
	int64_t x210 = -90880LL;
	int32_t x211 = INT32_MIN;
	int32_t x212 = -1;
	int64_t t50 = 1LL;

	t50 = ((x209%(x210|x211))-x212);

	if (t50 != 22749LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x213 = 50U;
	uint64_t x214 = UINT64_MAX;
	static int64_t x215 = -51264LL;

	t51 = ((x213%(x214|x215))-x216);

	if (t51 != 2147483698LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint16_t x217 = 48U;
	int64_t x219 = 3120LL;
	int64_t t52 = 1252345LL;

	t52 = ((x217%(x218|x219))-x220);

	if (t52 != -4294967247LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x221 = 3U;
	volatile int64_t x222 = INT64_MAX;
	uint16_t x223 = UINT16_MAX;
	int16_t x224 = 1;
	int64_t t53 = 48LL;

	t53 = ((x221%(x222|x223))-x224);

	if (t53 != 2LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x225 = 2U;
	uint32_t x227 = 55766U;
	int32_t x228 = INT32_MIN;
	volatile uint32_t t54 = 1984U;

	t54 = ((x225%(x226|x227))-x228);

	if (t54 != 2147483650U) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x229 = -4742806191837LL;
	static volatile int16_t x231 = 7102;
	static int16_t x232 = -1;
	volatile uint64_t t55 = 97339550924LLU;

	t55 = ((x229%(x230|x231))-x232);

	if (t55 != 18446739330903359780LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x233 = UINT16_MAX;
	uint64_t x234 = 2962LLU;
	int32_t x235 = 505;

	t56 = ((x233%(x234|x235))-x236);

	if (t56 != 18446744073709521517LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x237 = UINT8_MAX;
	uint16_t x239 = 13244U;
	int16_t x240 = 367;

	t57 = ((x237%(x238|x239))-x240);

	if (t57 != -112) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x241 = 9626823595LL;
	volatile int64_t x242 = INT64_MIN;
	int16_t x243 = INT16_MIN;
	volatile int16_t x244 = -1;
	volatile int64_t t58 = -609LL;

	t58 = ((x241%(x242|x243))-x244);

	if (t58 != 11180LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x245 = INT8_MAX;
	uint8_t x246 = UINT8_MAX;
	static volatile int64_t x247 = -1LL;
	int32_t x248 = INT32_MIN;
	volatile int64_t t59 = -342LL;

	t59 = ((x245%(x246|x247))-x248);

	if (t59 != 2147483648LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x249 = INT32_MAX;
	volatile uint16_t x250 = UINT16_MAX;
	int32_t x251 = INT32_MIN;
	static uint64_t x252 = UINT64_MAX;
	volatile uint64_t t60 = 1228LLU;

	t60 = ((x249%(x250|x251))-x252);

	if (t60 != 65535LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x254 = 46231293U;
	static volatile int16_t x255 = INT16_MIN;
	uint16_t x256 = 22U;

	t61 = ((x253%(x254|x255))-x256);

	if (t61 != 2337U) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x257 = -1LL;
	int16_t x258 = 3323;
	int16_t x259 = 32;
	int64_t x260 = -36733461109LL;
	int64_t t62 = -1LL;

	t62 = ((x257%(x258|x259))-x260);

	if (t62 != 36733461108LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x261 = 238LLU;
	uint8_t x262 = 63U;
	int16_t x263 = INT16_MAX;
	volatile uint64_t x264 = 10477798883LLU;
	volatile uint64_t t63 = 13030638046360LLU;

	t63 = ((x261%(x262|x263))-x264);

	if (t63 != 18446744063231752971LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x265 = 2633U;
	int32_t x266 = -1;
	int64_t x267 = INT64_MAX;
	int16_t x268 = 1744;
	int64_t t64 = -117294628060415LL;

	t64 = ((x265%(x266|x267))-x268);

	if (t64 != -1744LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x269 = 371;
	volatile int64_t x270 = -1LL;
	int64_t x272 = -1LL;

	t65 = ((x269%(x270|x271))-x272);

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x273 = INT64_MIN;
	static int16_t x274 = INT16_MAX;
	static int64_t x275 = INT64_MIN;
	static int64_t t66 = 12903302836LL;

	t66 = ((x273%(x274|x275))-x276);

	if (t66 != -32766LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x277 = INT64_MAX;
	volatile int32_t x278 = 24174558;
	int64_t x279 = -1LL;
	volatile int32_t x280 = 62596;
	volatile int64_t t67 = -1806241158718978LL;

	t67 = ((x277%(x278|x279))-x280);

	if (t67 != -62596LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x281 = -1;
	int16_t x282 = 58;
	int64_t x284 = 64LL;
	volatile int64_t t68 = 41482353LL;

	t68 = ((x281%(x282|x283))-x284);

	if (t68 != -65LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x285 = -2;
	uint32_t x286 = 28U;
	int16_t x287 = INT16_MIN;
	int16_t x288 = -1;

	t69 = ((x285%(x286|x287))-x288);

	if (t69 != 32739U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x289 = 29U;
	static volatile int16_t x290 = INT16_MIN;
	int64_t x291 = INT64_MIN;
	static int16_t x292 = -6392;

	t70 = ((x289%(x290|x291))-x292);

	if (t70 != 6421LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x293 = 4281U;
	volatile uint64_t x294 = 2323368315017LLU;
	uint32_t x296 = 24464402U;
	static uint64_t t71 = 289376759373734107LLU;

	t71 = ((x293%(x294|x295))-x296);

	if (t71 != 18446744073685091495LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x298 = 135900041372559303LLU;
	int64_t x299 = -1LL;
	volatile int16_t x300 = INT16_MIN;
	static volatile uint64_t t72 = 62315390317312LLU;

	t72 = ((x297%(x298|x299))-x300);

	if (t72 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x301 = INT64_MAX;
	static int64_t x303 = INT64_MIN;
	static volatile int64_t t73 = -1027928LL;

	t73 = ((x301%(x302|x303))-x304);

	if (t73 != 6132114458LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x305 = -1;
	static int8_t x306 = -1;
	static int8_t x307 = INT8_MAX;
	int32_t t74 = 8268634;

	t74 = ((x305%(x306|x307))-x308);

	if (t74 != 128) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = 38982LL;
	uint32_t x310 = UINT32_MAX;
	int8_t x312 = 1;

	t75 = ((x309%(x310|x311))-x312);

	if (t75 != 38981LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x313 = UINT32_MAX;
	int64_t x314 = 193673636147225540LL;
	static int64_t t76 = 457512LL;

	t76 = ((x313%(x314|x315))-x316);

	if (t76 != -2147483647LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x318 = INT16_MAX;
	int8_t x319 = INT8_MIN;
	int16_t x320 = -2;
	static volatile int32_t t77 = 146;

	t77 = ((x317%(x318|x319))-x320);

	if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x322 = INT64_MIN;
	uint8_t x324 = 65U;
	volatile int64_t t78 = 5LL;

	t78 = ((x321%(x322|x323))-x324);

	if (t78 != -65LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x325 = INT64_MIN;
	uint8_t x327 = 109U;
	int16_t x328 = -2;
	volatile int64_t t79 = 172643LL;

	t79 = ((x325%(x326|x327))-x328);

	if (t79 != -27028455LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x329 = INT8_MAX;
	int8_t x331 = -38;
	static int8_t x332 = 31;
	static volatile int32_t t80 = -864199;

	t80 = ((x329%(x330|x331))-x332);

	if (t80 != -18) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x333 = 11;
	int16_t x334 = INT16_MIN;
	static int32_t t81 = -1;

	t81 = ((x333%(x334|x335))-x336);

	if (t81 != -126937) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x337 = -1;
	int64_t x338 = INT64_MIN;
	int16_t x339 = 5;
	int8_t x340 = -1;
	volatile int64_t t82 = -2058398597910851755LL;

	t82 = ((x337%(x338|x339))-x340);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x341 = INT32_MAX;
	uint32_t t83 = 22863U;

	t83 = ((x341%(x342|x343))-x344);

	if (t83 != 4294967292U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x346 = -2390;
	volatile int8_t x347 = -1;
	int8_t x348 = -61;

	t84 = ((x345%(x346|x347))-x348);

	if (t84 != 61) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x349 = INT64_MAX;
	uint64_t x350 = 86374281235LLU;
	static int64_t x351 = INT64_MIN;
	volatile int64_t x352 = INT64_MIN;

	t85 = ((x349%(x350|x351))-x352);

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x353 = UINT8_MAX;
	static int64_t x354 = 2432088LL;
	static int64_t x355 = INT64_MAX;
	volatile uint32_t x356 = 16730505U;
	static volatile int64_t t86 = 3077LL;

	t86 = ((x353%(x354|x355))-x356);

	if (t86 != -16730250LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x357 = UINT8_MAX;
	static uint64_t x358 = 278553117169LLU;
	uint64_t x359 = 46857044401721LLU;
	volatile uint64_t t87 = 70098326LLU;

	t87 = ((x357%(x358|x359))-x360);

	if (t87 != 33023LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x362 = 8U;
	static int32_t x363 = -1;
	static int32_t x364 = 471079956;

	t88 = ((x361%(x362|x363))-x364);

	if (t88 != -471079956) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x365 = INT64_MIN;
	static int8_t x366 = -1;
	int16_t x367 = -1;
	int64_t t89 = 21944LL;

	t89 = ((x365%(x366|x367))-x368);

	if (t89 != -32LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x369 = INT8_MIN;
	int16_t x370 = 13;
	int16_t x371 = 30;
	static volatile int8_t x372 = INT8_MAX;
	volatile int32_t t90 = 443569;

	t90 = ((x369%(x370|x371))-x372);

	if (t90 != -131) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x373 = 42U;
	int16_t x374 = INT16_MIN;
	int16_t x375 = INT16_MIN;
	volatile uint64_t x376 = 5892770952LLU;
	uint64_t t91 = 7342395663371671LLU;

	t91 = ((x373%(x374|x375))-x376);

	if (t91 != 18446744067816780706LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x377 = 223LLU;
	int8_t x379 = -1;
	volatile uint32_t x380 = 47U;
	static volatile uint64_t t92 = 11852949LLU;

	t92 = ((x377%(x378|x379))-x380);

	if (t92 != 176LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x381 = 0;
	static int32_t x382 = 40178;
	int32_t x383 = -3;
	uint16_t x384 = 1492U;
	int32_t t93 = 1;

	t93 = ((x381%(x382|x383))-x384);

	if (t93 != -1492) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x385 = INT32_MIN;
	uint16_t x386 = UINT16_MAX;
	uint64_t x387 = 0LLU;
	int16_t x388 = INT16_MIN;
	uint64_t t94 = 16308164LLU;

	t94 = ((x385%(x386|x387))-x388);

	if (t94 != 65536LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x389 = UINT16_MAX;
	int8_t x390 = INT8_MIN;
	volatile int64_t x391 = 1LL;
	uint64_t x392 = 133266506LLU;
	static uint64_t t95 = 5516LLU;

	t95 = ((x389%(x390|x391))-x392);

	if (t95 != 18446744073576285113LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x397 = -1;
	uint32_t t96 = 8700U;

	t96 = ((x397%(x398|x399))-x400);

	if (t96 != 60022328U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x402 = 24U;
	uint16_t x403 = UINT16_MAX;
	uint64_t x404 = UINT64_MAX;
	volatile uint64_t t97 = 30027922570295LLU;

	t97 = ((x401%(x402|x403))-x404);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x405 = 4972074142887890LLU;
	static int32_t x406 = INT32_MIN;
	int8_t x407 = 31;
	uint16_t x408 = 251U;
	volatile uint64_t t98 = 1255996273220634563LLU;

	t98 = ((x405%(x406|x407))-x408);

	if (t98 != 4972074142887639LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x409 = INT16_MAX;
	static int16_t x410 = INT16_MIN;
	volatile uint16_t x412 = 2656U;
	static volatile int64_t t99 = -8128200605325407LL;

	t99 = ((x409%(x410|x411))-x412);

	if (t99 != 251LL) { NG(); } else { ; }
	
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

