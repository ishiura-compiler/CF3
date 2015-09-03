#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t t1 = 12205U;
static int64_t t2 = 63LL;
volatile uint16_t x13 = 1U;
int64_t x27 = 73292939LL;
volatile uint32_t x44 = UINT32_MAX;
uint32_t t7 = 6976U;
volatile int32_t x52 = INT32_MIN;
static volatile uint32_t t9 = 474253865U;
uint64_t x59 = UINT64_MAX;
uint32_t x63 = UINT32_MAX;
uint64_t x65 = UINT64_MAX;
int8_t x75 = -15;
static int32_t x81 = INT32_MIN;
int8_t x85 = INT8_MAX;
static int8_t x95 = 2;
volatile int64_t x108 = -1LL;
volatile uint64_t t21 = 3581701308745352367LLU;
volatile int64_t t22 = 1216376574470LL;
volatile int64_t t23 = 341891802023LL;
volatile uint32_t t24 = 1786861U;
volatile uint16_t x130 = UINT16_MAX;
uint32_t x133 = 2668159U;
int16_t x138 = INT16_MAX;
uint8_t x140 = UINT8_MAX;
int8_t x147 = INT8_MIN;
static int64_t x155 = -1LL;
uint16_t x161 = 1645U;
volatile int64_t t33 = 1LL;
int64_t t34 = -14364LL;
static volatile int32_t x182 = INT32_MIN;
volatile uint32_t x183 = 734300377U;
volatile int8_t x188 = 54;
int16_t x189 = -9;
uint64_t t42 = 2845269145LLU;
int16_t x208 = 6;
static int16_t x210 = -1;
int32_t x218 = -3;
int32_t x232 = 143440870;
static int32_t x239 = INT32_MAX;
volatile int32_t x240 = INT32_MIN;
static volatile uint8_t x246 = 2U;
uint32_t x256 = UINT32_MAX;
int32_t x266 = INT32_MAX;
uint32_t x269 = UINT32_MAX;
int16_t x272 = -1;
volatile int64_t t56 = -102LL;
static volatile uint64_t t57 = 3989274060LLU;
int32_t x282 = INT32_MAX;
uint64_t x285 = UINT64_MAX;
static int64_t x286 = -1211025LL;
uint64_t x288 = 43968265596226444LLU;
uint16_t x290 = 27U;
static volatile int8_t x294 = -1;
int16_t x299 = -1;
uint32_t t62 = 0U;
static uint32_t t63 = 274336949U;
static int32_t x307 = 7334327;
static uint16_t x310 = 1U;
uint64_t t65 = 117268076453596LLU;
int16_t x314 = -1;
int32_t x320 = 225945880;
volatile uint32_t t68 = 3U;
uint32_t x329 = 191329557U;
volatile int8_t x334 = INT8_MAX;
volatile int8_t x339 = INT8_MIN;
uint32_t x340 = 404821754U;
static int64_t x344 = INT64_MIN;
volatile uint64_t t72 = 898069979440LLU;
volatile int32_t x350 = -1839953;
static uint64_t x360 = 82LLU;
volatile uint64_t t75 = 7047LLU;
volatile uint64_t t76 = 18717975996309274LLU;
volatile uint32_t t78 = 35U;
volatile int64_t t81 = -19442779657138075LL;
static uint64_t t82 = 1785763831LLU;
volatile uint16_t x417 = 1629U;
volatile int32_t t86 = 0;
uint32_t x422 = UINT32_MAX;
volatile int32_t x423 = INT32_MAX;
uint32_t x427 = UINT32_MAX;
static volatile uint32_t x446 = 7573U;
int64_t x455 = 2LL;
volatile uint64_t x457 = 15210955367688972LLU;
uint64_t t95 = 1307LLU;
volatile int16_t x464 = -1;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int32_t x2 = 20620;
	static int64_t x3 = -956488697572998780LL;
	int16_t x4 = -62;
	volatile int64_t t0 = 101842105LL;

	t0 = ((x1*(x2&x3))-x4);

	if (t0 != -35467839930306LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x5 = 957;
	static uint32_t x6 = 8012112U;
	static int32_t x7 = -8561;
	volatile uint8_t x8 = 10U;

	t1 = ((x5*(x6&x7))-x8);

	if (t1 != 3372302326U) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = 14728705LL;
	int16_t x10 = -1;
	volatile int16_t x11 = INT16_MAX;
	int32_t x12 = -3;

	t2 = ((x9*(x10&x11))-x12);

	if (t2 != 482615476738LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = INT8_MIN;
	uint32_t x15 = UINT32_MAX;
	volatile int32_t x16 = INT32_MAX;
	uint32_t t3 = 2128548U;

	t3 = ((x13*(x14&x15))-x16);

	if (t3 != 2147483521U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	uint64_t x18 = 2269234LLU;
	int32_t x19 = 19433141;
	volatile int16_t x20 = -7;
	volatile uint64_t t4 = 138717011812006699LLU;

	t4 = ((x17*(x18&x19))-x20);

	if (t4 != 18446744073707421655LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 32991731463LLU;
	volatile int16_t x26 = INT16_MAX;
	static uint64_t x28 = UINT64_MAX;
	volatile uint64_t t5 = 107907099307988306LLU;

	t5 = ((x25*(x26&x27))-x28);

	if (t5 != 781607110089934LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -1;
	volatile uint32_t x30 = UINT32_MAX;
	static int16_t x31 = INT16_MIN;
	static uint64_t x32 = 5LLU;
	static uint64_t t6 = 888564222LLU;

	t6 = ((x29*(x30&x31))-x32);

	if (t6 != 32763LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x41 = -629;
	int8_t x42 = 1;
	int8_t x43 = 0;

	t7 = ((x41*(x42&x43))-x44);

	if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x45 = UINT64_MAX;
	static int64_t x46 = 155634897560501LL;
	int8_t x47 = INT8_MIN;
	int32_t x48 = INT32_MIN;
	volatile uint64_t t8 = 7173408357715709LLU;

	t8 = ((x45*(x46&x47))-x48);

	if (t8 != 18446588440959474816LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x49 = INT32_MIN;
	int8_t x50 = -1;
	uint32_t x51 = 22U;

	t9 = ((x49*(x50&x51))-x52);

	if (t9 != 2147483648U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x57 = -1161;
	uint32_t x58 = UINT32_MAX;
	int8_t x60 = -1;
	uint64_t t10 = 38467212947988335LLU;

	t10 = ((x57*(x58&x59))-x60);

	if (t10 != 18446739087252522122LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x61 = INT8_MIN;
	int8_t x62 = -12;
	int8_t x64 = INT8_MIN;
	volatile uint32_t t11 = 55098U;

	t11 = ((x61*(x62&x63))-x64);

	if (t11 != 1664U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x66 = INT32_MIN;
	int32_t x67 = INT32_MIN;
	static int8_t x68 = INT8_MAX;
	volatile uint64_t t12 = 7167LLU;

	t12 = ((x65*(x66&x67))-x68);

	if (t12 != 2147483521LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x69 = INT32_MIN;
	int8_t x70 = INT8_MIN;
	static volatile uint64_t x71 = UINT64_MAX;
	volatile int64_t x72 = INT64_MAX;
	static uint64_t t13 = 7990097762LLU;

	t13 = ((x69*(x70&x71))-x72);

	if (t13 != 9223372311732682753LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x73 = UINT32_MAX;
	static int32_t x74 = INT32_MIN;
	int8_t x76 = INT8_MIN;
	volatile uint32_t t14 = 276061U;

	t14 = ((x73*(x74&x75))-x76);

	if (t14 != 2147483776U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x82 = INT8_MAX;
	int16_t x83 = INT16_MIN;
	volatile uint16_t x84 = 10U;
	volatile int32_t t15 = 45305494;

	t15 = ((x81*(x82&x83))-x84);

	if (t15 != -10) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x86 = 45;
	uint32_t x87 = UINT32_MAX;
	volatile uint32_t x88 = 3536579U;
	uint32_t t16 = 0U;

	t16 = ((x85*(x86&x87))-x88);

	if (t16 != 4291436432U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x93 = INT16_MIN;
	static int32_t x94 = INT32_MAX;
	int32_t x96 = 244970893;
	volatile int32_t t17 = 3;

	t17 = ((x93*(x94&x95))-x96);

	if (t17 != -245036429) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x97 = 126LL;
	volatile uint8_t x98 = UINT8_MAX;
	volatile int32_t x99 = INT32_MIN;
	uint32_t x100 = 144880U;
	int64_t t18 = 123661783939LL;

	t18 = ((x97*(x98&x99))-x100);

	if (t18 != -144880LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x101 = 40U;
	int64_t x102 = -1LL;
	int16_t x103 = 51;
	int16_t x104 = INT16_MAX;
	volatile int64_t t19 = 8989013LL;

	t19 = ((x101*(x102&x103))-x104);

	if (t19 != -30727LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x105 = INT64_MAX;
	volatile uint32_t x106 = 0U;
	int32_t x107 = -2806358;
	int64_t t20 = -116407268320LL;

	t20 = ((x105*(x106&x107))-x108);

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x109 = 372LLU;
	int8_t x110 = -1;
	int16_t x111 = INT16_MAX;
	int16_t x112 = 2465;

	t21 = ((x109*(x110&x111))-x112);

	if (t21 != 12186859LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x113 = 0;
	int8_t x114 = 2;
	int16_t x115 = 580;
	int64_t x116 = -1819604494058266332LL;

	t22 = ((x113*(x114&x115))-x116);

	if (t22 != 1819604494058266332LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x117 = INT16_MIN;
	static uint8_t x118 = UINT8_MAX;
	int64_t x119 = -12499LL;
	uint8_t x120 = 32U;

	t23 = ((x117*(x118&x119))-x120);

	if (t23 != -1474592LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x121 = INT32_MIN;
	static volatile uint16_t x122 = 20U;
	uint32_t x123 = UINT32_MAX;
	static int32_t x124 = 36595;

	t24 = ((x121*(x122&x123))-x124);

	if (t24 != 4294930701U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x125 = -1;
	uint64_t x126 = UINT64_MAX;
	static int16_t x127 = INT16_MIN;
	uint32_t x128 = 29304902U;
	volatile uint64_t t25 = 90572LLU;

	t25 = ((x125*(x126&x127))-x128);

	if (t25 != 18446744073680279482LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x129 = UINT64_MAX;
	volatile int8_t x131 = -11;
	uint32_t x132 = 75U;
	volatile uint64_t t26 = 10478459275523LLU;

	t26 = ((x129*(x130&x131))-x132);

	if (t26 != 18446744073709486016LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x134 = INT8_MIN;
	int16_t x135 = INT16_MIN;
	int64_t x136 = INT64_MAX;
	static volatile int64_t t27 = -151230LL;

	t27 = ((x133*(x134&x135))-x136);

	if (t27 != -9223372034090696703LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x137 = 0LLU;
	int8_t x139 = -50;
	uint64_t t28 = 911186432780372663LLU;

	t28 = ((x137*(x138&x139))-x140);

	if (t28 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x141 = -11506;
	static int16_t x142 = -1;
	static int16_t x143 = INT16_MAX;
	int8_t x144 = -50;
	volatile int32_t t29 = 42635;

	t29 = ((x141*(x142&x143))-x144);

	if (t29 != -377017052) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x145 = UINT16_MAX;
	volatile uint32_t x146 = 246282U;
	int8_t x148 = -1;
	uint32_t t30 = 15986855U;

	t30 = ((x145*(x146&x147))-x148);

	if (t30 != 3254533633U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x149 = 660U;
	int16_t x150 = -1;
	int16_t x151 = INT16_MIN;
	int8_t x152 = -14;
	int32_t t31 = 1654;

	t31 = ((x149*(x150&x151))-x152);

	if (t31 != -21626866) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x153 = INT16_MAX;
	volatile int16_t x154 = 1577;
	uint16_t x156 = 2U;
	int64_t t32 = 1787334LL;

	t32 = ((x153*(x154&x155))-x156);

	if (t32 != 51673557LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x162 = INT64_MAX;
	int64_t x163 = 25852163551LL;
	int64_t x164 = -26606LL;

	t33 = ((x161*(x162&x163))-x164);

	if (t33 != 42526809068001LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x165 = UINT32_MAX;
	uint32_t x166 = 41U;
	static uint8_t x167 = 14U;
	int64_t x168 = -1LL;

	t34 = ((x165*(x166&x167))-x168);

	if (t34 != 4294967289LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x173 = 2504;
	int8_t x174 = 1;
	volatile uint64_t x175 = 1LLU;
	int64_t x176 = 21711LL;
	static volatile uint64_t t35 = 9984729047538LLU;

	t35 = ((x173*(x174&x175))-x176);

	if (t35 != 18446744073709532409LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x177 = INT16_MIN;
	int32_t x178 = -1;
	uint32_t x179 = UINT32_MAX;
	static int8_t x180 = INT8_MAX;
	uint32_t t36 = 4U;

	t36 = ((x177*(x178&x179))-x180);

	if (t36 != 32641U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x181 = 56;
	int32_t x184 = INT32_MIN;
	volatile uint32_t t37 = 1862U;

	t37 = ((x181*(x182&x183))-x184);

	if (t37 != 2147483648U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x185 = -1;
	int32_t x186 = -52666153;
	int8_t x187 = INT8_MIN;
	volatile int32_t t38 = -250375937;

	t38 = ((x185*(x186&x187))-x188);

	if (t38 != 52666186) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x190 = 1U;
	volatile int8_t x191 = 49;
	static volatile int64_t x192 = -30382838LL;
	static volatile int64_t t39 = 1808778596LL;

	t39 = ((x189*(x190&x191))-x192);

	if (t39 != 30382829LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x193 = UINT32_MAX;
	uint16_t x194 = UINT16_MAX;
	int16_t x195 = -1;
	int8_t x196 = -1;
	volatile uint32_t t40 = 22328237U;

	t40 = ((x193*(x194&x195))-x196);

	if (t40 != 4294901762U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x197 = -1;
	uint64_t x198 = UINT64_MAX;
	uint8_t x199 = UINT8_MAX;
	volatile uint8_t x200 = UINT8_MAX;
	uint64_t t41 = 22051059223478LLU;

	t41 = ((x197*(x198&x199))-x200);

	if (t41 != 18446744073709551106LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x201 = 586012881LL;
	volatile uint64_t x202 = 434012293874017311LLU;
	static volatile uint64_t x203 = UINT64_MAX;
	uint64_t x204 = UINT64_MAX;

	t42 = ((x201*(x202&x203))-x204);

	if (t42 != 4963251878863430992LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x205 = INT16_MIN;
	static uint16_t x206 = 31U;
	int8_t x207 = -1;
	int32_t t43 = -14649376;

	t43 = ((x205*(x206&x207))-x208);

	if (t43 != -1015814) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x209 = 25U;
	static int8_t x211 = -12;
	volatile uint32_t x212 = 66912U;
	uint32_t t44 = 803522805U;

	t44 = ((x209*(x210&x211))-x212);

	if (t44 != 4294900084U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x217 = INT8_MIN;
	uint8_t x219 = 0U;
	uint32_t x220 = 7U;
	volatile uint32_t t45 = 3519630U;

	t45 = ((x217*(x218&x219))-x220);

	if (t45 != 4294967289U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x225 = -12479;
	int16_t x226 = INT16_MAX;
	int64_t x227 = -1LL;
	volatile uint64_t x228 = 2022568902953LLU;
	volatile uint64_t t46 = 5624681619LLU;

	t46 = ((x225*(x226&x227))-x228);

	if (t46 != 18446742050731749270LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x229 = -1;
	int16_t x230 = INT16_MAX;
	uint16_t x231 = 282U;
	int32_t t47 = -29729;

	t47 = ((x229*(x230&x231))-x232);

	if (t47 != -143441152) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x237 = INT16_MIN;
	static uint8_t x238 = UINT8_MAX;
	int32_t t48 = 1287;

	t48 = ((x237*(x238&x239))-x240);

	if (t48 != 2139127808) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x241 = -1;
	uint64_t x242 = UINT64_MAX;
	static int8_t x243 = 1;
	volatile int64_t x244 = INT64_MIN;
	volatile uint64_t t49 = 1090552367LLU;

	t49 = ((x241*(x242&x243))-x244);

	if (t49 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x245 = 20742LLU;
	uint32_t x247 = UINT32_MAX;
	int16_t x248 = INT16_MAX;
	volatile uint64_t t50 = 847084958383584LLU;

	t50 = ((x245*(x246&x247))-x248);

	if (t50 != 8717LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x249 = 2U;
	int32_t x250 = INT32_MIN;
	int32_t x251 = 7290;
	static int8_t x252 = INT8_MIN;
	uint32_t t51 = 17323U;

	t51 = ((x249*(x250&x251))-x252);

	if (t51 != 128U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x253 = -1;
	int8_t x254 = 4;
	int32_t x255 = INT32_MIN;
	volatile uint32_t t52 = 26422337U;

	t52 = ((x253*(x254&x255))-x256);

	if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x261 = 16868628U;
	int16_t x262 = -1;
	uint64_t x263 = UINT64_MAX;
	int64_t x264 = 3389097316358931LL;
	static uint64_t t53 = 713LLU;

	t53 = ((x261*(x262&x263))-x264);

	if (t53 != 18443354976376324057LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x265 = -1;
	int64_t x267 = -322378663LL;
	volatile uint32_t x268 = 3U;
	volatile int64_t t54 = 2460105598LL;

	t54 = ((x265*(x266&x267))-x268);

	if (t54 != -1825104988LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x270 = 1593616854155560LLU;
	int64_t x271 = INT64_MIN;
	static volatile uint64_t t55 = 127384250497LLU;

	t55 = ((x269*(x270&x271))-x272);

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x273 = UINT16_MAX;
	volatile int64_t x274 = INT64_MAX;
	uint16_t x275 = UINT16_MAX;
	uint8_t x276 = 49U;

	t56 = ((x273*(x274&x275))-x276);

	if (t56 != 4294836176LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x277 = 258846467744LLU;
	int16_t x278 = 1735;
	uint16_t x279 = UINT16_MAX;
	int16_t x280 = INT16_MAX;

	t57 = ((x277*(x278&x279))-x280);

	if (t57 != 449098621503073LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x281 = INT8_MIN;
	int64_t x283 = INT64_MAX;
	volatile int8_t x284 = INT8_MIN;
	static volatile int64_t t58 = -1103146921179896LL;

	t58 = ((x281*(x282&x283))-x284);

	if (t58 != -274877906688LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x287 = 1763954LLU;
	volatile uint64_t t59 = 1551LLU;

	t59 = ((x285*(x286&x287))-x288);

	if (t59 != 18402775808112768018LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x289 = -1;
	int16_t x291 = 3202;
	static int32_t x292 = INT32_MIN;
	static volatile int32_t t60 = 537512455;

	t60 = ((x289*(x290&x291))-x292);

	if (t60 != 2147483646) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x293 = UINT64_MAX;
	int8_t x295 = INT8_MAX;
	volatile uint32_t x296 = UINT32_MAX;
	static uint64_t t61 = 1193915762225564721LLU;

	t61 = ((x293*(x294&x295))-x296);

	if (t61 != 18446744069414584194LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x297 = 27U;
	uint8_t x298 = UINT8_MAX;
	static uint8_t x300 = UINT8_MAX;

	t62 = ((x297*(x298&x299))-x300);

	if (t62 != 6630U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x301 = -1;
	int16_t x302 = 5;
	int32_t x303 = INT32_MIN;
	uint32_t x304 = 500U;

	t63 = ((x301*(x302&x303))-x304);

	if (t63 != 4294966796U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x305 = 53U;
	uint8_t x306 = UINT8_MAX;
	int8_t x308 = INT8_MAX;
	int32_t t64 = -36083096;

	t64 = ((x305*(x306&x307))-x308);

	if (t64 != 9572) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x309 = UINT64_MAX;
	int64_t x311 = 7679933LL;
	int32_t x312 = -1418;

	t65 = ((x309*(x310&x311))-x312);

	if (t65 != 1417LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x313 = 0;
	volatile int64_t x315 = INT64_MAX;
	int64_t x316 = -1LL;
	volatile int64_t t66 = 11105306091045026LL;

	t66 = ((x313*(x314&x315))-x316);

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x317 = INT64_MIN;
	int64_t x318 = INT64_MIN;
	uint64_t x319 = 17211LLU;
	volatile uint64_t t67 = 21LLU;

	t67 = ((x317*(x318&x319))-x320);

	if (t67 != 18446744073483605736LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x321 = 0U;
	uint16_t x322 = 936U;
	static uint32_t x323 = 1810316438U;
	uint8_t x324 = UINT8_MAX;

	t68 = ((x321*(x322&x323))-x324);

	if (t68 != 4294967041U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x330 = 2U;
	uint16_t x331 = UINT16_MAX;
	int8_t x332 = -5;
	uint32_t t69 = 76U;

	t69 = ((x329*(x330&x331))-x332);

	if (t69 != 382659119U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x333 = -1;
	volatile int64_t x335 = INT64_MAX;
	int64_t x336 = -1754454002LL;
	static volatile int64_t t70 = -17735654921208932LL;

	t70 = ((x333*(x334&x335))-x336);

	if (t70 != 1754453875LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x337 = INT16_MIN;
	int32_t x338 = 1;
	volatile uint32_t t71 = 111179249U;

	t71 = ((x337*(x338&x339))-x340);

	if (t71 != 3890145542U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x341 = INT32_MIN;
	int16_t x342 = -1;
	uint64_t x343 = UINT64_MAX;

	t72 = ((x341*(x342&x343))-x344);

	if (t72 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x349 = -36;
	int8_t x351 = -1;
	static uint8_t x352 = 2U;
	volatile int32_t t73 = -177453593;

	t73 = ((x349*(x350&x351))-x352);

	if (t73 != 66238306) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x353 = UINT64_MAX;
	int64_t x354 = -1LL;
	int64_t x355 = INT64_MIN;
	int8_t x356 = INT8_MIN;
	volatile uint64_t t74 = 12348506186311064LLU;

	t74 = ((x353*(x354&x355))-x356);

	if (t74 != 9223372036854775936LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x357 = INT8_MAX;
	volatile int8_t x358 = 51;
	uint64_t x359 = 998341LLU;

	t75 = ((x357*(x358&x359))-x360);

	if (t75 != 45LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x361 = -3;
	int32_t x362 = -27334642;
	uint64_t x363 = UINT64_MAX;
	int8_t x364 = -1;

	t76 = ((x361*(x362&x363))-x364);

	if (t76 != 82003927LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x365 = UINT32_MAX;
	int32_t x366 = INT32_MIN;
	volatile int64_t x367 = -1LL;
	int64_t x368 = -1LL;
	static volatile int64_t t77 = -377715491809LL;

	t77 = ((x365*(x366&x367))-x368);

	if (t77 != -9223372034707292159LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x369 = INT32_MIN;
	int32_t x370 = INT32_MIN;
	uint32_t x371 = 15789695U;
	int8_t x372 = INT8_MAX;

	t78 = ((x369*(x370&x371))-x372);

	if (t78 != 4294967169U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x373 = 1468585258LL;
	static uint32_t x374 = 534998U;
	int64_t x375 = INT64_MIN;
	int32_t x376 = INT32_MAX;
	int64_t t79 = 11732851LL;

	t79 = ((x373*(x374&x375))-x376);

	if (t79 != -2147483647LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x377 = -1;
	uint16_t x378 = 267U;
	uint32_t x379 = 37453000U;
	static int16_t x380 = 1987;
	uint32_t t80 = 786047U;

	t80 = ((x377*(x378&x379))-x380);

	if (t80 != 4294965301U) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x389 = 1LL;
	volatile int16_t x390 = INT16_MIN;
	uint8_t x391 = 3U;
	volatile int16_t x392 = INT16_MIN;

	t81 = ((x389*(x390&x391))-x392);

	if (t81 != 32768LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x401 = INT8_MIN;
	volatile int32_t x402 = -1;
	int64_t x403 = -1LL;
	static uint64_t x404 = UINT64_MAX;

	t82 = ((x401*(x402&x403))-x404);

	if (t82 != 129LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x405 = 111U;
	uint16_t x406 = 283U;
	int32_t x407 = -5098177;
	static int16_t x408 = -1;
	int32_t t83 = 52227454;

	t83 = ((x405*(x406&x407))-x408);

	if (t83 != 31414) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x409 = INT8_MAX;
	uint16_t x410 = 1708U;
	volatile int64_t x411 = INT64_MIN;
	volatile int8_t x412 = INT8_MAX;
	volatile int64_t t84 = -866510477598099197LL;

	t84 = ((x409*(x410&x411))-x412);

	if (t84 != -127LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x413 = 1579U;
	int64_t x414 = -1LL;
	static uint16_t x415 = UINT16_MAX;
	volatile int64_t x416 = -1LL;
	volatile int64_t t85 = -5LL;

	t85 = ((x413*(x414&x415))-x416);

	if (t85 != 103479766LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x418 = INT8_MAX;
	static volatile int16_t x419 = INT16_MAX;
	volatile uint8_t x420 = UINT8_MAX;

	t86 = ((x417*(x418&x419))-x420);

	if (t86 != 206628) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x421 = 5U;
	uint64_t x424 = 933902398438LLU;
	volatile uint64_t t87 = 454697821402377850LLU;

	t87 = ((x421*(x422&x423))-x424);

	if (t87 != 18446743141954636821LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x425 = UINT32_MAX;
	static uint16_t x426 = 661U;
	int64_t x428 = INT64_MAX;
	static int64_t t88 = -9855089622LL;

	t88 = ((x425*(x426&x427))-x428);

	if (t88 != -9223372032559809172LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x429 = INT16_MAX;
	uint64_t x430 = 2597465735LLU;
	int64_t x431 = INT64_MIN;
	int16_t x432 = INT16_MIN;
	uint64_t t89 = 1237751027044101128LLU;

	t89 = ((x429*(x430&x431))-x432);

	if (t89 != 32768LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x437 = -1;
	int8_t x438 = INT8_MAX;
	volatile int32_t x439 = INT32_MAX;
	static int8_t x440 = -39;
	volatile int32_t t90 = 11696829;

	t90 = ((x437*(x438&x439))-x440);

	if (t90 != -88) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x441 = -1;
	static volatile uint64_t x442 = 304958308LLU;
	uint8_t x443 = 1U;
	int8_t x444 = -1;
	volatile uint64_t t91 = 747490996773109LLU;

	t91 = ((x441*(x442&x443))-x444);

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x445 = UINT64_MAX;
	int8_t x447 = -1;
	volatile uint8_t x448 = UINT8_MAX;
	volatile uint64_t t92 = 2097272537837LLU;

	t92 = ((x445*(x446&x447))-x448);

	if (t92 != 18446744073709543788LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x449 = INT32_MIN;
	volatile int16_t x450 = INT16_MIN;
	uint16_t x451 = 750U;
	uint64_t x452 = 13LLU;
	uint64_t t93 = 3035912097256632210LLU;

	t93 = ((x449*(x450&x451))-x452);

	if (t93 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x453 = UINT8_MAX;
	int64_t x454 = 8883LL;
	uint8_t x456 = 96U;
	int64_t t94 = 5256LL;

	t94 = ((x453*(x454&x455))-x456);

	if (t94 != 414LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x458 = 4737719798347528761LLU;
	int64_t x459 = INT64_MIN;
	uint64_t x460 = 14LLU;

	t95 = ((x457*(x458&x459))-x460);

	if (t95 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x461 = 12090LLU;
	int8_t x462 = INT8_MIN;
	int32_t x463 = 1988;
	volatile uint64_t t96 = 1925232859809811LLU;

	t96 = ((x461*(x462&x463))-x464);

	if (t96 != 23212801LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x469 = -1LL;
	uint64_t x470 = UINT64_MAX;
	uint16_t x471 = 1U;
	static volatile uint32_t x472 = UINT32_MAX;
	static volatile uint64_t t97 = 118236149LLU;

	t97 = ((x469*(x470&x471))-x472);

	if (t97 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x473 = -16798774748147LL;
	int8_t x474 = 9;
	uint16_t x475 = 31879U;
	static int32_t x476 = INT32_MIN;
	static volatile int64_t t98 = -2LL;

	t98 = ((x473*(x474&x475))-x476);

	if (t98 != -16796627264499LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x477 = 1663793668LLU;
	int8_t x478 = INT8_MIN;
	uint8_t x479 = 97U;
	int8_t x480 = INT8_MIN;
	volatile uint64_t t99 = 534398LLU;

	t99 = ((x477*(x478&x479))-x480);

	if (t99 != 128LLU) { NG(); } else { ; }
	
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

