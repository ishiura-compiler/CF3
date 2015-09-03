#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x15 = -4;
int32_t x19 = -1;
static volatile int32_t x25 = -6239411;
int8_t x26 = -19;
static uint64_t t5 = 25095LLU;
uint8_t x33 = UINT8_MAX;
volatile int64_t x35 = -1LL;
uint64_t x37 = 86186LLU;
int64_t x46 = INT64_MIN;
volatile int32_t x47 = INT32_MAX;
static volatile uint8_t x50 = 0U;
volatile int32_t t9 = -53;
int32_t x54 = INT32_MAX;
int16_t x67 = INT16_MAX;
static uint8_t x69 = 5U;
int64_t x84 = 409LL;
int64_t x86 = INT64_MAX;
static volatile uint64_t x87 = 102LLU;
int64_t x96 = INT64_MIN;
static int64_t x109 = -1LL;
int8_t x110 = INT8_MAX;
int64_t t24 = 9948LL;
volatile uint32_t x116 = 20U;
uint64_t x117 = 63498399437LLU;
int8_t x118 = -1;
uint8_t x121 = UINT8_MAX;
static int8_t x126 = INT8_MIN;
int8_t x127 = -1;
uint32_t t30 = 119U;
volatile int32_t x138 = INT32_MIN;
static int32_t x140 = INT32_MIN;
volatile uint16_t x142 = 17U;
int64_t x149 = 3226703256281183197LL;
static uint16_t x150 = UINT16_MAX;
volatile uint64_t x155 = UINT64_MAX;
int32_t x160 = 10;
volatile uint32_t t36 = 23U;
int64_t x161 = INT64_MIN;
static int16_t x162 = INT16_MAX;
uint64_t x169 = 24494379271LLU;
int32_t x177 = INT32_MAX;
uint64_t x182 = 281579079LLU;
int64_t x190 = INT64_MIN;
int8_t x198 = -1;
int64_t x199 = -270432214LL;
volatile int64_t t46 = 1242LL;
static int8_t x203 = -1;
volatile int64_t x209 = INT64_MIN;
volatile int64_t t49 = INT64_MIN;
uint16_t x214 = 29U;
static int64_t x216 = INT64_MIN;
int64_t t50 = 1634459058272LL;
uint32_t x224 = 823420169U;
int64_t x228 = INT64_MIN;
static volatile uint64_t t52 = 12LLU;
static uint64_t x230 = 6957491068574832871LLU;
volatile int8_t x233 = 0;
int8_t x243 = -1;
uint32_t x244 = 1512986U;
int64_t x246 = INT64_MAX;
int16_t x247 = INT16_MIN;
uint16_t x249 = 2122U;
int8_t x250 = INT8_MIN;
uint64_t x254 = UINT64_MAX;
int64_t x259 = INT64_MIN;
static int32_t x264 = -1223;
volatile int64_t t62 = -67641142636869441LL;
int16_t x275 = 973;
volatile uint8_t x276 = 1U;
static volatile int16_t x280 = -210;
volatile int32_t t65 = -12992023;
int16_t x285 = 2;
static uint8_t x286 = 4U;
int8_t x288 = -1;
int8_t x291 = INT8_MIN;
volatile uint32_t t69 = 158U;
volatile int32_t x303 = INT32_MAX;
uint16_t x310 = 9096U;
int32_t x312 = INT32_MIN;
uint32_t x317 = 276370935U;
uint32_t t76 = 83748U;
static int64_t x326 = INT64_MAX;
volatile uint32_t x332 = 10264U;
int8_t x342 = INT8_MIN;
static int8_t x344 = 21;
volatile int32_t x363 = INT32_MAX;
uint16_t x368 = UINT16_MAX;
int8_t x372 = 1;
uint32_t x375 = 45032U;
static volatile int32_t x377 = INT32_MIN;
static int64_t x379 = -1059608LL;
int8_t x382 = -1;
volatile uint16_t x383 = 548U;
static volatile uint64_t t91 = 8330692328399624456LLU;
int32_t x396 = INT32_MIN;
volatile uint64_t t94 = 1570794096LLU;
uint16_t x401 = 42U;
int64_t x404 = INT64_MAX;
int64_t x408 = INT64_MAX;
volatile int64_t t96 = 22463LL;
static volatile int32_t x411 = 2421689;
int64_t x416 = INT64_MIN;
uint64_t t98 = 35245042077LLU;
volatile uint64_t x418 = UINT64_MAX;


