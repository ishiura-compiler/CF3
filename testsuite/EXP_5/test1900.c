#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x1 = 2244643LLU;
uint64_t t0 = 322264137567418817LLU;
int64_t t1 = 69LL;
static int64_t x13 = INT64_MIN;
int32_t x19 = -1;
volatile int64_t x22 = INT64_MIN;
uint64_t x42 = UINT64_MAX;
uint64_t t10 = 462137347503561LLU;
volatile int32_t x46 = -25480355;
uint32_t t11 = 13U;
int16_t x55 = INT16_MIN;
volatile uint64_t t13 = 8489440897584664950LLU;
int64_t t14 = -1LL;
static uint64_t x61 = 1938769573858343146LLU;
static volatile uint64_t t15 = 1557305LLU;
volatile int64_t x70 = -1LL;
static int32_t x74 = INT32_MIN;
volatile uint16_t x77 = 3889U;
int32_t x78 = -1;
int64_t x80 = -1LL;
int64_t t19 = 12210343LL;
int32_t x81 = INT32_MAX;
uint16_t x83 = UINT16_MAX;
volatile uint32_t t20 = 6U;
uint16_t x91 = 32063U;
int32_t x96 = INT32_MAX;
static int32_t x97 = INT32_MAX;
volatile int64_t x105 = -1LL;
int32_t x110 = -1;
int32_t x117 = INT32_MIN;
int64_t x119 = -1076811069298385875LL;
static int16_t x122 = INT16_MIN;
uint64_t x129 = 164181644872499LLU;
uint32_t x140 = 1496977263U;
int64_t x153 = 74LL;
int32_t x165 = 33473382;
int8_t x167 = -36;
uint64_t t42 = 2LLU;
static volatile int32_t x177 = -1;
int64_t x178 = -8413876782609LL;
static int8_t x180 = INT8_MIN;
volatile int64_t t43 = -130941877175LL;
int16_t x185 = INT16_MIN;
uint8_t x208 = 7U;
volatile int32_t t49 = 92885;
volatile int32_t x209 = INT32_MAX;
static int32_t x211 = INT32_MIN;
uint64_t x215 = 103964193206380LLU;
int64_t t52 = -911859553LL;
static volatile uint32_t x224 = 25133U;
volatile int64_t x226 = INT64_MIN;
uint64_t x228 = 32778085693LLU;
int32_t x241 = INT32_MAX;
int16_t x242 = 35;
int16_t x249 = 944;
int64_t x252 = INT64_MIN;
volatile int64_t x253 = 8528190807668LL;
int16_t x254 = 1;
int64_t t60 = 2187095464142337LL;
uint64_t t63 = 3929258LLU;
static uint64_t t65 = 916608006LLU;
uint32_t x281 = UINT32_MAX;
uint8_t x282 = 12U;
int8_t x284 = INT8_MIN;
int64_t x288 = INT64_MIN;
uint16_t x295 = UINT16_MAX;
uint32_t x297 = 30U;
int64_t x302 = INT64_MIN;
uint8_t x303 = 17U;
static int8_t x305 = -1;
int64_t x309 = INT64_MAX;
volatile int64_t x310 = INT64_MIN;
static int64_t x323 = -8751701594LL;
static volatile int64_t t76 = 28LL;
volatile int8_t x325 = -46;
int64_t x327 = INT64_MIN;
volatile int64_t t77 = -17LL;
int16_t x333 = INT16_MAX;
volatile uint32_t x338 = 684U;
volatile int32_t x347 = 6;
int64_t x352 = INT64_MAX;
volatile uint64_t t83 = 92LLU;
int8_t x358 = 14;
static volatile uint16_t x359 = 17U;
uint8_t x360 = 1U;
int32_t t85 = -53;
volatile int64_t t86 = 3096LL;
int32_t x365 = INT32_MIN;
volatile int32_t x367 = -1;
static int64_t x373 = -548950961386LL;
int16_t x377 = -320;
int32_t x384 = INT32_MIN;
static uint64_t t94 = 191LLU;
volatile int16_t x406 = INT16_MIN;
static int16_t x408 = -29;
volatile int32_t t96 = -82;
volatile uint64_t x410 = 62269LLU;
uint32_t x415 = 465424U;
static volatile int64_t x422 = -1LL;
int64_t t99 = -3176278318423LL;


