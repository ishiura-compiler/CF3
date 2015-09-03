#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -2887090719151095241LL;
int16_t x15 = -1;
int32_t t3 = -672;
int8_t x20 = -1;
int32_t x22 = -1;
static int16_t x24 = -1;
volatile uint32_t x29 = 0U;
uint16_t x32 = 123U;
int32_t t8 = -194498923;
static int64_t x38 = INT64_MAX;
int32_t x41 = 11;
int16_t x42 = -1;
int64_t x49 = INT64_MAX;
uint8_t x58 = UINT8_MAX;
volatile uint32_t x59 = 0U;
int32_t t14 = 1;
uint16_t x62 = 0U;
volatile int32_t t15 = -41;
volatile uint64_t x65 = UINT64_MAX;
uint8_t x71 = 39U;
int32_t x74 = INT32_MAX;
int32_t x77 = INT32_MIN;
int32_t x87 = 760549;
int32_t x91 = -1;
volatile int32_t t23 = 1872781;
uint64_t x97 = UINT64_MAX;
int16_t x99 = 696;
volatile int32_t t24 = -7474;
int16_t x105 = INT16_MAX;
int16_t x110 = -7456;
int16_t x111 = INT16_MAX;
int64_t x117 = INT64_MIN;
int8_t x128 = -1;
volatile int32_t t32 = 11371860;
volatile uint8_t x133 = UINT8_MAX;
uint64_t x135 = 515460057287LLU;
int8_t x139 = 63;
volatile uint16_t x144 = 14U;
static volatile int32_t t35 = 709618188;
int64_t x148 = INT64_MIN;
uint64_t x149 = 29638LLU;
uint64_t x156 = UINT64_MAX;
volatile int32_t t38 = -80451547;
int32_t t39 = 0;
volatile uint32_t x162 = 19U;
int16_t x163 = 0;
volatile int8_t x172 = 2;
volatile int32_t t43 = -936818255;
volatile int32_t x177 = INT32_MIN;
static uint16_t x184 = 53U;
uint32_t x194 = 937U;
uint32_t x206 = UINT32_MAX;
uint64_t x207 = UINT64_MAX;
volatile int8_t x209 = INT8_MAX;
volatile int32_t x212 = INT32_MIN;
int32_t t51 = 32593965;
static int32_t x214 = -1015249141;
int32_t x216 = INT32_MIN;
volatile int32_t t53 = -126;
int8_t x223 = -1;
volatile uint32_t x224 = 148U;
uint32_t x235 = 0U;
volatile int32_t t57 = 1;
volatile int32_t t61 = 175;
static volatile uint32_t x263 = UINT32_MAX;
int32_t t65 = 4;
int64_t x272 = INT64_MIN;
static int32_t t66 = 37168691;
static int64_t x274 = INT64_MAX;
static int8_t x293 = INT8_MAX;
static int16_t x294 = 7;
uint64_t x300 = UINT64_MAX;
volatile int32_t t72 = 399656;
static uint8_t x313 = UINT8_MAX;
int8_t x316 = INT8_MIN;
volatile int32_t t76 = -13;
int32_t x317 = -436249524;
static int32_t x319 = 24430;
volatile int32_t t77 = -1886;
static int32_t t78 = -594000439;
int32_t x329 = INT32_MIN;
int32_t t80 = 9377332;
int32_t t81 = 7;
int32_t t82 = -336238737;
static int32_t x346 = INT32_MIN;
static int32_t t83 = -1641;
static int64_t x350 = -1LL;
uint16_t x358 = 448U;
uint8_t x365 = 12U;
int32_t x375 = INT32_MAX;
int8_t x383 = INT8_MIN;
uint64_t x386 = UINT64_MAX;
uint32_t x390 = 2642200U;
volatile int8_t x395 = 3;
int32_t x398 = INT32_MAX;
uint8_t x403 = 28U;
uint64_t x405 = 6805958635242323LLU;
static uint32_t x406 = 1U;
int32_t t98 = -3208;
static volatile int64_t x413 = -1LL;
static uint32_t x416 = 2459705U;
volatile int32_t t99 = 894064;