void f0(void) {
	int8_t x5 = 12;
	int8_t x6 = -1;
	static volatile int64_t x7 = -2201406LL;
	static uint16_t x8 = 26U;
	static volatile int64_t t0 = 469781507487474533LL;

	t0 = (x5&((x6|x7)%x8));

	if (t0 != 12LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x13 = 2290416049899LLU;
	volatile int16_t x14 = INT16_MIN;
	int16_t x16 = 63;
	static volatile uint64_t t1 = 34164034433266109LLU;

	t1 = (x13&((x14|x15)%x16));

	if (t1 != 2290416049896LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x17 = INT8_MIN;
	int16_t x18 = INT16_MIN;
	int32_t x20 = -102822801;
	int32_t t2 = 47519;

	t2 = (x17&((x18|x19)%x20));

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x21 = -1;
	int64_t x22 = INT64_MIN;
	uint64_t x23 = UINT64_MAX;
	int32_t x24 = INT32_MIN;
	volatile uint64_t t3 = 1665652325942802LLU;

	t3 = (x21&((x22|x23)%x24));

	if (t3 != 2147483647LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x27 = -1;
	int16_t x28 = INT16_MAX;
	volatile int32_t t4 = 509990143;

	t4 = (x25&((x26|x27)%x28));

	if (t4 != -6239411) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x29 = INT16_MIN;
	uint16_t x30 = UINT16_MAX;
	int8_t x31 = -1;
	static uint64_t x32 = 885LLU;

	t5 = (x29&((x30|x31)%x32));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x34 = INT32_MAX;
	volatile int32_t x36 = -1;
	int64_t t6 = -13996723787LL;

	t6 = (x33&((x34|x35)%x36));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x38 = INT8_MIN;
	int8_t x39 = INT8_MIN;
	int32_t x40 = -1;
	uint64_t t7 = 63623854527760LLU;

	t7 = (x37&((x38|x39)%x40));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x45 = 0U;
	static int8_t x48 = -1;
	int64_t t8 = 7372470079358LL;

	t8 = (x45&((x46|x47)%x48));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x49 = UINT8_MAX;
	uint16_t x51 = 3U;
	uint16_t x52 = 6886U;

	t9 = (x49&((x50|x51)%x52));

	if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x53 = UINT16_MAX;
	int8_t x55 = INT8_MAX;
	static uint8_t x56 = 2U;
	int32_t t10 = -28523549;

	t10 = (x53&((x54|x55)%x56));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x57 = UINT16_MAX;
	static int32_t x58 = -1;
	volatile int16_t x59 = -1;
	int32_t x60 = -1;
	volatile int32_t t11 = -58160281;

	t11 = (x57&((x58|x59)%x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x61 = UINT16_MAX;
	int16_t x62 = -1;
	int32_t x63 = -1;
	int64_t x64 = -1LL;
	int64_t t12 = -1LL;

	t12 = (x61&((x62|x63)%x64));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x65 = 8U;
	volatile int32_t x66 = -15;
	uint64_t x68 = 23095729300929514LLU;
	volatile uint64_t t13 = 12148311LLU;

	t13 = (x65&((x66|x67)%x68));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x70 = INT32_MAX;
	volatile uint8_t x71 = 63U;
	int16_t x72 = 3;
	volatile int32_t t14 = -365401;

	t14 = (x69&((x70|x71)%x72));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x73 = UINT8_MAX;
	uint8_t x74 = UINT8_MAX;
	int8_t x75 = 14;
	int16_t x76 = -1;
	volatile int32_t t15 = -35975;

	t15 = (x73&((x74|x75)%x76));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = INT16_MIN;
	int64_t x78 = -21840848037LL;
	volatile int32_t x79 = -213;
	int16_t x80 = INT16_MIN;
	static volatile int64_t t16 = 29591569754LL;

	t16 = (x77&((x78|x79)%x80));

	if (t16 != -32768LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x81 = 4566126933LLU;
	int32_t x82 = -1740;
	volatile int16_t x83 = INT16_MIN;
	static uint64_t t17 = 2967891636672681LLU;

	t17 = (x81&((x82|x83)%x84));

	if (t17 != 4566126864LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x85 = 0U;
	uint16_t x88 = UINT16_MAX;
	volatile uint64_t t18 = 7655LLU;

	t18 = (x85&((x86|x87)%x88));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x89 = 3U;
	int8_t x90 = INT8_MIN;
	uint16_t x91 = 26U;
	int32_t x92 = -244;
	static volatile int32_t t19 = -17904;

	t19 = (x89&((x90|x91)%x92));

	if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x93 = INT64_MIN;
	int8_t x94 = -11;
	int32_t x95 = INT32_MAX;
	int64_t t20 = INT64_MIN;

	t20 = (x93&((x94|x95)%x96));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x97 = UINT16_MAX;
	uint16_t x98 = UINT16_MAX;
	uint16_t x99 = UINT16_MAX;
	int8_t x100 = INT8_MAX;
	volatile int32_t t21 = 4368328;

	t21 = (x97&((x98|x99)%x100));

	if (t21 != 3) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = 6;
	static int32_t x102 = INT32_MIN;
	static uint64_t x103 = UINT64_MAX;
	static int32_t x104 = 32984724;
	uint64_t t22 = 3068777630742LLU;

	t22 = (x101&((x102|x103)%x104));

	if (t22 != 6LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x105 = 7U;
	uint32_t x106 = 118795053U;
	static uint64_t x107 = UINT64_MAX;
	int16_t x108 = INT16_MAX;
	static volatile uint64_t t23 = 0LLU;

	t23 = (x105&((x106|x107)%x108));

	if (t23 != 7LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x111 = 3;
	int32_t x112 = INT32_MIN;

	t24 = (x109&((x110|x111)%x112));

	if (t24 != 127LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint64_t x113 = 2717LLU;
	uint8_t x114 = 89U;
	int16_t x115 = INT16_MAX;
	static volatile uint64_t t25 = 3065510861398491LLU;

	t25 = (x113&((x114|x115)%x116));

	if (t25 != 5LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x119 = -1LL;
	static int8_t x120 = INT8_MIN;
	volatile uint64_t t26 = 39LLU;

	t26 = (x117&((x118|x119)%x120));

	if (t26 != 63498399437LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x122 = INT32_MIN;
	static int64_t x123 = INT64_MIN;
	int64_t x124 = 28356924995LL;
	static int64_t t27 = 3012842020LL;

	t27 = (x121&((x122|x123)%x124));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x125 = 2470172173858779252LLU;
	volatile int64_t x128 = INT64_MIN;
	volatile uint64_t t28 = 0LLU;

	t28 = (x125&((x126|x127)%x128));

	if (t28 != 2470172173858779252LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x129 = 3126;
	volatile int8_t x130 = -1;
	int8_t x131 = INT8_MIN;
	uint64_t x132 = 159185750LLU;
	uint64_t t29 = 2205356757LLU;

	t29 = (x129&((x130|x131)%x132));

	if (t29 != 1024LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x133 = -14;
	int16_t x134 = -1;
	uint8_t x135 = 7U;
	static uint32_t x136 = UINT32_MAX;

	t30 = (x133&((x134|x135)%x136));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = INT16_MAX;
	int16_t x139 = INT16_MAX;
	volatile int32_t t31 = -254;

	t31 = (x137&((x138|x139)%x140));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = INT8_MIN;
	int8_t x143 = INT8_MAX;
	uint64_t x144 = UINT64_MAX;
	static volatile uint64_t t32 = 17746028142623232LLU;

	t32 = (x141&((x142|x143)%x144));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = -1;
	int16_t x146 = INT16_MIN;
	int64_t x147 = INT64_MIN;
	static int16_t x148 = -94;
	int64_t t33 = 1LL;

	t33 = (x145&((x146|x147)%x148));

	if (t33 != -56LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x151 = -1LL;
	uint64_t x152 = UINT64_MAX;
	volatile uint64_t t34 = 335LLU;

	t34 = (x149&((x150|x151)%x152));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x153 = UINT8_MAX;
	int8_t x154 = 0;
	int16_t x156 = 10771;
	static volatile uint64_t t35 = 3347568168135LLU;

	t35 = (x153&((x154|x155)%x156));

	if (t35 != 153LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint32_t x157 = 822318308U;
	int16_t x158 = -1;
	volatile int16_t x159 = INT16_MIN;

	t36 = (x157&((x158|x159)%x160));

	if (t36 != 822318308U) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x163 = -1;
	static uint32_t x164 = 23161U;
	int64_t t37 = -2651LL;

	t37 = (x161&((x162|x163)%x164));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x165 = 12307884470LL;
	static int32_t x166 = INT32_MIN;
	uint8_t x167 = 59U;
	uint32_t x168 = UINT32_MAX;
	int64_t t38 = 20672818742LL;

	t38 = (x165&((x166|x167)%x168));

	if (t38 != 2147483698LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x170 = 3;
	int32_t x171 = INT32_MAX;
	volatile int32_t x172 = INT32_MAX;
	uint64_t t39 = 918LLU;

	t39 = (x169&((x170|x171)%x172));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x173 = INT32_MAX;
	volatile int8_t x174 = -1;
	int64_t x175 = -2195413762393469LL;
	static uint8_t x176 = UINT8_MAX;
	volatile int64_t t40 = -32852058812947916LL;

	t40 = (x173&((x174|x175)%x176));

	if (t40 != 2147483647LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x178 = INT32_MIN;
	int16_t x179 = 2;
	int8_t x180 = INT8_MAX;
	static volatile int32_t t41 = -261;

	t41 = (x177&((x178|x179)%x180));

	if (t41 != 2147483642) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x181 = UINT32_MAX;
	static volatile int64_t x183 = INT64_MAX;
	uint16_t x184 = 1394U;
	volatile uint64_t t42 = 5714236157608835LLU;

	t42 = (x181&((x182|x183)%x184));

	if (t42 != 909LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x185 = UINT32_MAX;
	int64_t x186 = INT64_MIN;
	int8_t x187 = -1;
	volatile int16_t x188 = -1;
	static volatile int64_t t43 = -1294791LL;

	t43 = (x185&((x186|x187)%x188));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x189 = 1U;
	int64_t x191 = 22579173LL;
	int16_t x192 = INT16_MAX;
	volatile int64_t t44 = 806LL;

	t44 = (x189&((x190|x191)%x192));

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = INT8_MIN;
	int32_t x194 = INT32_MIN;
	static uint64_t x195 = 29955605562LLU;
	uint8_t x196 = UINT8_MAX;
	volatile uint64_t t45 = 1211428767845630LLU;

	t45 = (x193&((x194|x195)%x196));

	if (t45 != 128LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x197 = -1;
	static int16_t x200 = INT16_MAX;

	t46 = (x197&((x198|x199)%x200));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = -13473;
	static uint32_t x202 = 1686886252U;
	int16_t x204 = -1;
	uint32_t t47 = 1692U;

	t47 = (x201&((x202|x203)%x204));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint32_t x205 = 29U;
	int32_t x206 = INT32_MAX;
	int8_t x207 = -1;
	uint64_t x208 = 256550589057795920LLU;
	static uint64_t t48 = 113LLU;

	t48 = (x205&((x206|x207)%x208));

	if (t48 != 13LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x210 = INT64_MIN;
	uint8_t x211 = 25U;
	uint16_t x212 = 22098U;

	t49 = (x209&((x210|x211)%x212));

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x213 = UINT32_MAX;
	int64_t x215 = -1LL;

	t50 = (x213&((x214|x215)%x216));

	if (t50 != 4294967295LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x221 = INT64_MIN;
	int32_t x222 = INT32_MAX;
	uint16_t x223 = 0U;
	volatile int64_t t51 = -24131277159LL;

	t51 = (x221&((x222|x223)%x224));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x225 = -508;
	int64_t x226 = INT64_MAX;
	uint64_t x227 = UINT64_MAX;

	t52 = (x225&((x226|x227)%x228));

	if (t52 != 9223372036854775300LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x229 = 30U;
	volatile int8_t x231 = INT8_MIN;
	volatile int16_t x232 = INT16_MIN;
	uint64_t t53 = 2146741405LLU;

	t53 = (x229&((x230|x231)%x232));

	if (t53 != 6LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x234 = 1;
	uint16_t x235 = 98U;
	int32_t x236 = -36;
	volatile int32_t t54 = -32935395;

	t54 = (x233&((x234|x235)%x236));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x237 = INT16_MIN;
	volatile int16_t x238 = -9078;
	int8_t x239 = 1;
	uint32_t x240 = 66U;
	uint32_t t55 = 1079134U;

	t55 = (x237&((x238|x239)%x240));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x241 = 1U;
	uint16_t x242 = UINT16_MAX;
	volatile uint32_t t56 = 10031024U;

	t56 = (x241&((x242|x243)%x244));

	if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x245 = 2;
	uint32_t x248 = UINT32_MAX;
	int64_t t57 = 126LL;

	t57 = (x245&((x246|x247)%x248));

	if (t57 != 2LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x251 = -36;
	int16_t x252 = INT16_MIN;
	int32_t t58 = 207552;

	t58 = (x249&((x250|x251)%x252));

	if (t58 != 2120) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x253 = 3U;
	int32_t x255 = INT32_MAX;
	uint8_t x256 = UINT8_MAX;
	static volatile uint64_t t59 = 4635398669352LLU;

	t59 = (x253&((x254|x255)%x256));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x257 = 1U;
	uint8_t x258 = 11U;
	uint8_t x260 = UINT8_MAX;
	int64_t t60 = 276076088375367160LL;

	t60 = (x257&((x258|x259)%x260));

	if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x261 = INT32_MIN;
	int8_t x262 = INT8_MIN;
	int8_t x263 = INT8_MIN;
	volatile int32_t t61 = INT32_MIN;

	t61 = (x261&((x262|x263)%x264));

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x265 = INT8_MAX;
	int64_t x266 = INT64_MIN;
	int32_t x267 = -1;
	int64_t x268 = INT64_MIN;

	t62 = (x265&((x266|x267)%x268));

	if (t62 != 127LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x269 = UINT8_MAX;
	uint16_t x270 = UINT16_MAX;
	uint16_t x271 = 3803U;
	int16_t x272 = INT16_MAX;
	volatile int32_t t63 = 22;

	t63 = (x269&((x270|x271)%x272));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x273 = 0;
	static int32_t x274 = 8971;
	volatile int32_t t64 = 0;

	t64 = (x273&((x274|x275)%x276));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x277 = -1;
	static int8_t x278 = INT8_MIN;
	volatile int8_t x279 = -1;

	t65 = (x277&((x278|x279)%x280));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x281 = -140663065LL;
	static int64_t x282 = INT64_MAX;
	int64_t x283 = 221805179742038159LL;
	int64_t x284 = INT64_MAX;
	volatile int64_t t66 = 441849488485373547LL;

	t66 = (x281&((x282|x283)%x284));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x287 = UINT64_MAX;
	static uint64_t t67 = 76LLU;

	t67 = (x285&((x286|x287)%x288));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x289 = INT32_MIN;
	int8_t x290 = -35;
	static uint16_t x292 = UINT16_MAX;
	int32_t t68 = INT32_MIN;

	t68 = (x289&((x290|x291)%x292));

	if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x293 = INT8_MIN;
	int8_t x294 = -1;
	int32_t x295 = INT32_MIN;
	uint32_t x296 = UINT32_MAX;

	t69 = (x293&((x294|x295)%x296));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint8_t x297 = 15U;
	int16_t x298 = INT16_MAX;
	int16_t x299 = INT16_MAX;
	volatile int32_t x300 = 338824298;
	static volatile int32_t t70 = -57;

	t70 = (x297&((x298|x299)%x300));

	if (t70 != 15) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x301 = INT32_MAX;
	int32_t x302 = INT32_MIN;
	static volatile uint64_t x304 = 27LLU;
	volatile uint64_t t71 = 132157247213477184LLU;

	t71 = (x301&((x302|x303)%x304));

	if (t71 != 24LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x305 = 1896793372802075157LLU;
	static int32_t x306 = INT32_MAX;
	static uint8_t x307 = 0U;
	int8_t x308 = -1;
	volatile uint64_t t72 = 282630494LLU;

	t72 = (x305&((x306|x307)%x308));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x309 = UINT16_MAX;
	int16_t x311 = 5176;
	static int32_t t73 = -5;

	t73 = (x309&((x310|x311)%x312));

	if (t73 != 14264) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x313 = INT8_MAX;
	int64_t x314 = -1LL;
	int32_t x315 = 296691546;
	int16_t x316 = 3723;
	volatile int64_t t74 = 16721374702671LL;

	t74 = (x313&((x314|x315)%x316));

	if (t74 != 127LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x318 = 892712396U;
	volatile int16_t x319 = -1;
	static int32_t x320 = 56814;
	uint32_t t75 = 96U;

	t75 = (x317&((x318|x319)%x320));

	if (t75 != 4439U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x321 = UINT8_MAX;
	volatile int16_t x322 = 1;
	uint32_t x323 = 12027U;
	int16_t x324 = -1;

	t76 = (x321&((x322|x323)%x324));

	if (t76 != 251U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x325 = INT64_MIN;
	static uint32_t x327 = 193196U;
	uint8_t x328 = UINT8_MAX;
	int64_t t77 = -25630009015LL;

	t77 = (x325&((x326|x327)%x328));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x329 = 26U;
	static int32_t x330 = -1;
	int32_t x331 = INT32_MIN;
	static uint32_t t78 = 512009U;

	t78 = (x329&((x330|x331)%x332));

	if (t78 != 2U) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x337 = -2;
	int32_t x338 = INT32_MIN;
	uint8_t x339 = 2U;
	int8_t x340 = INT8_MIN;
	static volatile int32_t t79 = 9692;

	t79 = (x337&((x338|x339)%x340));

	if (t79 != -126) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x341 = -1;
	uint8_t x343 = 5U;
	int32_t t80 = -224667088;

	t80 = (x341&((x342|x343)%x344));

	if (t80 != -18) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x345 = -205921;
	int16_t x346 = -645;
	uint32_t x347 = 24U;
	int64_t x348 = -846692LL;
	int64_t t81 = 31LL;

	t81 = (x345&((x346|x347)%x348));

	if (t81 != 544795LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x349 = -1;
	static int8_t x350 = -40;
	uint16_t x351 = UINT16_MAX;
	uint8_t x352 = 1U;
	volatile int32_t t82 = -204;

	t82 = (x349&((x350|x351)%x352));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x353 = 31U;
	int32_t x354 = -233;
	int64_t x355 = INT64_MAX;
	int16_t x356 = 1;
	volatile int64_t t83 = -145111466LL;

	t83 = (x353&((x354|x355)%x356));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x357 = -1;
	int32_t x358 = INT32_MAX;
	uint16_t x359 = UINT16_MAX;
	int16_t x360 = INT16_MIN;
	volatile int32_t t84 = -270;

	t84 = (x357&((x358|x359)%x360));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x361 = 1079U;
	volatile int32_t x362 = -61984219;
	uint32_t x364 = 7914473U;
	uint32_t t85 = 2075U;

	t85 = (x361&((x362|x363)%x364));

	if (t85 != 49U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x365 = -1;
	volatile int8_t x366 = INT8_MIN;
	static int8_t x367 = INT8_MAX;
	static int32_t t86 = 28242938;

	t86 = (x365&((x366|x367)%x368));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x369 = 14U;
	volatile int64_t x370 = INT64_MAX;
	int8_t x371 = INT8_MAX;
	volatile int64_t t87 = -209014LL;

	t87 = (x369&((x370|x371)%x372));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x373 = INT64_MIN;
	volatile int16_t x374 = INT16_MIN;
	int16_t x376 = INT16_MIN;
	static volatile int64_t t88 = 30697762LL;

	t88 = (x373&((x374|x375)%x376));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x378 = INT16_MIN;
	int64_t x380 = -1LL;
	volatile int64_t t89 = -22053798LL;

	t89 = (x377&((x378|x379)%x380));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x381 = 3889U;
	int64_t x384 = -589833110747LL;
	volatile int64_t t90 = 408057466522LL;

	t90 = (x381&((x382|x383)%x384));

	if (t90 != 3889LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x385 = 16138U;
	int16_t x386 = 3;
	uint64_t x387 = 52748LLU;
	uint16_t x388 = 3U;

	t91 = (x385&((x386|x387)%x388));

	if (t91 != 2LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x389 = INT8_MAX;
	int32_t x390 = INT32_MIN;
	int8_t x391 = INT8_MIN;
	uint16_t x392 = UINT16_MAX;
	volatile int32_t t92 = 25746247;

	t92 = (x389&((x390|x391)%x392));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x393 = INT16_MIN;
	uint8_t x394 = 0U;
	volatile int64_t x395 = -1LL;
	volatile int64_t t93 = 140239LL;

	t93 = (x393&((x394|x395)%x396));

	if (t93 != -32768LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x397 = -1;
	uint64_t x398 = 8LLU;
	int64_t x399 = -1LL;
	static uint64_t x400 = UINT64_MAX;

	t94 = (x397&((x398|x399)%x400));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x402 = UINT64_MAX;
	int16_t x403 = -1;
	uint64_t t95 = 16244847042545LLU;

	t95 = (x401&((x402|x403)%x404));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x405 = 0;
	volatile uint8_t x406 = 1U;
	int32_t x407 = 14;

	t96 = (x405&((x406|x407)%x408));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x409 = 215187;
	int32_t x410 = INT32_MIN;
	static int8_t x412 = INT8_MIN;
	static volatile int32_t t97 = -124004055;

	t97 = (x409&((x410|x411)%x412));

	if (t97 != 215185) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x413 = 2521370397968112864LLU;
	volatile int64_t x414 = -1LL;
	int8_t x415 = INT8_MAX;

	t98 = (x413&((x414|x415)%x416));

	if (t98 != 2521370397968112864LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x417 = 48527500LLU;
	uint16_t x419 = 902U;
	uint32_t x420 = 488571984U;
	volatile uint64_t t99 = 240138LLU;

	t99 = (x417&((x418|x419)%x420));

	if (t99 != 22668LLU) { NG(); } else { ; }
	
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

