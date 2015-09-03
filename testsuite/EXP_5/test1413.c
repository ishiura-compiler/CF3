#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = 5;
static int64_t x15 = INT64_MIN;
uint16_t x17 = 3U;
volatile int8_t x19 = -1;
static volatile int32_t t5 = -2029959;
static volatile int32_t t6 = -483401;
volatile int64_t x32 = INT64_MIN;
int16_t x37 = INT16_MIN;
int16_t x41 = -1;
static int16_t x44 = -1;
volatile int32_t t16 = 0;
volatile int64_t x69 = INT64_MIN;
int32_t t18 = -467177174;
int8_t x80 = INT8_MIN;
volatile uint64_t x89 = 43029959720044LLU;
static uint64_t x94 = 3226LLU;
static int64_t x96 = INT64_MIN;
volatile int32_t t23 = -9611;
static int32_t x116 = -1347355;
volatile int32_t x120 = INT32_MAX;
volatile uint32_t x124 = 247604377U;
uint8_t x130 = 5U;
volatile int8_t x136 = INT8_MIN;
int64_t x137 = 33454047512LL;
uint32_t x140 = UINT32_MAX;
int32_t t34 = -8911;
static uint32_t x145 = UINT32_MAX;
int16_t x149 = INT16_MIN;
static int16_t x150 = INT16_MIN;
static uint64_t x154 = UINT64_MAX;
int32_t x156 = INT32_MAX;
static int32_t x163 = 241051;
volatile int32_t t39 = 3164;
int16_t x166 = INT16_MAX;
volatile int32_t t44 = -3478940;
volatile int32_t t46 = -47812;
volatile uint32_t x202 = 5U;
static int16_t x204 = INT16_MAX;
volatile uint16_t x206 = 7U;
volatile uint32_t x217 = 255356057U;
int64_t x218 = INT64_MAX;
int16_t x220 = -1;
int32_t t54 = 249421455;
static volatile uint64_t x233 = UINT64_MAX;
volatile uint32_t x239 = 258856U;
uint16_t x244 = 495U;
int32_t t58 = -658767;
int64_t x245 = INT64_MIN;
uint64_t x248 = UINT64_MAX;
volatile uint8_t x260 = UINT8_MAX;
static uint16_t x263 = 647U;
uint16_t x269 = 3766U;
static volatile int32_t t64 = -3;
volatile int32_t x274 = INT32_MAX;
int32_t t67 = 30;
uint32_t x289 = 43772573U;
volatile uint64_t x301 = 10448516924210LLU;
uint64_t x303 = 59LLU;
volatile int8_t x310 = INT8_MIN;
int16_t x311 = -1;
static uint32_t x315 = UINT32_MAX;
uint8_t x319 = 40U;
int8_t x324 = -57;
uint32_t x327 = 275293205U;
int8_t x332 = -2;
int32_t x335 = -1;
int64_t x339 = INT64_MAX;
static int16_t x342 = 7;
int32_t x345 = -1;
volatile int16_t x346 = -6;
static volatile int32_t t83 = 173218119;
int32_t x357 = -1439;
int16_t x361 = INT16_MIN;
uint8_t x362 = 9U;
static int32_t x364 = INT32_MIN;
volatile int8_t x365 = INT8_MIN;
volatile uint32_t x372 = 718984U;
int32_t x373 = INT32_MAX;
int16_t x375 = -1;
int32_t x384 = INT32_MIN;
int32_t x385 = INT32_MIN;
int32_t t93 = -175;
int32_t t94 = 295315084;
volatile uint16_t x393 = 14U;
int16_t x394 = INT16_MAX;
volatile int16_t x396 = INT16_MIN;
int16_t x403 = 2972;
volatile int32_t t97 = 1;
int16_t x412 = -1;


