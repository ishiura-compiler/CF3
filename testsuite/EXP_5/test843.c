#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = -114960511;
uint32_t x4 = 2U;
volatile int8_t x7 = -1;
int64_t x9 = INT64_MAX;
uint32_t x11 = 565672196U;
static int64_t t2 = -13104141LL;
int32_t x17 = INT32_MAX;
int32_t x27 = INT32_MIN;
int8_t x29 = INT8_MIN;
int8_t x42 = 1;
static volatile int64_t t13 = 40LL;
int8_t x60 = INT8_MIN;
int8_t x61 = -1;
static int64_t x69 = INT64_MAX;
int32_t x73 = INT32_MAX;
uint64_t x77 = 136813826651LLU;
int32_t x80 = INT32_MIN;
int64_t t20 = -409LL;
int64_t x91 = INT64_MAX;
static int8_t x92 = INT8_MIN;
int64_t t22 = 149491LL;
int64_t x98 = 626727621659049590LL;
int16_t x100 = INT16_MIN;
int64_t t24 = -29179LL;
uint64_t x102 = UINT64_MAX;
static volatile uint64_t t25 = 38498LLU;
volatile uint16_t x116 = 19260U;
int32_t t28 = -171;
int16_t x118 = INT16_MIN;
int64_t t32 = -15972112287563898LL;
uint8_t x134 = 4U;
uint64_t x137 = 1667LLU;
static volatile int32_t x145 = -1;
uint8_t x146 = 1U;
uint16_t x151 = UINT16_MAX;
int32_t x172 = INT32_MAX;
int8_t x177 = 0;
int64_t x179 = 16139653LL;
static int8_t x186 = 13;
int32_t x193 = INT32_MIN;
uint64_t t48 = 8657LLU;
int64_t x198 = -14LL;
uint64_t x201 = UINT64_MAX;
static int8_t x208 = -4;
int8_t x209 = 5;
int64_t x211 = INT64_MIN;
int16_t x215 = INT16_MIN;
static uint16_t x218 = 365U;
uint32_t x221 = UINT32_MAX;
int32_t t56 = 28141;
int16_t x229 = INT16_MAX;
static uint64_t t57 = 68070071582234899LLU;
static int32_t x239 = INT32_MIN;
int32_t x242 = -10;
int16_t x244 = 225;
int8_t x248 = -1;
static int16_t x250 = 15;
int32_t x255 = 446;
static volatile int32_t t63 = 223;
static volatile int32_t x260 = INT32_MAX;
uint64_t x265 = 361LLU;
volatile uint8_t x271 = 25U;
static int64_t x274 = INT64_MAX;
volatile int8_t x288 = INT8_MIN;
int64_t x289 = -1LL;
uint8_t x293 = 25U;
static uint64_t x296 = 12100887157709189LLU;
uint64_t t73 = 1168293LLU;
static int64_t x301 = -1LL;
volatile int64_t x302 = INT64_MAX;
static int64_t t74 = 31LL;
static int64_t x308 = -1LL;
static uint16_t x310 = UINT16_MAX;
volatile int32_t t77 = -205;
int16_t x321 = -1;
int64_t x322 = -1LL;
uint8_t x333 = 7U;
int64_t t82 = 2051775816193530016LL;
uint16_t x338 = UINT16_MAX;
int64_t x340 = -1763316155152925434LL;
int64_t t83 = 779480LL;
int8_t x345 = INT8_MIN;
uint32_t x347 = UINT32_MAX;
volatile uint8_t x351 = UINT8_MAX;
static int64_t x353 = INT64_MIN;
int32_t x366 = -1;
volatile int64_t x369 = INT64_MIN;
volatile int64_t t90 = 7094800059856LL;
uint8_t x374 = 5U;
int32_t x375 = -1;
uint64_t t91 = 625613786976092298LLU;
int16_t x380 = INT16_MIN;
int64_t x381 = INT64_MAX;
volatile int32_t x385 = 46;
int8_t x388 = INT8_MIN;
int32_t t94 = -2517;
int64_t x390 = INT64_MIN;
uint16_t x393 = 1U;
uint64_t t96 = 9830436200941LLU;
int64_t x403 = INT64_MAX;
uint16_t x408 = 21923U;