void f0(void) {
	int32_t x1 = -11639;
	volatile int64_t x3 = 32997445037648833LL;
	uint32_t x4 = 51U;
	int32_t t0 = 12906646;

	t0 = (x1<(x2/(x3^x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int16_t x6 = INT16_MIN;
	int16_t x7 = INT16_MIN;
	static int8_t x8 = 25;
	int32_t t1 = -552;

	t1 = (x5<(x6/(x7^x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = UINT32_MAX;
	uint64_t x10 = UINT64_MAX;
	int16_t x11 = -5;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = 1;

	t2 = (x9<(x10/(x11^x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	uint64_t x14 = 3474436906538346662LLU;
	volatile uint8_t x16 = 58U;

	t3 = (x13<(x14/(x15^x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = 69U;
	int16_t x18 = -24;
	uint16_t x19 = 136U;
	int32_t t4 = -80823945;

	t4 = (x17<(x18/(x19^x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -542;
	int16_t x23 = INT16_MIN;
	int32_t t5 = 11151;

	t5 = (x21<(x22/(x23^x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	volatile int16_t x26 = INT16_MIN;
	static int8_t x27 = -1;
	uint32_t x28 = 2U;
	int32_t t6 = 251;

	t6 = (x25<(x26/(x27^x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = 9;
	static uint16_t x31 = 71U;
	static int32_t t7 = -6403;

	t7 = (x29<(x30/(x31^x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x33 = 0U;
	int8_t x34 = INT8_MIN;
	int16_t x35 = INT16_MAX;
	volatile uint8_t x36 = UINT8_MAX;

	t8 = (x33<(x34/(x35^x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	int16_t x39 = -14074;
	uint64_t x40 = UINT64_MAX;
	volatile int32_t t9 = -46097424;

	t9 = (x37<(x38/(x39^x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x43 = INT16_MIN;
	int16_t x44 = INT16_MAX;
	static int32_t t10 = 170350656;

	t10 = (x41<(x42/(x43^x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 0;
	uint16_t x46 = 12U;
	volatile uint32_t x47 = 540791927U;
	uint16_t x48 = 1871U;
	int32_t t11 = 11;

	t11 = (x45<(x46/(x47^x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x50 = -1;
	int8_t x51 = INT8_MIN;
	volatile uint8_t x52 = 6U;
	int32_t t12 = 241472244;

	t12 = (x49<(x50/(x51^x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = INT64_MIN;
	volatile uint8_t x54 = 6U;
	int32_t x55 = INT32_MIN;
	static uint16_t x56 = 4659U;
	int32_t t13 = 164789588;

	t13 = (x53<(x54/(x55^x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MIN;
	volatile int64_t x60 = INT64_MIN;

	t14 = (x57<(x58/(x59^x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	uint8_t x63 = 1U;
	static volatile int8_t x64 = 14;

	t15 = (x61<(x62/(x63^x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = INT64_MIN;
	uint16_t x67 = UINT16_MAX;
	int64_t x68 = INT64_MIN;
	static int32_t t16 = 6;

	t16 = (x65<(x66/(x67^x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = 60;
	int16_t x70 = INT16_MIN;
	int32_t x72 = -1;
	volatile int32_t t17 = -5982;

	t17 = (x69<(x70/(x71^x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 1036483U;
	uint16_t x75 = 90U;
	int32_t x76 = INT32_MIN;
	volatile int32_t t18 = -1;

	t18 = (x73<(x74/(x75^x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x78 = 24U;
	uint32_t x79 = 90815461U;
	uint8_t x80 = 6U;
	int32_t t19 = 7803273;

	t19 = (x77<(x78/(x79^x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 563U;
	int8_t x82 = INT8_MAX;
	static uint32_t x83 = UINT32_MAX;
	uint16_t x84 = 18575U;
	int32_t t20 = -2;

	t20 = (x81<(x82/(x83^x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 1648U;
	int32_t x86 = -1076161;
	uint16_t x88 = UINT16_MAX;
	static int32_t t21 = -3597797;

	t21 = (x85<(x86/(x87^x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 6U;
	static uint64_t x90 = 32732547544112669LLU;
	static uint16_t x92 = 1371U;
	volatile int32_t t22 = 2692791;

	t22 = (x89<(x90/(x91^x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = -1;
	uint64_t x94 = 6011528207LLU;
	int16_t x95 = -5;
	volatile int8_t x96 = INT8_MIN;

	t23 = (x93<(x94/(x95^x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x98 = INT8_MIN;
	uint16_t x100 = 0U;

	t24 = (x97<(x98/(x99^x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = 1;
	uint16_t x102 = 3U;
	uint16_t x103 = UINT16_MAX;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t25 = 3999;

	t25 = (x101<(x102/(x103^x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x106 = 45;
	uint64_t x107 = 5179109450195020LLU;
	static int8_t x108 = 40;
	static volatile int32_t t26 = -4571962;

	t26 = (x105<(x106/(x107^x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 2504149258LLU;
	int64_t x112 = INT64_MIN;
	int32_t t27 = -13930002;

	t27 = (x109<(x110/(x111^x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x113 = UINT8_MAX;
	uint64_t x114 = 136785LLU;
	uint64_t x115 = 322562269111847672LLU;
	static volatile uint8_t x116 = UINT8_MAX;
	volatile int32_t t28 = -1052;

	t28 = (x113<(x114/(x115^x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x118 = 1U;
	volatile int32_t x119 = INT32_MAX;
	static int32_t x120 = INT32_MIN;
	volatile int32_t t29 = -41;

	t29 = (x117<(x118/(x119^x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x121 = UINT64_MAX;
	volatile int32_t x122 = 64679664;
	uint8_t x123 = 9U;
	static uint16_t x124 = UINT16_MAX;
	int32_t t30 = -1;

	t30 = (x121<(x122/(x123^x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -1;
	int8_t x126 = -8;
	static volatile int16_t x127 = INT16_MIN;
	int32_t t31 = 3859;

	t31 = (x125<(x126/(x127^x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 838U;
	int16_t x130 = INT16_MIN;
	int16_t x131 = INT16_MIN;
	static uint16_t x132 = UINT16_MAX;

	t32 = (x129<(x130/(x131^x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x134 = -1;
	volatile int64_t x136 = INT64_MIN;
	static volatile int32_t t33 = -234922;

	t33 = (x133<(x134/(x135^x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x137 = 234063624079LLU;
	volatile uint8_t x138 = 16U;
	int8_t x140 = INT8_MIN;
	volatile int32_t t34 = -1;

	t34 = (x137<(x138/(x139^x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	static uint8_t x142 = 0U;
	uint16_t x143 = 1926U;

	t35 = (x141<(x142/(x143^x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = 31;
	int8_t x146 = -1;
	int32_t x147 = INT32_MIN;
	volatile int32_t t36 = 5;

	t36 = (x145<(x146/(x147^x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x150 = 159469231;
	static uint64_t x151 = 345751268096444LLU;
	int8_t x152 = INT8_MIN;
	volatile int32_t t37 = -1889;

	t37 = (x149<(x150/(x151^x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = 1;
	int64_t x154 = INT64_MIN;
	uint64_t x155 = 297582230LLU;

	t38 = (x153<(x154/(x155^x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = INT32_MIN;
	uint16_t x158 = UINT16_MAX;
	int32_t x159 = INT32_MIN;
	int32_t x160 = -47764428;

	t39 = (x157<(x158/(x159^x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	int32_t x164 = -1;
	static int32_t t40 = 44004;

	t40 = (x161<(x162/(x163^x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = -1;
	volatile int16_t x166 = INT16_MAX;
	int64_t x167 = -1187923285157LL;
	uint16_t x168 = 1578U;
	int32_t t41 = 0;

	t41 = (x165<(x166/(x167^x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = UINT64_MAX;
	uint16_t x170 = 17U;
	int64_t x171 = 169LL;
	int32_t t42 = -4;

	t42 = (x169<(x170/(x171^x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	uint32_t x174 = 1U;
	int8_t x175 = INT8_MAX;
	uint64_t x176 = 4210187868118000045LLU;

	t43 = (x173<(x174/(x175^x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x178 = 52U;
	int32_t x179 = INT32_MIN;
	uint64_t x180 = 1LLU;
	int32_t t44 = 546;

	t44 = (x177<(x178/(x179^x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -1LL;
	int32_t x182 = INT32_MIN;
	static int8_t x183 = INT8_MIN;
	int32_t t45 = -477350;

	t45 = (x181<(x182/(x183^x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x185 = UINT64_MAX;
	int64_t x186 = 883571LL;
	static uint32_t x187 = 3873U;
	int64_t x188 = INT64_MAX;
	volatile int32_t t46 = 399585;

	t46 = (x185<(x186/(x187^x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = INT32_MIN;
	static int64_t x195 = INT64_MIN;
	static uint8_t x196 = 17U;
	volatile int32_t t47 = 6521;

	t47 = (x193<(x194/(x195^x196)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x197 = INT16_MIN;
	int32_t x198 = 421707694;
	int16_t x199 = -7;
	static int8_t x200 = -1;
	volatile int32_t t48 = -5;

	t48 = (x197<(x198/(x199^x200)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = INT8_MIN;
	int64_t x202 = -2076832002593688LL;
	uint32_t x203 = 17693U;
	int32_t x204 = INT32_MIN;
	static volatile int32_t t49 = 14961052;

	t49 = (x201<(x202/(x203^x204)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x205 = INT32_MAX;
	int32_t x208 = 1216;
	volatile int32_t t50 = -1;

	t50 = (x205<(x206/(x207^x208)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x210 = 60;
	uint64_t x211 = 24112378997048LLU;

	t51 = (x209<(x210/(x211^x212)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x213 = 0LLU;
	static volatile int64_t x215 = INT64_MIN;
	int32_t t52 = -89;

	t52 = (x213<(x214/(x215^x216)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = INT64_MIN;
	int32_t x218 = -5794388;
	uint16_t x219 = UINT16_MAX;
	int64_t x220 = INT64_MAX;

	t53 = (x217<(x218/(x219^x220)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x221 = -39LL;
	int32_t x222 = -1;
	int32_t t54 = -28932034;

	t54 = (x221<(x222/(x223^x224)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = INT64_MIN;
	int16_t x226 = INT16_MIN;
	uint32_t x227 = UINT32_MAX;
	uint8_t x228 = 54U;
	int32_t t55 = 10;

	t55 = (x225<(x226/(x227^x228)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x229 = 826914098216617072LLU;
	volatile uint64_t x230 = UINT64_MAX;
	uint8_t x231 = 1U;
	int8_t x232 = -1;
	int32_t t56 = -10;

	t56 = (x229<(x230/(x231^x232)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x233 = 77300004LLU;
	static int64_t x234 = INT64_MAX;
	static int8_t x236 = -1;

	t57 = (x233<(x234/(x235^x236)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = INT64_MIN;
	int8_t x238 = 0;
	int8_t x239 = 7;
	uint16_t x240 = 1U;
	int32_t t58 = 3122;

	t58 = (x237<(x238/(x239^x240)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x241 = INT8_MAX;
	static int64_t x242 = INT64_MIN;
	static int64_t x243 = -403922051LL;
	int64_t x244 = INT64_MAX;
	int32_t t59 = -289559480;

	t59 = (x241<(x242/(x243^x244)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x245 = -3;
	uint32_t x246 = 4141U;
	int8_t x247 = -1;
	uint64_t x248 = 116870053LLU;
	int32_t t60 = -889;

	t60 = (x245<(x246/(x247^x248)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x249 = 0;
	static int32_t x250 = 33326989;
	static int64_t x251 = INT64_MAX;
	static uint64_t x252 = 84367510967595LLU;

	t61 = (x249<(x250/(x251^x252)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x253 = INT8_MIN;
	int32_t x254 = 61763339;
	int16_t x255 = INT16_MIN;
	int64_t x256 = INT64_MIN;
	int32_t t62 = -1259567;

	t62 = (x253<(x254/(x255^x256)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x257 = 10018LLU;
	uint32_t x258 = 7038290U;
	volatile uint16_t x259 = 1U;
	volatile int8_t x260 = 0;
	int32_t t63 = -536409577;

	t63 = (x257<(x258/(x259^x260)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x261 = INT16_MIN;
	static uint32_t x262 = 637932899U;
	int32_t x264 = 762;
	int32_t t64 = 175481;

	t64 = (x261<(x262/(x263^x264)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x265 = UINT16_MAX;
	int16_t x266 = 3582;
	volatile int8_t x267 = 1;
	int16_t x268 = INT16_MIN;

	t65 = (x265<(x266/(x267^x268)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x269 = UINT64_MAX;
	static int32_t x270 = INT32_MAX;
	uint16_t x271 = UINT16_MAX;

	t66 = (x269<(x270/(x271^x272)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x273 = INT32_MIN;
	int32_t x275 = INT32_MIN;
	int8_t x276 = -1;
	static volatile int32_t t67 = 223486558;

	t67 = (x273<(x274/(x275^x276)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x277 = INT32_MIN;
	int32_t x278 = INT32_MIN;
	int64_t x279 = 10199LL;
	int16_t x280 = INT16_MIN;
	volatile int32_t t68 = -4121589;

	t68 = (x277<(x278/(x279^x280)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x281 = INT8_MAX;
	int8_t x282 = INT8_MIN;
	uint64_t x283 = UINT64_MAX;
	uint8_t x284 = UINT8_MAX;
	int32_t t69 = -1;

	t69 = (x281<(x282/(x283^x284)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x285 = INT64_MAX;
	int64_t x286 = 27811702LL;
	volatile uint32_t x287 = 937U;
	int64_t x288 = INT64_MAX;
	int32_t t70 = 0;

	t70 = (x285<(x286/(x287^x288)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint8_t x295 = 1U;
	int32_t x296 = 230;
	int32_t t71 = 686;

	t71 = (x293<(x294/(x295^x296)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x297 = INT32_MAX;
	int32_t x298 = INT32_MIN;
	volatile int64_t x299 = INT64_MIN;

	t72 = (x297<(x298/(x299^x300)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = -77620;
	uint16_t x302 = UINT16_MAX;
	static int16_t x303 = INT16_MIN;
	volatile int8_t x304 = INT8_MAX;
	int32_t t73 = 203459;

	t73 = (x301<(x302/(x303^x304)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x305 = 52U;
	int32_t x306 = -566386095;
	volatile int64_t x307 = -21916194585661LL;
	int32_t x308 = 1427745;
	static volatile int32_t t74 = -114849147;

	t74 = (x305<(x306/(x307^x308)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x309 = 291130915149286LL;
	uint32_t x310 = UINT32_MAX;
	int32_t x311 = INT32_MIN;
	int32_t x312 = -6;
	volatile int32_t t75 = -6364826;

	t75 = (x309<(x310/(x311^x312)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x314 = -3;
	static volatile uint8_t x315 = 49U;

	t76 = (x313<(x314/(x315^x316)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x318 = INT64_MIN;
	static int64_t x320 = INT64_MIN;

	t77 = (x317<(x318/(x319^x320)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x321 = UINT16_MAX;
	int8_t x322 = 0;
	int16_t x323 = INT16_MIN;
	static int16_t x324 = 3526;

	t78 = (x321<(x322/(x323^x324)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x325 = -1LL;
	int8_t x326 = INT8_MIN;
	static int8_t x327 = INT8_MIN;
	static int8_t x328 = 30;
	int32_t t79 = -5;

	t79 = (x325<(x326/(x327^x328)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x330 = 534;
	int32_t x331 = -295;
	static volatile int64_t x332 = INT64_MIN;

	t80 = (x329<(x330/(x331^x332)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x337 = 0LL;
	static int8_t x338 = -15;
	volatile uint16_t x339 = 117U;
	volatile int16_t x340 = INT16_MIN;

	t81 = (x337<(x338/(x339^x340)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x341 = 16;
	static volatile int8_t x342 = 0;
	uint64_t x343 = 1811602LLU;
	int32_t x344 = -1;

	t82 = (x341<(x342/(x343^x344)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x345 = INT32_MAX;
	volatile uint8_t x347 = 92U;
	volatile int8_t x348 = INT8_MAX;

	t83 = (x345<(x346/(x347^x348)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x349 = INT16_MIN;
	uint16_t x351 = UINT16_MAX;
	uint8_t x352 = 9U;
	int32_t t84 = 996693658;

	t84 = (x349<(x350/(x351^x352)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x353 = INT64_MIN;
	volatile int16_t x354 = 0;
	static uint64_t x355 = 1074753LLU;
	static volatile uint64_t x356 = 306398552LLU;
	volatile int32_t t85 = 6780;

	t85 = (x353<(x354/(x355^x356)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x357 = INT64_MAX;
	volatile int32_t x359 = INT32_MIN;
	volatile uint8_t x360 = UINT8_MAX;
	volatile int32_t t86 = -36123710;

	t86 = (x357<(x358/(x359^x360)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x361 = 7185971;
	uint32_t x362 = 14502478U;
	int16_t x363 = -2;
	int32_t x364 = INT32_MAX;
	volatile int32_t t87 = -7283489;

	t87 = (x361<(x362/(x363^x364)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x366 = INT64_MIN;
	static int32_t x367 = 1689775;
	int8_t x368 = INT8_MIN;
	volatile int32_t t88 = 1057655526;

	t88 = (x365<(x366/(x367^x368)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x373 = 27U;
	uint8_t x374 = 20U;
	volatile uint64_t x376 = 236930682669880LLU;
	static int32_t t89 = 3543570;

	t89 = (x373<(x374/(x375^x376)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x377 = 8U;
	int16_t x378 = -421;
	uint32_t x379 = 700U;
	volatile int8_t x380 = 13;
	int32_t t90 = 20325094;

	t90 = (x377<(x378/(x379^x380)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x381 = 3;
	uint64_t x382 = 63937173308775389LLU;
	static int32_t x384 = 185;
	int32_t t91 = -20025465;

	t91 = (x381<(x382/(x383^x384)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x385 = -1;
	volatile uint64_t x387 = 8072786651LLU;
	uint32_t x388 = 542248876U;
	static volatile int32_t t92 = 753;

	t92 = (x385<(x386/(x387^x388)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x389 = 174481674733743302LLU;
	static uint16_t x391 = UINT16_MAX;
	static int16_t x392 = 51;
	int32_t t93 = 0;

	t93 = (x389<(x390/(x391^x392)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x393 = -1;
	volatile uint8_t x394 = 51U;
	uint8_t x396 = UINT8_MAX;
	int32_t t94 = 7;

	t94 = (x393<(x394/(x395^x396)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x397 = -2790LL;
	int8_t x399 = INT8_MAX;
	uint8_t x400 = 26U;
	volatile int32_t t95 = -3360442;

	t95 = (x397<(x398/(x399^x400)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x401 = 1096924U;
	int64_t x402 = 5277LL;
	int32_t x404 = -1;
	int32_t t96 = 3599;

	t96 = (x401<(x402/(x403^x404)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x407 = INT32_MIN;
	int64_t x408 = -1LL;
	int32_t t97 = 913;

	t97 = (x405<(x406/(x407^x408)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x409 = INT32_MIN;
	static volatile int32_t x410 = INT32_MIN;
	int64_t x411 = INT64_MAX;
	volatile uint64_t x412 = 42741923106LLU;

	t98 = (x409<(x410/(x411^x412)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint8_t x414 = 3U;
	int16_t x415 = INT16_MIN;

	t99 = (x413<(x414/(x415^x416)));

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