void f0(void) {
	uint64_t x1 = 51969LLU;
	volatile int16_t x2 = 1815;
	int32_t x3 = 185225419;
	static uint64_t x4 = UINT64_MAX;
	int32_t t0 = -68293802;

	t0 = (x1<((x2<x3)%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int8_t x7 = -4;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = 6;

	t1 = (x5<((x6<x7)%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MIN;
	int64_t x10 = INT64_MIN;
	int16_t x11 = INT16_MAX;
	uint16_t x12 = 1570U;
	int32_t t2 = -1;

	t2 = (x9<((x10<x11)%x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MIN;
	int64_t x14 = INT64_MIN;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 327772;

	t3 = (x13<((x14<x15)%x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = INT64_MAX;
	static volatile int32_t x20 = INT32_MAX;
	volatile int32_t t4 = 241437296;

	t4 = (x17<((x18<x19)%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = INT8_MIN;
	uint16_t x22 = 46U;
	int64_t x23 = INT64_MAX;
	int8_t x24 = -1;

	t5 = (x21<((x22<x23)%x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	uint16_t x26 = UINT16_MAX;
	int16_t x27 = -1;
	int32_t x28 = INT32_MAX;

	t6 = (x25<((x26<x27)%x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = 14;
	int32_t x30 = -1;
	volatile uint16_t x31 = 28259U;
	volatile int32_t t7 = -5385;

	t7 = (x29<((x30<x31)%x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int32_t x34 = INT32_MIN;
	volatile int8_t x35 = -1;
	int16_t x36 = -1;
	static volatile int32_t t8 = 11;

	t8 = (x33<((x34<x35)%x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = -17;
	volatile int64_t x39 = -1LL;
	int64_t x40 = -423568077624LL;
	int32_t t9 = -159384;

	t9 = (x37<((x38<x39)%x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x42 = INT32_MIN;
	uint32_t x43 = 5U;
	volatile int32_t t10 = -92674;

	t10 = (x41<((x42<x43)%x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 0U;
	static uint16_t x46 = UINT16_MAX;
	static int32_t x47 = INT32_MAX;
	volatile uint16_t x48 = 12U;
	int32_t t11 = -111345604;

	t11 = (x45<((x46<x47)%x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x49 = INT64_MIN;
	uint16_t x50 = 13019U;
	static uint64_t x51 = 7653396015045101LLU;
	uint8_t x52 = 12U;
	volatile int32_t t12 = -13;

	t12 = (x49<((x50<x51)%x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x53 = 3U;
	uint8_t x54 = 1U;
	volatile int16_t x55 = INT16_MIN;
	int8_t x56 = INT8_MIN;
	volatile int32_t t13 = -1235097;

	t13 = (x53<((x54<x55)%x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	int16_t x58 = INT16_MAX;
	uint32_t x59 = UINT32_MAX;
	uint8_t x60 = UINT8_MAX;
	int32_t t14 = 28102;

	t14 = (x57<((x58<x59)%x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = INT16_MAX;
	int8_t x62 = 1;
	static int64_t x63 = INT64_MIN;
	uint8_t x64 = 6U;
	volatile int32_t t15 = 12049972;

	t15 = (x61<((x62<x63)%x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MAX;
	uint64_t x66 = UINT64_MAX;
	uint32_t x67 = 878101U;
	int32_t x68 = INT32_MAX;

	t16 = (x65<((x66<x67)%x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = INT32_MIN;
	uint8_t x71 = 2U;
	int64_t x72 = 54929LL;
	static int32_t t17 = -28659;

	t17 = (x69<((x70<x71)%x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = INT8_MIN;
	int64_t x74 = 4634137427224LL;
	int8_t x75 = -1;
	int8_t x76 = -1;

	t18 = (x73<((x74<x75)%x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -1;
	int32_t x78 = 33753713;
	volatile int32_t x79 = INT32_MAX;
	volatile int32_t t19 = 460858067;

	t19 = (x77<((x78<x79)%x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = INT32_MIN;
	volatile uint16_t x82 = UINT16_MAX;
	static volatile int16_t x83 = INT16_MAX;
	static int8_t x84 = -1;
	int32_t t20 = 700661;

	t20 = (x81<((x82<x83)%x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	int8_t x86 = -1;
	int64_t x87 = -1LL;
	int16_t x88 = INT16_MIN;
	volatile int32_t t21 = 0;

	t21 = (x85<((x86<x87)%x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x90 = INT16_MIN;
	int64_t x91 = -7046679830LL;
	volatile int32_t x92 = 4;
	static volatile int32_t t22 = -6237530;

	t22 = (x89<((x90<x91)%x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 268336001U;
	int64_t x95 = INT64_MIN;

	t23 = (x93<((x94<x95)%x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = UINT32_MAX;
	uint16_t x98 = UINT16_MAX;
	volatile uint16_t x99 = 660U;
	int16_t x100 = 15;
	static volatile int32_t t24 = -10969513;

	t24 = (x97<((x98<x99)%x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = -1;
	uint16_t x102 = 170U;
	static uint8_t x103 = UINT8_MAX;
	uint32_t x104 = 164345692U;
	volatile int32_t t25 = -20;

	t25 = (x101<((x102<x103)%x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = INT16_MAX;
	static int64_t x106 = -36491958482159LL;
	int16_t x107 = INT16_MIN;
	uint16_t x108 = 49U;
	int32_t t26 = -119262;

	t26 = (x105<((x106<x107)%x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -3LL;
	volatile uint16_t x110 = 4U;
	static uint8_t x111 = UINT8_MAX;
	int16_t x112 = INT16_MIN;
	int32_t t27 = -49169;

	t27 = (x109<((x110<x111)%x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -1;
	uint32_t x114 = 3670983U;
	uint64_t x115 = 258527430182LLU;
	int32_t t28 = -2;

	t28 = (x113<((x114<x115)%x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	int16_t x118 = -5026;
	uint16_t x119 = 4335U;
	int32_t t29 = 3;

	t29 = (x117<((x118<x119)%x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 32536177150900974LLU;
	int64_t x122 = -1LL;
	uint8_t x123 = 98U;
	volatile int32_t t30 = 0;

	t30 = (x121<((x122<x123)%x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = -1LL;
	static uint64_t x126 = 176991896306459043LLU;
	int64_t x127 = -1LL;
	uint16_t x128 = 395U;
	int32_t t31 = -197631;

	t31 = (x125<((x126<x127)%x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 0U;
	int8_t x131 = -1;
	uint32_t x132 = 10U;
	int32_t t32 = 30003;

	t32 = (x129<((x130<x131)%x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	int64_t x134 = INT64_MAX;
	uint32_t x135 = UINT32_MAX;
	volatile int32_t t33 = -10566;

	t33 = (x133<((x134<x135)%x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x138 = 570778929;
	int32_t x139 = 1411;

	t34 = (x137<((x138<x139)%x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -7647786;
	static int8_t x142 = INT8_MAX;
	int32_t x143 = INT32_MIN;
	int16_t x144 = INT16_MIN;
	static volatile int32_t t35 = 6;

	t35 = (x141<((x142<x143)%x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x146 = INT8_MIN;
	int8_t x147 = INT8_MAX;
	int16_t x148 = -223;
	int32_t t36 = 1849439;

	t36 = (x145<((x146<x147)%x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x151 = -1LL;
	uint32_t x152 = 547586U;
	static volatile int32_t t37 = -615185931;

	t37 = (x149<((x150<x151)%x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	int64_t x155 = INT64_MIN;
	static volatile int32_t t38 = 520317;

	t38 = (x153<((x154<x155)%x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x161 = INT32_MIN;
	volatile int16_t x162 = -4;
	uint64_t x164 = 96247884996362193LLU;

	t39 = (x161<((x162<x163)%x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = -35226019467669303LL;
	static int16_t x167 = -1;
	static uint32_t x168 = 161476499U;
	volatile int32_t t40 = 31662;

	t40 = (x165<((x166<x167)%x168));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x169 = INT64_MAX;
	static int64_t x170 = 2239782188208142LL;
	uint8_t x171 = 21U;
	static int32_t x172 = INT32_MAX;
	volatile int32_t t41 = -85812;

	t41 = (x169<((x170<x171)%x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x173 = INT8_MIN;
	static uint64_t x174 = 218LLU;
	int64_t x175 = 135429025507077LL;
	int32_t x176 = INT32_MIN;
	static int32_t t42 = -117;

	t42 = (x173<((x174<x175)%x176));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = INT64_MAX;
	int16_t x182 = -1047;
	int16_t x183 = -6415;
	int32_t x184 = -560;
	int32_t t43 = 9873;

	t43 = (x181<((x182<x183)%x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = INT16_MAX;
	static int32_t x186 = -1;
	static int8_t x187 = 3;
	uint16_t x188 = 4U;

	t44 = (x185<((x186<x187)%x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x189 = 13679U;
	int16_t x190 = INT16_MIN;
	static uint64_t x191 = UINT64_MAX;
	uint64_t x192 = 240560LLU;
	static int32_t t45 = -201081;

	t45 = (x189<((x190<x191)%x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = INT64_MAX;
	volatile uint32_t x194 = 2108U;
	int8_t x195 = INT8_MIN;
	int16_t x196 = -1;

	t46 = (x193<((x194<x195)%x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x197 = -1LL;
	static int16_t x198 = INT16_MIN;
	uint16_t x199 = UINT16_MAX;
	int8_t x200 = 2;
	volatile int32_t t47 = 112;

	t47 = (x197<((x198<x199)%x200));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = -1;
	static uint32_t x203 = 11U;
	volatile int32_t t48 = 236;

	t48 = (x201<((x202<x203)%x204));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x205 = 6U;
	int8_t x207 = 23;
	int16_t x208 = INT16_MIN;
	static int32_t t49 = 22308;

	t49 = (x205<((x206<x207)%x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x209 = -18;
	uint16_t x210 = UINT16_MAX;
	static volatile int64_t x211 = INT64_MAX;
	int32_t x212 = INT32_MAX;
	volatile int32_t t50 = -20881095;

	t50 = (x209<((x210<x211)%x212));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x213 = 46050437923760LLU;
	int64_t x214 = -383037588LL;
	int8_t x215 = INT8_MAX;
	int16_t x216 = INT16_MAX;
	volatile int32_t t51 = -7;

	t51 = (x213<((x214<x215)%x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x219 = 1461LLU;
	volatile int32_t t52 = -1;

	t52 = (x217<((x218<x219)%x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x221 = -1;
	volatile uint32_t x222 = UINT32_MAX;
	volatile uint8_t x223 = 101U;
	volatile uint8_t x224 = UINT8_MAX;
	volatile int32_t t53 = 1309;

	t53 = (x221<((x222<x223)%x224));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x225 = UINT8_MAX;
	int32_t x226 = INT32_MAX;
	int8_t x227 = INT8_MAX;
	int32_t x228 = INT32_MAX;

	t54 = (x225<((x226<x227)%x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x229 = INT64_MIN;
	volatile uint16_t x230 = UINT16_MAX;
	int32_t x231 = -69;
	int64_t x232 = INT64_MIN;
	volatile int32_t t55 = -443828394;

	t55 = (x229<((x230<x231)%x232));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x234 = INT8_MAX;
	uint32_t x235 = 8610U;
	volatile int16_t x236 = -1;
	int32_t t56 = -21411;

	t56 = (x233<((x234<x235)%x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x237 = UINT8_MAX;
	int32_t x238 = 965727;
	int16_t x240 = INT16_MIN;
	volatile int32_t t57 = 2052;

	t57 = (x237<((x238<x239)%x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x241 = 6U;
	int64_t x242 = INT64_MIN;
	volatile int16_t x243 = INT16_MAX;

	t58 = (x241<((x242<x243)%x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x246 = INT8_MAX;
	uint8_t x247 = UINT8_MAX;
	volatile int32_t t59 = 1;

	t59 = (x245<((x246<x247)%x248));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x249 = UINT32_MAX;
	int64_t x250 = INT64_MAX;
	uint16_t x251 = UINT16_MAX;
	int32_t x252 = INT32_MIN;
	volatile int32_t t60 = -756;

	t60 = (x249<((x250<x251)%x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = INT32_MIN;
	int64_t x254 = INT64_MAX;
	volatile int16_t x255 = -5712;
	static volatile int64_t x256 = INT64_MIN;
	volatile int32_t t61 = 45884316;

	t61 = (x253<((x254<x255)%x256));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = -1;
	static int16_t x258 = INT16_MIN;
	uint16_t x259 = UINT16_MAX;
	volatile int32_t t62 = -27695666;

	t62 = (x257<((x258<x259)%x260));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x261 = 15;
	uint64_t x262 = 152751839499936671LLU;
	static int32_t x264 = INT32_MAX;
	static volatile int32_t t63 = 15852407;

	t63 = (x261<((x262<x263)%x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x270 = 137439212974859768LLU;
	uint32_t x271 = UINT32_MAX;
	volatile int8_t x272 = INT8_MAX;

	t64 = (x269<((x270<x271)%x272));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x273 = INT64_MAX;
	volatile int32_t x275 = INT32_MIN;
	int16_t x276 = INT16_MIN;
	volatile int32_t t65 = -99105808;

	t65 = (x273<((x274<x275)%x276));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x277 = INT32_MIN;
	volatile int16_t x278 = INT16_MAX;
	int64_t x279 = -1LL;
	int8_t x280 = INT8_MIN;
	volatile int32_t t66 = 1472;

	t66 = (x277<((x278<x279)%x280));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x281 = INT8_MIN;
	static int64_t x282 = -18343669334453LL;
	int8_t x283 = INT8_MAX;
	static volatile int64_t x284 = INT64_MIN;

	t67 = (x281<((x282<x283)%x284));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x285 = 0U;
	static int8_t x286 = INT8_MIN;
	uint16_t x287 = 67U;
	int16_t x288 = INT16_MIN;
	int32_t t68 = -106673619;

	t68 = (x285<((x286<x287)%x288));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x290 = -1;
	int32_t x291 = INT32_MAX;
	int32_t x292 = 10515;
	static int32_t t69 = -308945;

	t69 = (x289<((x290<x291)%x292));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x293 = 66U;
	static volatile int8_t x294 = INT8_MIN;
	int16_t x295 = INT16_MIN;
	static volatile int64_t x296 = INT64_MIN;
	static volatile int32_t t70 = 22366045;

	t70 = (x293<((x294<x295)%x296));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x297 = -1;
	volatile int32_t x298 = INT32_MIN;
	volatile int32_t x299 = INT32_MAX;
	int16_t x300 = INT16_MIN;
	int32_t t71 = 1;

	t71 = (x297<((x298<x299)%x300));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x302 = UINT32_MAX;
	int8_t x304 = INT8_MIN;
	volatile int32_t t72 = -12471;

	t72 = (x301<((x302<x303)%x304));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x305 = INT64_MIN;
	int8_t x306 = INT8_MIN;
	static int64_t x307 = 158235664LL;
	volatile int16_t x308 = INT16_MAX;
	volatile int32_t t73 = 33;

	t73 = (x305<((x306<x307)%x308));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x309 = -1376651;
	static int16_t x312 = INT16_MIN;
	volatile int32_t t74 = -94411;

	t74 = (x309<((x310<x311)%x312));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x313 = INT32_MIN;
	uint32_t x314 = UINT32_MAX;
	uint16_t x316 = UINT16_MAX;
	volatile int32_t t75 = 25651;

	t75 = (x313<((x314<x315)%x316));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x317 = 8859U;
	int16_t x318 = INT16_MAX;
	static uint32_t x320 = UINT32_MAX;
	volatile int32_t t76 = 18692;

	t76 = (x317<((x318<x319)%x320));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x321 = UINT32_MAX;
	int8_t x322 = 7;
	int16_t x323 = INT16_MIN;
	int32_t t77 = 863100;

	t77 = (x321<((x322<x323)%x324));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x325 = UINT64_MAX;
	uint32_t x326 = 28U;
	int8_t x328 = -20;
	static volatile int32_t t78 = 65580655;

	t78 = (x325<((x326<x327)%x328));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x329 = 5;
	volatile int16_t x330 = INT16_MIN;
	volatile uint64_t x331 = 3018255539440172175LLU;
	volatile int32_t t79 = 2723;

	t79 = (x329<((x330<x331)%x332));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x333 = 10689U;
	uint16_t x334 = 1224U;
	static int16_t x336 = -1;
	static volatile int32_t t80 = -1;

	t80 = (x333<((x334<x335)%x336));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x337 = 208;
	int32_t x338 = 3;
	volatile uint64_t x340 = 254576756240259323LLU;
	int32_t t81 = 45436;

	t81 = (x337<((x338<x339)%x340));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x341 = 1671;
	volatile int16_t x343 = -1;
	static uint32_t x344 = 22341U;
	int32_t t82 = 362955;

	t82 = (x341<((x342<x343)%x344));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x347 = INT8_MIN;
	volatile int64_t x348 = INT64_MAX;

	t83 = (x345<((x346<x347)%x348));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x349 = -1LL;
	int8_t x350 = -1;
	uint16_t x351 = 3U;
	uint64_t x352 = 1063155788664LLU;
	int32_t t84 = 1362;

	t84 = (x349<((x350<x351)%x352));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x353 = INT32_MIN;
	int16_t x354 = -1;
	int16_t x355 = INT16_MIN;
	uint32_t x356 = UINT32_MAX;
	int32_t t85 = 2931523;

	t85 = (x353<((x354<x355)%x356));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x358 = UINT16_MAX;
	uint32_t x359 = 259546243U;
	int32_t x360 = -416833491;
	static volatile int32_t t86 = 22631538;

	t86 = (x357<((x358<x359)%x360));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x363 = 2U;
	volatile int32_t t87 = -1;

	t87 = (x361<((x362<x363)%x364));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x366 = 93U;
	int32_t x367 = -1;
	int8_t x368 = INT8_MAX;
	int32_t t88 = 163889974;

	t88 = (x365<((x366<x367)%x368));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x369 = 1U;
	uint8_t x370 = 10U;
	int32_t x371 = -1;
	volatile int32_t t89 = -67;

	t89 = (x369<((x370<x371)%x372));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x374 = -1LL;
	volatile int8_t x376 = INT8_MAX;
	volatile int32_t t90 = -393;

	t90 = (x373<((x374<x375)%x376));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x377 = INT16_MAX;
	int64_t x378 = -1LL;
	int32_t x379 = 46704;
	static int16_t x380 = INT16_MIN;
	volatile int32_t t91 = -29548;

	t91 = (x377<((x378<x379)%x380));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x381 = INT64_MIN;
	uint32_t x382 = 928U;
	int64_t x383 = -1LL;
	volatile int32_t t92 = -11392528;

	t92 = (x381<((x382<x383)%x384));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x386 = INT16_MAX;
	volatile uint8_t x387 = 26U;
	int32_t x388 = -30508887;

	t93 = (x385<((x386<x387)%x388));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x389 = -34;
	static int8_t x390 = INT8_MAX;
	volatile uint16_t x391 = 1511U;
	static int16_t x392 = INT16_MIN;

	t94 = (x389<((x390<x391)%x392));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x395 = INT64_MAX;
	static int32_t t95 = 9;

	t95 = (x393<((x394<x395)%x396));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x397 = 1U;
	static int64_t x398 = INT64_MIN;
	static volatile uint16_t x399 = UINT16_MAX;
	int8_t x400 = -3;
	volatile int32_t t96 = -66;

	t96 = (x397<((x398<x399)%x400));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x401 = -1;
	int16_t x402 = INT16_MIN;
	int8_t x404 = INT8_MIN;

	t97 = (x401<((x402<x403)%x404));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x405 = INT64_MIN;
	volatile uint16_t x406 = 2037U;
	int64_t x407 = 11728754LL;
	int8_t x408 = -1;
	int32_t t98 = 1132272;

	t98 = (x405<((x406<x407)%x408));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x409 = INT32_MAX;
	int8_t x410 = INT8_MAX;
	static volatile int64_t x411 = INT64_MIN;
	static volatile int32_t t99 = 913;

	t99 = (x409<((x410<x411)%x412));

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