void f0(void) {
	static uint8_t x2 = 25U;
	int32_t x3 = INT32_MIN;
	static volatile int8_t x4 = INT8_MIN;

	t0 = (x1-((x2|x3)/x4));

	if (t0 != 18446744073695019044LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int32_t x6 = 1114;
	int32_t x7 = INT32_MAX;
	static int64_t x8 = INT64_MIN;

	t1 = (x5-((x6|x7)/x8));

	if (t1 != 32767LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	uint64_t x10 = UINT64_MAX;
	volatile int64_t x11 = INT64_MIN;
	uint32_t x12 = UINT32_MAX;
	volatile uint64_t t2 = 127LLU;

	t2 = (x9-((x10|x11)/x12));

	if (t2 != 18446744069414584574LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x14 = UINT64_MAX;
	volatile uint32_t x15 = UINT32_MAX;
	int32_t x16 = -34;
	static uint64_t t3 = 1144717084947651LLU;

	t3 = (x13-((x14|x15)/x16));

	if (t3 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	static volatile uint8_t x18 = UINT8_MAX;
	int32_t x20 = 70740;
	static volatile int64_t t4 = INT64_MIN;

	t4 = (x17-((x18|x19)/x20));

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 101132U;
	uint64_t x23 = 3027791606156745709LLU;
	int16_t x24 = -69;
	static uint64_t t5 = 50212713LLU;

	t5 = (x21-((x22|x23)/x24));

	if (t5 != 101132LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = -372697036947496703LL;
	int8_t x26 = INT8_MIN;
	uint8_t x27 = 1U;
	static int64_t x28 = -121807727417182708LL;
	int64_t t6 = 36801989LL;

	t6 = (x25-((x26|x27)/x28));

	if (t6 != -372697036947496703LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	int16_t x30 = -1;
	int64_t x31 = 27718468812123LL;
	static volatile uint16_t x32 = 30176U;
	int64_t t7 = 15287726522454065LL;

	t7 = (x29-((x30|x31)/x32));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x33 = 8360269729LLU;
	uint16_t x34 = 47U;
	int16_t x35 = -110;
	uint8_t x36 = 3U;
	uint64_t t8 = 6811LLU;

	t8 = (x33-((x34|x35)/x36));

	if (t8 != 8360269750LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 28007U;
	static int16_t x38 = INT16_MAX;
	int16_t x39 = 105;
	uint32_t x40 = 542871U;
	uint32_t t9 = 19284U;

	t9 = (x37-((x38|x39)/x40));

	if (t9 != 28007U) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x41 = -1;
	uint64_t x43 = UINT64_MAX;
	int8_t x44 = -1;

	t10 = (x41-((x42|x43)/x44));

	if (t10 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = -8;
	int16_t x47 = INT16_MAX;
	uint32_t x48 = UINT32_MAX;

	t11 = (x45-((x46|x47)/x48));

	if (t11 != 4294967288U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 94;
	int8_t x50 = INT8_MAX;
	int8_t x51 = -46;
	int8_t x52 = INT8_MIN;
	volatile int32_t t12 = 150969010;

	t12 = (x49-((x50|x51)/x52));

	if (t12 != 94) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 796;
	uint64_t x54 = 105163147661LLU;
	int32_t x56 = INT32_MAX;

	t13 = (x53-((x54|x55)/x56));

	if (t13 != 18446744065119617817LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x57 = -1;
	int64_t x58 = -1LL;
	uint8_t x59 = 1U;
	uint32_t x60 = UINT32_MAX;

	t14 = (x57-((x58|x59)/x60));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x62 = -3125LL;
	int16_t x63 = -13;
	int8_t x64 = INT8_MIN;

	t15 = (x61-((x62|x63)/x64));

	if (t15 != 1938769573858343146LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	int32_t x66 = -45;
	int8_t x67 = -1;
	static volatile int8_t x68 = INT8_MIN;
	uint64_t t16 = UINT64_MAX;

	t16 = (x65-((x66|x67)/x68));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = UINT16_MAX;
	int8_t x71 = -1;
	static uint32_t x72 = 1156033U;
	volatile int64_t t17 = -2203LL;

	t17 = (x69-((x70|x71)/x72));

	if (t17 != 65535LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = INT32_MIN;
	int32_t x75 = INT32_MAX;
	volatile int8_t x76 = INT8_MIN;
	static int32_t t18 = INT32_MIN;

	t18 = (x73-((x74|x75)/x76));

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x79 = 130065411;

	t19 = (x77-((x78|x79)/x80));

	if (t19 != 3888LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = -495186646;
	static uint32_t x84 = 67869050U;

	t20 = (x81-((x82|x83)/x84));

	if (t20 != 2147483592U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = -1LL;
	volatile uint16_t x86 = UINT16_MAX;
	uint8_t x87 = UINT8_MAX;
	int32_t x88 = 12724359;
	static volatile int64_t t21 = 6520271048325959LL;

	t21 = (x85-((x86|x87)/x88));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = 0;
	static int16_t x90 = INT16_MIN;
	uint16_t x92 = UINT16_MAX;
	static int32_t t22 = 1351;

	t22 = (x89-((x90|x91)/x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	static uint8_t x94 = 78U;
	uint16_t x95 = 11U;
	volatile int32_t t23 = -5;

	t23 = (x93-((x94|x95)/x96));

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x98 = UINT64_MAX;
	int32_t x99 = -1;
	static uint16_t x100 = 26U;
	uint64_t t24 = 2700076LLU;

	t24 = (x97-((x98|x99)/x100));

	if (t24 != 17737253919175898663LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 0U;
	int64_t x102 = -47914731157854LL;
	uint16_t x103 = 115U;
	static int32_t x104 = -1;
	int64_t t25 = 48711526374LL;

	t25 = (x101-((x102|x103)/x104));

	if (t25 != -47914731157773LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x106 = -1;
	int8_t x107 = 7;
	static int64_t x108 = INT64_MIN;
	static volatile int64_t t26 = -697LL;

	t26 = (x105-((x106|x107)/x108));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	int8_t x111 = 3;
	volatile int8_t x112 = -22;
	volatile int64_t t27 = INT64_MIN;

	t27 = (x109-((x110|x111)/x112));

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 495U;
	static uint32_t x114 = 59400174U;
	int64_t x115 = INT64_MIN;
	int8_t x116 = INT8_MIN;
	volatile int64_t t28 = -2LL;

	t28 = (x113-((x114|x115)/x116));

	if (t28 != -72057594037463377LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = 29;
	int64_t x120 = INT64_MAX;
	int64_t t29 = 3458013287693LL;

	t29 = (x117-((x118|x119)/x120));

	if (t29 != -2147483648LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = -1;
	int32_t x123 = INT32_MAX;
	int8_t x124 = INT8_MIN;
	int32_t t30 = 88;

	t30 = (x121-((x122|x123)/x124));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x125 = INT32_MAX;
	int8_t x126 = INT8_MIN;
	int16_t x127 = INT16_MIN;
	uint32_t x128 = 112U;
	volatile uint32_t t31 = 16391594U;

	t31 = (x125-((x126|x127)/x128));

	if (t31 != 2109135726U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x130 = INT32_MIN;
	static int8_t x131 = INT8_MAX;
	static int16_t x132 = INT16_MIN;
	volatile uint64_t t32 = 283LLU;

	t32 = (x129-((x130|x131)/x132));

	if (t32 != 164181644806964LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x133 = UINT64_MAX;
	int32_t x134 = -256306825;
	static uint16_t x135 = 2U;
	int32_t x136 = INT32_MAX;
	volatile uint64_t t33 = UINT64_MAX;

	t33 = (x133-((x134|x135)/x136));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	uint8_t x138 = 7U;
	int8_t x139 = -1;
	volatile uint32_t t34 = 1929036U;

	t34 = (x137-((x138|x139)/x140));

	if (t34 != 4294967293U) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x141 = -14367;
	int32_t x142 = -1;
	int8_t x143 = 15;
	volatile int32_t x144 = INT32_MIN;
	volatile int32_t t35 = -1;

	t35 = (x141-((x142|x143)/x144));

	if (t35 != -14367) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x145 = 25U;
	int64_t x146 = -1093321498944032LL;
	static uint16_t x147 = UINT16_MAX;
	static int8_t x148 = INT8_MIN;
	volatile int64_t t36 = 3064398487818812088LL;

	t36 = (x145-((x146|x147)/x148));

	if (t36 != -8541574210023LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 9U;
	int32_t x150 = INT32_MIN;
	volatile int16_t x151 = INT16_MIN;
	static int8_t x152 = INT8_MAX;
	static int32_t t37 = 167036;

	t37 = (x149-((x150|x151)/x152));

	if (t37 != 267) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x154 = INT8_MIN;
	int8_t x155 = INT8_MAX;
	uint8_t x156 = UINT8_MAX;
	volatile int64_t t38 = 245373079295012LL;

	t38 = (x153-((x154|x155)/x156));

	if (t38 != 74LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = -1;
	uint16_t x162 = 63U;
	uint16_t x163 = 2U;
	volatile int32_t x164 = INT32_MIN;
	volatile int32_t t39 = -970236634;

	t39 = (x161-((x162|x163)/x164));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x166 = INT32_MIN;
	int16_t x168 = INT16_MIN;
	static volatile int32_t t40 = 30821;

	t40 = (x165-((x166|x167)/x168));

	if (t40 != 33473382) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x169 = INT32_MIN;
	int8_t x170 = INT8_MAX;
	uint32_t x171 = 46U;
	int8_t x172 = INT8_MIN;
	uint32_t t41 = 1U;

	t41 = (x169-((x170|x171)/x172));

	if (t41 != 2147483648U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = INT16_MIN;
	volatile uint64_t x174 = 13362587LLU;
	int8_t x175 = INT8_MIN;
	uint16_t x176 = 4U;

	t42 = (x173-((x174|x175)/x176));

	if (t42 != 13835058055282130970LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x179 = 0U;

	t43 = (x177-((x178|x179)/x180));

	if (t43 != -65733412365LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x186 = 0;
	static uint16_t x187 = 415U;
	uint16_t x188 = 776U;
	int32_t t44 = -231362726;

	t44 = (x185-((x186|x187)/x188));

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = INT8_MAX;
	int16_t x190 = 0;
	volatile uint64_t x191 = 47884402355862LLU;
	int64_t x192 = -1617LL;
	volatile uint64_t t45 = 40840LLU;

	t45 = (x189-((x190|x191)/x192));

	if (t45 != 127LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x193 = INT8_MIN;
	int8_t x194 = INT8_MIN;
	volatile int8_t x195 = -1;
	volatile int64_t x196 = 313LL;
	int64_t t46 = 9266166067LL;

	t46 = (x193-((x194|x195)/x196));

	if (t46 != -128LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = 21;
	int64_t x198 = -7LL;
	static uint64_t x199 = 57376175302512LLU;
	static int64_t x200 = INT64_MIN;
	volatile uint64_t t47 = 7815194803955LLU;

	t47 = (x197-((x198|x199)/x200));

	if (t47 != 20LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = 122;
	int32_t x202 = INT32_MIN;
	uint64_t x203 = 10LLU;
	int8_t x204 = INT8_MIN;
	static volatile uint64_t t48 = 1LLU;

	t48 = (x201-((x202|x203)/x204));

	if (t48 != 122LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x205 = INT8_MIN;
	int32_t x206 = -1;
	uint8_t x207 = UINT8_MAX;

	t49 = (x205-((x206|x207)/x208));

	if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x210 = UINT64_MAX;
	int16_t x212 = INT16_MIN;
	volatile uint64_t t50 = 159291352108611LLU;

	t50 = (x209-((x210|x211)/x212));

	if (t50 != 2147483646LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x213 = -1;
	uint16_t x214 = 1578U;
	uint8_t x216 = 1U;
	uint64_t t51 = 3937297LLU;

	t51 = (x213-((x214|x215)/x216));

	if (t51 != 18446640109516343697LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x217 = UINT8_MAX;
	int32_t x218 = INT32_MAX;
	int8_t x219 = INT8_MIN;
	int64_t x220 = -4755764007969904LL;

	t52 = (x217-((x218|x219)/x220));

	if (t52 != 255LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x221 = UINT32_MAX;
	static int8_t x222 = INT8_MIN;
	uint64_t x223 = 480085854752814254LLU;
	volatile uint64_t t53 = 358837915150LLU;

	t53 = (x221-((x222|x223)/x224));

	if (t53 != 18446010112935736452LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x225 = -1;
	int8_t x227 = INT8_MIN;
	volatile uint64_t t54 = 38630090834497LLU;

	t54 = (x225-((x226|x227)/x228));

	if (t54 != 18446744073146774880LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x229 = -58922071976999LL;
	int64_t x230 = INT64_MIN;
	int32_t x231 = -1;
	uint64_t x232 = UINT64_MAX;
	volatile uint64_t t55 = 6034311791804313332LLU;

	t55 = (x229-((x230|x231)/x232));

	if (t55 != 18446685151637574616LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x237 = 40;
	int32_t x238 = -2008;
	int64_t x239 = INT64_MAX;
	int8_t x240 = -1;
	int64_t t56 = -5629254619LL;

	t56 = (x237-((x238|x239)/x240));

	if (t56 != 39LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x243 = 5LLU;
	static int16_t x244 = INT16_MAX;
	uint64_t t57 = 339150676117678306LLU;

	t57 = (x241-((x242|x243)/x244));

	if (t57 != 2147483647LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x245 = 560523421608LL;
	uint8_t x246 = UINT8_MAX;
	uint64_t x247 = 236086336023914LLU;
	static int16_t x248 = INT16_MIN;
	uint64_t t58 = 12582133LLU;

	t58 = (x245-((x246|x247)/x248));

	if (t58 != 560523421608LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x250 = INT16_MIN;
	int16_t x251 = INT16_MIN;
	int64_t t59 = 18269337870873LL;

	t59 = (x249-((x250|x251)/x252));

	if (t59 != 944LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x255 = INT8_MAX;
	uint16_t x256 = 224U;

	t60 = (x253-((x254|x255)/x256));

	if (t60 != 8528190807668LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x257 = UINT16_MAX;
	int32_t x258 = INT32_MIN;
	int8_t x259 = INT8_MIN;
	uint16_t x260 = UINT16_MAX;
	int32_t t61 = -174564618;

	t61 = (x257-((x258|x259)/x260));

	if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x265 = INT32_MIN;
	uint64_t x266 = 674LLU;
	static volatile int64_t x267 = -1LL;
	static int32_t x268 = INT32_MAX;
	volatile uint64_t t62 = 10673030950960317LLU;

	t62 = (x265-((x266|x267)/x268));

	if (t62 != 18446744062972133372LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = -75682LL;
	uint8_t x270 = 31U;
	uint64_t x271 = 3200739LLU;
	static int16_t x272 = 2439;

	t63 = (x269-((x270|x271)/x272));

	if (t63 != 18446744073709474622LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x273 = 2;
	uint16_t x274 = 2341U;
	static int64_t x275 = 703419LL;
	static int32_t x276 = -640;
	static volatile int64_t t64 = -24361022588LL;

	t64 = (x273-((x274|x275)/x276));

	if (t64 != 1101LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x277 = 52;
	static int16_t x278 = INT16_MAX;
	static uint64_t x279 = 2081912LLU;
	int16_t x280 = INT16_MIN;

	t65 = (x277-((x278|x279)/x280));

	if (t65 != 52LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x283 = -1;
	static uint32_t t66 = UINT32_MAX;

	t66 = (x281-((x282|x283)/x284));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x285 = UINT32_MAX;
	int16_t x286 = INT16_MIN;
	int32_t x287 = INT32_MAX;
	int64_t t67 = 2964596458210LL;

	t67 = (x285-((x286|x287)/x288));

	if (t67 != 4294967295LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x289 = INT32_MAX;
	static int16_t x290 = INT16_MIN;
	static uint16_t x291 = UINT16_MAX;
	volatile int32_t x292 = -1;
	int32_t t68 = -59;

	t68 = (x289-((x290|x291)/x292));

	if (t68 != 2147483646) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x293 = 0U;
	volatile int32_t x294 = INT32_MAX;
	int16_t x296 = INT16_MIN;
	uint32_t t69 = 432691801U;

	t69 = (x293-((x294|x295)/x296));

	if (t69 != 65535U) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x298 = -1;
	uint64_t x299 = 8761LLU;
	volatile int64_t x300 = 7365240LL;
	uint64_t t70 = 127882140LLU;

	t70 = (x297-((x298|x299)/x300));

	if (t70 != 18446741569141598164LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x301 = INT32_MIN;
	int8_t x304 = INT8_MIN;
	volatile int64_t t71 = 118LL;

	t71 = (x301-((x302|x303)/x304));

	if (t71 != -72057596185411583LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x306 = UINT16_MAX;
	int16_t x307 = INT16_MIN;
	int16_t x308 = 194;
	static int32_t t72 = -49;

	t72 = (x305-((x306|x307)/x308));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x311 = UINT64_MAX;
	uint32_t x312 = 228486U;
	volatile uint64_t t73 = 187763072643514328LLU;

	t73 = (x309-((x310|x311)/x312));

	if (t73 != 9223291302174866712LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x313 = 1018979378791347251LLU;
	int8_t x314 = INT8_MAX;
	volatile int16_t x315 = INT16_MIN;
	volatile int8_t x316 = INT8_MIN;
	static volatile uint64_t t74 = 4710782573031571LLU;

	t74 = (x313-((x314|x315)/x316));

	if (t74 != 1018979378791346996LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x317 = INT8_MIN;
	int8_t x318 = -1;
	volatile int64_t x319 = INT64_MIN;
	uint32_t x320 = 912U;
	volatile int64_t t75 = -916292LL;

	t75 = (x317-((x318|x319)/x320));

	if (t75 != -128LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x321 = -1;
	uint16_t x322 = 3740U;
	static volatile uint16_t x324 = 13397U;

	t76 = (x321-((x322|x323)/x324));

	if (t76 != 653257LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x326 = -117LL;
	int64_t x328 = 25LL;

	t77 = (x325-((x326|x327)/x328));

	if (t77 != -42LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x329 = -1;
	int64_t x330 = -7760799LL;
	int64_t x331 = -1LL;
	volatile int8_t x332 = INT8_MIN;
	int64_t t78 = -803045462267928LL;

	t78 = (x329-((x330|x331)/x332));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x334 = -1LL;
	volatile int8_t x335 = INT8_MAX;
	static volatile uint8_t x336 = 1U;
	int64_t t79 = -108566425LL;

	t79 = (x333-((x334|x335)/x336));

	if (t79 != 32768LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x337 = 12LLU;
	uint32_t x339 = 68607200U;
	uint8_t x340 = 8U;
	uint64_t t80 = 1355061732LLU;

	t80 = (x337-((x338|x339)/x340));

	if (t80 != 18446744073700975663LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x341 = 1U;
	volatile uint64_t x342 = 5LLU;
	uint64_t x343 = 1205713658997312930LLU;
	int64_t x344 = INT64_MAX;
	volatile uint64_t t81 = 152895LLU;

	t81 = (x341-((x342|x343)/x344));

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x345 = -1;
	uint64_t x346 = UINT64_MAX;
	uint32_t x348 = 970054416U;
	static uint64_t t82 = 159026LLU;

	t82 = (x345-((x346|x347)/x348));

	if (t82 != 18446744054693356473LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x349 = UINT16_MAX;
	static uint64_t x350 = 117347LLU;
	uint16_t x351 = 16364U;

	t83 = (x349-((x350|x351)/x352));

	if (t83 != 65535LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x353 = -1LL;
	int32_t x354 = INT32_MIN;
	static volatile uint8_t x355 = UINT8_MAX;
	uint16_t x356 = 2U;
	int64_t t84 = 12488LL;

	t84 = (x353-((x354|x355)/x356));

	if (t84 != 1073741695LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x357 = 21;

	t85 = (x357-((x358|x359)/x360));

	if (t85 != -10) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x361 = -31;
	int64_t x362 = 21502613799438768LL;
	volatile uint16_t x363 = 4672U;
	uint16_t x364 = UINT16_MAX;

	t86 = (x361-((x362|x363)/x364));

	if (t86 != -328108854832LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x366 = 0U;
	static int8_t x368 = INT8_MAX;
	volatile int32_t t87 = INT32_MIN;

	t87 = (x365-((x366|x367)/x368));

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x369 = INT8_MIN;
	int32_t x370 = INT32_MAX;
	volatile uint32_t x371 = UINT32_MAX;
	static volatile int32_t x372 = -3077;
	volatile uint32_t t88 = 24962U;

	t88 = (x369-((x370|x371)/x372));

	if (t88 != 4294967167U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x374 = INT16_MIN;
	volatile uint32_t x375 = 1U;
	int64_t x376 = INT64_MIN;
	int64_t t89 = -4649027486LL;

	t89 = (x373-((x374|x375)/x376));

	if (t89 != -548950961386LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x378 = 3811422LLU;
	int8_t x379 = 1;
	int8_t x380 = 1;
	volatile uint64_t t90 = 6LLU;

	t90 = (x377-((x378|x379)/x380));

	if (t90 != 18446744073705739873LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x381 = -1;
	static int32_t x382 = INT32_MIN;
	static int32_t x383 = INT32_MIN;
	volatile int32_t t91 = -10;

	t91 = (x381-((x382|x383)/x384));

	if (t91 != -2) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x385 = 2;
	uint64_t x386 = UINT64_MAX;
	uint32_t x387 = 154883682U;
	int16_t x388 = INT16_MIN;
	volatile uint64_t t92 = 8281491LLU;

	t92 = (x385-((x386|x387)/x388));

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x389 = -1;
	int16_t x390 = INT16_MAX;
	int32_t x391 = INT32_MIN;
	uint16_t x392 = 102U;
	int32_t t93 = 0;

	t93 = (x389-((x390|x391)/x392));

	if (t93 != 21053439) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x397 = INT16_MIN;
	static volatile uint64_t x398 = UINT64_MAX;
	static uint16_t x399 = 8501U;
	int64_t x400 = -13601LL;

	t94 = (x397-((x398|x399)/x400));

	if (t94 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x401 = UINT16_MAX;
	uint64_t x402 = 810262798526699LLU;
	int8_t x403 = INT8_MAX;
	static uint8_t x404 = UINT8_MAX;
	volatile uint64_t t95 = 120391241568168770LLU;

	t95 = (x401-((x402|x403)/x404));

	if (t95 != 18446740896208446458LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x405 = -1;
	int8_t x407 = -1;

	t96 = (x405-((x406|x407)/x408));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x409 = 1;
	int16_t x411 = INT16_MAX;
	volatile uint32_t x412 = 16U;
	static volatile uint64_t t97 = 8169011021427LLU;

	t97 = (x409-((x410|x411)/x412));

	if (t97 != 18446744073709547522LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x413 = 121;
	static int8_t x414 = INT8_MAX;
	static volatile uint16_t x416 = UINT16_MAX;
	volatile uint32_t t98 = 1403817410U;

	t98 = (x413-((x414|x415)/x416));

	if (t98 != 114U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x421 = -3;
	int32_t x423 = INT32_MIN;
	int16_t x424 = -1;

	t99 = (x421-((x422|x423)/x424));

	if (t99 != -4LL) { NG(); } else { ; }
	
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