void f0(void) {
	static int16_t x1 = -1;
	int64_t x3 = -29370671LL;
	static int64_t t0 = -1007643532703046LL;

	t0 = (x1&((x2%x3)^x4));

	if (t0 != -26848500LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int16_t x6 = 2;
	static int64_t x8 = 7004LL;
	int64_t t1 = 810076614LL;

	t1 = (x5&((x6%x7)^x8));

	if (t1 != 6912LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = 122507608993LL;
	uint32_t x12 = UINT32_MAX;

	t2 = (x9&((x10%x11)^x12));

	if (t2 != 3972552638LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	static volatile uint16_t x14 = UINT16_MAX;
	volatile int64_t x15 = INT64_MIN;
	static int64_t x16 = -30928621LL;
	volatile int64_t t3 = 729367530LL;

	t3 = (x13&((x14%x15)^x16));

	if (t3 != -30871936LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x18 = 70U;
	int32_t x19 = 7393;
	static volatile int64_t x20 = 29829204986980607LL;
	static volatile int64_t t4 = -5499093LL;

	t4 = (x17&((x18%x19)^x20));

	if (t4 != 2133747897LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x21 = INT32_MIN;
	volatile int64_t x22 = -1LL;
	volatile int32_t x23 = -1;
	int8_t x24 = 37;
	static int64_t t5 = -2652616233262892317LL;

	t5 = (x21&((x22%x23)^x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x25 = UINT8_MAX;
	volatile uint16_t x26 = 3U;
	uint64_t x28 = 7870LLU;
	uint64_t t6 = 54519642LLU;

	t6 = (x25&((x26%x27)^x28));

	if (t6 != 189LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x30 = INT64_MAX;
	volatile uint16_t x31 = 93U;
	static int64_t x32 = -3LL;
	volatile int64_t t7 = 21970LL;

	t7 = (x29&((x30%x31)^x32));

	if (t7 != -128LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	static int32_t x34 = INT32_MIN;
	int16_t x35 = -1;
	int8_t x36 = 0;
	static int32_t t8 = -14;

	t8 = (x33&((x34%x35)^x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	int64_t x38 = INT64_MAX;
	volatile uint64_t x39 = 972811553683LLU;
	volatile int64_t x40 = -1LL;
	static uint64_t t9 = 123832226387408LLU;

	t9 = (x37&((x38%x39)^x40));

	if (t9 != 18446743326244797575LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	uint64_t x43 = 115630007218LLU;
	int32_t x44 = -1;
	uint64_t t10 = 9175718340666111753LLU;

	t10 = (x41&((x42%x43)^x44));

	if (t10 != 32766LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -5724LL;
	static uint64_t x46 = 1747054303223505LLU;
	int64_t x47 = INT64_MIN;
	int8_t x48 = 1;
	static volatile uint64_t t11 = 312302434419769LLU;

	t11 = (x45&((x46%x47)^x48));

	if (t11 != 1747054303217792LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = INT8_MIN;
	uint16_t x50 = 7343U;
	int32_t x51 = 1;
	int8_t x52 = INT8_MIN;
	int32_t t12 = -1;

	t12 = (x49&((x50%x51)^x52));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	int32_t x54 = 1;
	int64_t x55 = 17339871178LL;
	volatile int32_t x56 = -1;

	t13 = (x53&((x54%x55)^x56));

	if (t13 != 126LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = INT64_MAX;
	int32_t x58 = INT32_MIN;
	int16_t x59 = INT16_MAX;
	volatile int64_t t14 = -53876422LL;

	t14 = (x57&((x58%x59)^x60));

	if (t14 != 126LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x62 = INT64_MIN;
	static volatile uint32_t x63 = 135136010U;
	uint64_t x64 = 25288292211LLU;
	volatile uint64_t t15 = 252901492216LLU;

	t15 = (x61&((x62%x63)^x64));

	if (t15 != 18446744048400650881LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = INT64_MIN;
	int32_t x66 = -186;
	volatile uint8_t x67 = 2U;
	uint32_t x68 = 3308U;
	volatile int64_t t16 = 41702301845217LL;

	t16 = (x65&((x66%x67)^x68));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = -1;
	int64_t x71 = -1691805694506LL;
	uint8_t x72 = 13U;
	static volatile int64_t t17 = -1492038566076489LL;

	t17 = (x69&((x70%x71)^x72));

	if (t17 != 9223372036854775794LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x74 = 7U;
	int8_t x75 = INT8_MIN;
	int32_t x76 = INT32_MIN;
	static volatile int32_t t18 = -32153;

	t18 = (x73&((x74%x75)^x76));

	if (t18 != 7) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x78 = INT64_MAX;
	int16_t x79 = INT16_MIN;
	volatile uint64_t t19 = 218840525781943607LLU;

	t19 = (x77&((x78%x79)^x80));

	if (t19 != 135291490907LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1622539134490512742LL;
	static uint32_t x82 = 748810252U;
	int64_t x83 = INT64_MAX;
	int8_t x84 = INT8_MIN;

	t20 = (x81&((x82%x83)^x84));

	if (t20 != -1622539135103008120LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = INT32_MIN;
	volatile int64_t x86 = INT64_MIN;
	static int64_t x87 = -1LL;
	uint64_t x88 = 48LLU;
	uint64_t t21 = 85441754981090817LLU;

	t21 = (x85&((x86%x87)^x88));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = INT32_MIN;
	int8_t x90 = 1;

	t22 = (x89&((x90%x91)^x92));

	if (t22 != -2147483648LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x93 = 27U;
	volatile uint64_t x94 = 396012856LLU;
	int32_t x95 = -1;
	volatile uint64_t x96 = 14848110113295LLU;
	volatile uint64_t t23 = 13474066458LLU;

	t23 = (x93&((x94%x95)^x96));

	if (t23 != 19LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = -118020;
	uint32_t x99 = 720U;

	t24 = (x97&((x98%x99)^x100));

	if (t24 != -130844LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x101 = UINT64_MAX;
	int64_t x103 = -3777192761598490LL;
	uint64_t x104 = 135769LLU;

	t25 = (x101&((x102%x103)^x104));

	if (t25 != 3777192761733184LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 27U;
	uint16_t x106 = 96U;
	int64_t x107 = -1LL;
	volatile int64_t x108 = 69LL;
	int64_t t26 = -503936LL;

	t26 = (x105&((x106%x107)^x108));

	if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = 35532513;
	static volatile int32_t x110 = INT32_MIN;
	int16_t x111 = INT16_MAX;
	uint64_t x112 = UINT64_MAX;
	uint64_t t27 = 122LLU;

	t27 = (x109&((x110%x111)^x112));

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = 1;
	volatile int16_t x114 = INT16_MAX;
	static int8_t x115 = -1;

	t28 = (x113&((x114%x115)^x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x117 = INT64_MAX;
	static int16_t x119 = INT16_MIN;
	int64_t x120 = INT64_MIN;
	static volatile int64_t t29 = -199LL;

	t29 = (x117&((x118%x119)^x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	int8_t x122 = 27;
	uint32_t x123 = 24160U;
	volatile int8_t x124 = INT8_MIN;
	uint32_t t30 = 11287355U;

	t30 = (x121&((x122%x123)^x124));

	if (t30 != 4294967168U) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x125 = -209;
	int8_t x126 = 11;
	int64_t x127 = INT64_MAX;
	volatile int64_t x128 = -1LL;
	volatile int64_t t31 = -445LL;

	t31 = (x125&((x126%x127)^x128));

	if (t31 != -220LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x129 = UINT8_MAX;
	int64_t x130 = 77606864917141324LL;
	volatile uint16_t x131 = 14U;
	int16_t x132 = INT16_MIN;

	t32 = (x129&((x130%x131)^x132));

	if (t32 != 2LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	volatile uint32_t x135 = 23513832U;
	int32_t x136 = -34135;
	uint32_t t33 = 56U;

	t33 = (x133&((x134%x135)^x136));

	if (t33 != 4294933165U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x138 = -1;
	int32_t x139 = INT32_MIN;
	uint64_t x140 = 3992190304352163624LLU;
	static uint64_t t34 = 211641256107LLU;

	t34 = (x137&((x138%x139)^x140));

	if (t34 != 131LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = 661;
	int8_t x142 = -1;
	static int64_t x143 = 4495288258985383LL;
	int16_t x144 = INT16_MIN;
	volatile int64_t t35 = -6642494471710943LL;

	t35 = (x141&((x142%x143)^x144));

	if (t35 != 661LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x147 = INT32_MIN;
	volatile int8_t x148 = -38;
	volatile int32_t t36 = -385;

	t36 = (x145&((x146%x147)^x148));

	if (t36 != -37) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = -1;
	int16_t x150 = -1;
	int16_t x152 = INT16_MIN;
	volatile int32_t t37 = 1225;

	t37 = (x149&((x150%x151)^x152));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x153 = -1;
	uint8_t x154 = UINT8_MAX;
	static uint8_t x155 = UINT8_MAX;
	volatile int64_t x156 = -1700LL;
	volatile int64_t t38 = 26923588689LL;

	t38 = (x153&((x154%x155)^x156));

	if (t38 != -1700LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = INT32_MIN;
	volatile int8_t x158 = 30;
	uint64_t x159 = UINT64_MAX;
	int8_t x160 = 24;
	volatile uint64_t t39 = 104407535LLU;

	t39 = (x157&((x158%x159)^x160));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = UINT64_MAX;
	volatile int64_t x162 = 433104493456664LL;
	static int16_t x163 = INT16_MAX;
	int32_t x164 = -1;
	static uint64_t t40 = 7550731313147566LLU;

	t40 = (x161&((x162%x163)^x164));

	if (t40 != 18446744073709530180LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = UINT16_MAX;
	int8_t x166 = INT8_MAX;
	static volatile int32_t x167 = INT32_MAX;
	static int64_t x168 = 24LL;
	int64_t t41 = -566448735557516189LL;

	t41 = (x165&((x166%x167)^x168));

	if (t41 != 103LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -23;
	uint8_t x170 = 52U;
	uint32_t x171 = UINT32_MAX;
	volatile uint32_t t42 = 120316471U;

	t42 = (x169&((x170%x171)^x172));

	if (t42 != 2147483593U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	int32_t x174 = INT32_MIN;
	volatile uint64_t x175 = 771199388295017LLU;
	uint8_t x176 = 39U;
	uint64_t t43 = 427925005712491749LLU;

	t43 = (x173&((x174%x175)^x176));

	if (t43 != 425901841973248LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x178 = INT8_MAX;
	uint64_t x180 = 595583537659563299LLU;
	uint64_t t44 = 146LLU;

	t44 = (x177&((x178%x179)^x180));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 9452U;
	int32_t x182 = -1;
	int16_t x183 = INT16_MIN;
	int32_t x184 = INT32_MIN;
	static volatile int32_t t45 = 983989;

	t45 = (x181&((x182%x183)^x184));

	if (t45 != 9452) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = -1;
	static uint8_t x187 = 22U;
	int8_t x188 = -27;
	static volatile int32_t t46 = 6295;

	t46 = (x185&((x186%x187)^x188));

	if (t46 != -24) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	int16_t x190 = INT16_MIN;
	int8_t x191 = INT8_MAX;
	static int64_t x192 = 15912325239LL;
	int64_t t47 = -568974897984LL;

	t47 = (x189&((x190%x191)^x192));

	if (t47 != -15912325248LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x194 = 6U;
	uint64_t x195 = 614220170375191462LLU;
	volatile int64_t x196 = INT64_MIN;

	t48 = (x193&((x194%x195)^x196));

	if (t48 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 64U;
	int8_t x199 = INT8_MIN;
	int8_t x200 = INT8_MAX;
	volatile int64_t t49 = 91039LL;

	t49 = (x197&((x198%x199)^x200));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x202 = INT32_MIN;
	static uint16_t x203 = 955U;
	int32_t x204 = INT32_MIN;
	static volatile uint64_t t50 = 192745551LLU;

	t50 = (x201&((x202%x203)^x204));

	if (t50 != 2147482715LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MAX;
	uint16_t x206 = 2U;
	int8_t x207 = 3;
	volatile int64_t t51 = 12401824LL;

	t51 = (x205&((x206%x207)^x208));

	if (t51 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x210 = UINT16_MAX;
	volatile uint64_t x212 = 1509992310927272804LLU;
	uint64_t t52 = 11LLU;

	t52 = (x209&((x210%x211)^x212));

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = -1LL;
	int64_t x214 = INT64_MAX;
	int16_t x216 = -1;
	volatile int64_t t53 = 23486103666LL;

	t53 = (x213&((x214%x215)^x216));

	if (t53 != -32768LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x217 = 7;
	uint64_t x219 = UINT64_MAX;
	int64_t x220 = 66LL;
	static uint64_t t54 = 126394779LLU;

	t54 = (x217&((x218%x219)^x220));

	if (t54 != 7LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x222 = 452943995;
	int64_t x223 = -3LL;
	static int64_t x224 = INT64_MIN;
	int64_t t55 = -1546779LL;

	t55 = (x221&((x222%x223)^x224));

	if (t55 != 2LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = 21;
	uint16_t x226 = 418U;
	int16_t x227 = INT16_MIN;
	uint16_t x228 = UINT16_MAX;

	t56 = (x225&((x226%x227)^x228));

	if (t56 != 21) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x230 = INT8_MIN;
	uint32_t x231 = UINT32_MAX;
	uint64_t x232 = 579155390LLU;

	t57 = (x229&((x230%x231)^x232));

	if (t57 != 19006LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = UINT32_MAX;
	int32_t x234 = -1;
	uint8_t x235 = 1U;
	volatile int32_t x236 = INT32_MIN;
	static uint32_t t58 = 649019013U;

	t58 = (x233&((x234%x235)^x236));

	if (t58 != 2147483648U) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 0U;
	int16_t x238 = INT16_MAX;
	int8_t x240 = 3;
	volatile int32_t t59 = 711890;

	t59 = (x237&((x238%x239)^x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 12494864080052519LLU;
	int8_t x243 = INT8_MAX;
	static volatile uint64_t t60 = 29317204599LLU;

	t60 = (x241&((x242%x243)^x244));

	if (t60 != 12494864080052487LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x245 = 28U;
	uint8_t x246 = 3U;
	int8_t x247 = -3;
	int32_t t61 = -152149;

	t61 = (x245&((x246%x247)^x248));

	if (t61 != 28) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	volatile int64_t x251 = 2597LL;
	uint8_t x252 = UINT8_MAX;
	int64_t t62 = 482LL;

	t62 = (x249&((x250%x251)^x252));

	if (t62 != 128LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -1;
	uint8_t x254 = 1U;
	int32_t x256 = -1;

	t63 = (x253&((x254%x255)^x256));

	if (t63 != -2) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x257 = -1;
	int8_t x258 = INT8_MAX;
	int32_t x259 = -84357;
	volatile int32_t t64 = 1634;

	t64 = (x257&((x258%x259)^x260));

	if (t64 != 2147483520) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 22847609U;
	uint16_t x262 = 3971U;
	static int8_t x263 = -1;
	volatile uint64_t x264 = 121LLU;
	uint64_t t65 = 2576292978LLU;

	t65 = (x261&((x262%x263)^x264));

	if (t65 != 121LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x266 = INT8_MAX;
	uint8_t x267 = 48U;
	int16_t x268 = INT16_MIN;
	volatile uint64_t t66 = 125189939LLU;

	t66 = (x265&((x266%x267)^x268));

	if (t66 != 9LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x269 = INT8_MIN;
	int64_t x270 = -1LL;
	int32_t x272 = INT32_MAX;
	int64_t t67 = -264702376787LL;

	t67 = (x269&((x270%x271)^x272));

	if (t67 != -2147483648LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 0U;
	static int64_t x275 = -79LL;
	static volatile int64_t x276 = INT64_MIN;
	int64_t t68 = -245LL;

	t68 = (x273&((x274%x275)^x276));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x277 = 437066U;
	static volatile int16_t x278 = 170;
	uint64_t x279 = 4LLU;
	int64_t x280 = -474LL;
	static volatile uint64_t t69 = 488570525211480LLU;

	t69 = (x277&((x278%x279)^x280));

	if (t69 != 436736LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x285 = INT32_MIN;
	uint64_t x286 = UINT64_MAX;
	uint16_t x287 = UINT16_MAX;
	static uint64_t t70 = 2952845405267111394LLU;

	t70 = (x285&((x286%x287)^x288));

	if (t70 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x290 = -11;
	static uint32_t x291 = 144U;
	uint8_t x292 = UINT8_MAX;
	volatile int64_t t71 = -242921LL;

	t71 = (x289&((x290%x291)^x292));

	if (t71 != 154LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x294 = 257U;
	uint16_t x295 = UINT16_MAX;
	uint64_t t72 = 8023655125LLU;

	t72 = (x293&((x294%x295)^x296));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x297 = UINT64_MAX;
	uint16_t x298 = 7546U;
	int64_t x299 = -123393LL;
	uint64_t x300 = 54629456095753611LLU;

	t73 = (x297&((x298%x299)^x300));

	if (t73 != 54629456095750385LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x303 = 74U;
	uint32_t x304 = UINT32_MAX;

	t74 = (x301&((x302%x303)^x304));

	if (t74 != 4294967290LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x305 = INT32_MIN;
	int16_t x306 = INT16_MAX;
	int64_t x307 = INT64_MIN;
	int64_t t75 = -701944996LL;

	t75 = (x305&((x306%x307)^x308));

	if (t75 != -2147483648LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x309 = INT32_MIN;
	int16_t x311 = INT16_MAX;
	static int16_t x312 = INT16_MIN;
	static volatile int32_t t76 = INT32_MIN;

	t76 = (x309&((x310%x311)^x312));

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x313 = 87;
	int32_t x314 = -29;
	int8_t x315 = INT8_MIN;
	int32_t x316 = -8888;

	t77 = (x313&((x314%x315)^x316));

	if (t77 != 3) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x317 = UINT64_MAX;
	int64_t x318 = INT64_MAX;
	int8_t x319 = -5;
	static int64_t x320 = -217917454232535628LL;
	volatile uint64_t t78 = 7404879573914778291LLU;

	t78 = (x317&((x318%x319)^x320));

	if (t78 != 18228826619477015990LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x323 = INT32_MIN;
	uint16_t x324 = UINT16_MAX;
	int64_t t79 = 318347861LL;

	t79 = (x321&((x322%x323)^x324));

	if (t79 != -65536LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x325 = -1;
	volatile int16_t x326 = INT16_MIN;
	uint64_t x327 = 2660LLU;
	int8_t x328 = -1;
	static volatile uint64_t t80 = 183562368332067531LLU;

	t80 = (x325&((x326%x327)^x328));

	if (t80 != 18446744073709550907LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x329 = -1LL;
	volatile int16_t x330 = INT16_MIN;
	int16_t x331 = INT16_MIN;
	static volatile int16_t x332 = 4;
	int64_t t81 = -1LL;

	t81 = (x329&((x330%x331)^x332));

	if (t81 != 4LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x334 = -13527442LL;
	static int64_t x335 = INT64_MIN;
	int64_t x336 = INT64_MIN;

	t82 = (x333&((x334%x335)^x336));

	if (t82 != 6LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x337 = -1;
	static volatile int32_t x339 = INT32_MIN;

	t83 = (x337&((x338%x339)^x340));

	if (t83 != -1763316155152989447LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x341 = 493006;
	volatile int64_t x342 = INT64_MIN;
	static volatile int64_t x343 = -1LL;
	int8_t x344 = INT8_MIN;
	int64_t t84 = 196072LL;

	t84 = (x341&((x342%x343)^x344));

	if (t84 != 492928LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x346 = INT16_MIN;
	uint64_t x348 = 1841307623LLU;
	volatile uint64_t t85 = 2912470552961760935LLU;

	t85 = (x345&((x346%x347)^x348));

	if (t85 != 2453643136LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x349 = 763U;
	volatile uint32_t x350 = 0U;
	static volatile uint8_t x352 = UINT8_MAX;
	uint32_t t86 = 6479U;

	t86 = (x349&((x350%x351)^x352));

	if (t86 != 251U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x354 = INT64_MIN;
	uint64_t x355 = 1822187LLU;
	uint32_t x356 = 507U;
	static volatile uint64_t t87 = 1726154658781349LLU;

	t87 = (x353&((x354%x355)^x356));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x361 = 504;
	volatile int16_t x362 = -1;
	static int16_t x363 = INT16_MIN;
	volatile uint64_t x364 = 11727LLU;
	uint64_t t88 = 5LLU;

	t88 = (x361&((x362%x363)^x364));

	if (t88 != 48LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x365 = INT64_MIN;
	int8_t x367 = INT8_MIN;
	int8_t x368 = INT8_MIN;
	int64_t t89 = 733541LL;

	t89 = (x365&((x366%x367)^x368));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x370 = -1;
	uint8_t x371 = 17U;
	int64_t x372 = INT64_MIN;

	t90 = (x369&((x370%x371)^x372));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x373 = UINT64_MAX;
	int8_t x376 = INT8_MIN;

	t91 = (x373&((x374%x375)^x376));

	if (t91 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x377 = -4219650696026062LL;
	volatile int16_t x378 = INT16_MIN;
	int32_t x379 = INT32_MAX;
	volatile int64_t t92 = 14780016LL;

	t92 = (x377&((x378%x379)^x380));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x382 = 0;
	int8_t x383 = INT8_MAX;
	int32_t x384 = INT32_MIN;
	int64_t t93 = 10498531244840LL;

	t93 = (x381&((x382%x383)^x384));

	if (t93 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x386 = INT16_MAX;
	uint16_t x387 = UINT16_MAX;

	t94 = (x385&((x386%x387)^x388));

	if (t94 != 46) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x389 = 31U;
	int16_t x391 = INT16_MIN;
	uint64_t x392 = 181551894753274343LLU;
	uint64_t t95 = 1LLU;

	t95 = (x389&((x390%x391)^x392));

	if (t95 != 7LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x394 = INT64_MIN;
	static volatile int64_t x395 = INT64_MIN;
	uint64_t x396 = 328908121687LLU;

	t96 = (x393&((x394%x395)^x396));

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x397 = -1LL;
	static int32_t x398 = INT32_MAX;
	static uint8_t x399 = 3U;
	uint8_t x400 = 0U;
	static int64_t t97 = -413341461137180LL;

	t97 = (x397&((x398%x399)^x400));

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x401 = 0U;
	uint64_t x402 = 11336106200LLU;
	int16_t x404 = 6984;
	volatile uint64_t t98 = 201159586419136LLU;

	t98 = (x401&((x402%x403)^x404));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x405 = 156208U;
	uint64_t x406 = 2451680980263983LLU;
	uint64_t x407 = 249LLU;
	static uint64_t t99 = 32975848101261LLU;

	t99 = (x405&((x406%x407)^x408));

	if (t99 != 16416LLU) { NG(); } else { ; }
	
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

