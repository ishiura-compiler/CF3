#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x10 = 75591830U;
int32_t x21 = INT32_MIN;
int64_t x23 = -1LL;
volatile int64_t x34 = 10LL;
uint64_t x36 = 218691LLU;
uint64_t t8 = 47525401726188LLU;
static int32_t x42 = INT32_MAX;
static volatile int32_t t10 = -979800574;
volatile uint64_t t17 = 7206235101LLU;
static uint64_t x79 = 14670LLU;
volatile uint64_t t19 = 626132388016LLU;
static volatile uint8_t x89 = 118U;
int16_t x94 = INT16_MAX;
volatile int64_t t24 = 1754553585LL;
volatile int16_t x101 = -1;
int64_t x102 = INT64_MIN;
uint8_t x113 = 34U;
static int16_t x115 = INT16_MAX;
int64_t x121 = -1LL;
static uint64_t x122 = 11642856898554LLU;
volatile int32_t x128 = -1;
volatile int32_t t31 = INT32_MAX;
int32_t t33 = -151974;
static uint64_t x137 = 3754863794552409215LLU;
static int32_t x138 = 0;
int64_t x144 = INT64_MAX;
static volatile int64_t t35 = -1092780420622044LL;
uint16_t x152 = 18U;
volatile uint64_t t37 = 1128991263381512403LLU;
int32_t x154 = INT32_MAX;
int8_t x156 = 0;
volatile int8_t x157 = INT8_MAX;
volatile int64_t x162 = INT64_MIN;
volatile uint32_t x169 = 1U;
int64_t x170 = -7581676460609706LL;
static int16_t x174 = -1;
uint64_t t43 = 751742LLU;
volatile int8_t x187 = INT8_MIN;
static volatile int32_t t44 = -6;
uint8_t x192 = UINT8_MAX;
static int32_t x194 = -469744;
static uint16_t x195 = UINT16_MAX;
int64_t x198 = -3393863615545014LL;
int32_t x207 = -1;
volatile int32_t t49 = 0;
static int64_t t56 = -98299LL;
static int16_t x240 = INT16_MAX;
int32_t x242 = -14447;
static uint64_t t59 = 1727LLU;
uint64_t x250 = UINT64_MAX;
volatile int16_t x266 = -767;
volatile int64_t t64 = 55648136207LL;
static int16_t x279 = INT16_MIN;
volatile int32_t t67 = 29556;
static volatile uint64_t t68 = 7LLU;
volatile int8_t x287 = -1;
int8_t x290 = -1;
uint8_t x292 = 9U;
int64_t x299 = INT64_MIN;
static int8_t x306 = INT8_MIN;
int16_t x308 = -1;
static volatile int64_t t75 = 69997325790LL;
int64_t x319 = -1LL;
volatile int64_t t77 = 3381355LL;
int64_t x324 = 2515955164LL;
int64_t x326 = INT64_MIN;
int8_t x327 = INT8_MIN;
static uint8_t x331 = UINT8_MAX;
volatile uint32_t x334 = 1695023U;
volatile int32_t x335 = 0;
volatile uint32_t t81 = 519332899U;
static int32_t x337 = INT32_MIN;
volatile uint64_t t82 = 4125354898LLU;
uint64_t x353 = 1LLU;
int8_t x354 = 20;
volatile int64_t x362 = INT64_MAX;
volatile uint64_t t87 = 1LLU;
int32_t x368 = INT32_MAX;
int64_t t90 = 66288LL;
int32_t x377 = INT32_MIN;
volatile int64_t x389 = INT64_MIN;
uint8_t x396 = 12U;
uint64_t t94 = 5LLU;
uint64_t x404 = UINT64_MAX;
static uint64_t t96 = 4060005611534488031LLU;
static int8_t x407 = -1;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int64_t x2 = 1505020398629602LL;
	int8_t x3 = INT8_MIN;
	uint32_t x4 = 416983U;
	int64_t t0 = 29322385852634000LL;

	t0 = (((x1&x2)-x3)^x4);

	if (t0 != 416855LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 7U;
	int16_t x6 = INT16_MIN;
	uint16_t x7 = 10280U;
	uint64_t x8 = 83135LLU;
	volatile uint64_t t1 = 11819423789LLU;

	t1 = (((x5&x6)-x7)^x8);

	if (t1 != 18446744073709458279LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = -1;
	static volatile uint32_t x11 = 17318U;
	int64_t x12 = INT64_MAX;
	volatile int64_t t2 = 62LL;

	t2 = (((x9&x10)-x11)^x12);

	if (t2 != 9223372036779201295LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	volatile uint64_t x14 = UINT64_MAX;
	static int16_t x15 = -12;
	static int8_t x16 = 0;
	uint64_t t3 = 4404746857629589040LLU;

	t3 = (((x13&x14)-x15)^x16);

	if (t3 != 18446744073709551500LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	uint16_t x18 = 3439U;
	uint32_t x19 = UINT32_MAX;
	uint8_t x20 = 0U;
	volatile uint32_t t4 = 30014U;

	t4 = (((x17&x18)-x19)^x20);

	if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x22 = 258980201265LLU;
	int16_t x24 = -3;
	static uint64_t t5 = 328361067LLU;

	t5 = (((x21&x22)-x23)^x24);

	if (t5 != 18446743816011513852LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	uint64_t x26 = 3770383467421325658LLU;
	int64_t x27 = INT64_MIN;
	static uint16_t x28 = 30339U;
	volatile uint64_t t6 = 3280281LLU;

	t6 = (((x25&x26)-x27)^x28);

	if (t6 != 12993755504097392259LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 6U;
	uint32_t x30 = UINT32_MAX;
	volatile uint64_t x31 = 6368813685313LLU;
	int8_t x32 = -1;
	volatile uint64_t t7 = 2123975238585LLU;

	t7 = (((x29&x30)-x31)^x32);

	if (t7 != 6368813685306LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x33 = 2786940925497LLU;
	uint8_t x35 = UINT8_MAX;

	t8 = (((x33&x34)-x35)^x36);

	if (t8 != 18446744073709332810LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x37 = 348494313416030LLU;
	int8_t x38 = -1;
	int64_t x39 = -1LL;
	volatile uint32_t x40 = UINT32_MAX;
	volatile uint64_t t9 = 5005032125738191643LLU;

	t9 = (((x37&x38)-x39)^x40);

	if (t9 != 348497274346144LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x41 = 18;
	volatile int16_t x43 = 921;
	static int32_t x44 = 29662097;

	t10 = (((x41&x42)-x43)^x44);

	if (t10 != -29661208) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	uint8_t x46 = 0U;
	int16_t x47 = 89;
	static volatile int16_t x48 = 281;
	volatile int32_t t11 = 2;

	t11 = (((x45&x46)-x47)^x48);

	if (t11 != -322) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -4758;
	volatile int64_t x50 = -42935LL;
	uint32_t x51 = 11854U;
	static int16_t x52 = INT16_MIN;
	volatile int64_t t12 = -1278842684LL;

	t12 = (((x49&x50)-x51)^x52);

	if (t12 != 39418LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = 0;
	static uint8_t x54 = UINT8_MAX;
	int16_t x55 = -782;
	int8_t x56 = -46;
	static volatile int32_t t13 = -688603;

	t13 = (((x53&x54)-x55)^x56);

	if (t13 != -804) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	int16_t x58 = INT16_MIN;
	int8_t x59 = INT8_MIN;
	int64_t x60 = INT64_MAX;
	volatile int64_t t14 = 3070170LL;

	t14 = (((x57&x58)-x59)^x60);

	if (t14 != -9223372036854743169LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = UINT32_MAX;
	int16_t x62 = INT16_MAX;
	int16_t x63 = INT16_MIN;
	static uint8_t x64 = 39U;
	uint32_t t15 = 1418696U;

	t15 = (((x61&x62)-x63)^x64);

	if (t15 != 65496U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = 3365070;
	int64_t x66 = INT64_MIN;
	volatile uint64_t x67 = UINT64_MAX;
	int8_t x68 = -1;
	static uint64_t t16 = 191873781662352311LLU;

	t16 = (((x65&x66)-x67)^x68);

	if (t16 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x69 = UINT64_MAX;
	static int16_t x70 = INT16_MAX;
	uint8_t x71 = 28U;
	int8_t x72 = INT8_MIN;

	t17 = (((x69&x70)-x71)^x72);

	if (t17 != 18446744073709518947LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = 1788006;
	int64_t x74 = -1LL;
	uint32_t x75 = 12U;
	int64_t x76 = -1LL;
	volatile int64_t t18 = -48708025313LL;

	t18 = (((x73&x74)-x75)^x76);

	if (t18 != -1787995LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -774080271;
	uint8_t x78 = 58U;
	int16_t x80 = 2556;

	t19 = (((x77&x78)-x79)^x80);

	if (t19 != 18446744073709539102LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x81 = 478U;
	int16_t x82 = INT16_MIN;
	uint32_t x83 = 4U;
	int8_t x84 = INT8_MIN;
	uint32_t t20 = 435326U;

	t20 = (((x81&x82)-x83)^x84);

	if (t20 != 124U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 4U;
	uint16_t x86 = 7U;
	int16_t x87 = -55;
	int8_t x88 = -1;
	static volatile int32_t t21 = 2;

	t21 = (((x85&x86)-x87)^x88);

	if (t21 != -60) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x90 = INT32_MIN;
	volatile int8_t x91 = 13;
	volatile int64_t x92 = -1LL;
	volatile int64_t t22 = -130389463806326LL;

	t22 = (((x89&x90)-x91)^x92);

	if (t22 != 12LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 4U;
	uint16_t x95 = 107U;
	uint16_t x96 = 31389U;
	volatile int32_t t23 = 27413;

	t23 = (((x93&x94)-x95)^x96);

	if (t23 != -31484) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 12U;
	uint32_t x98 = 39181622U;
	uint32_t x99 = 416U;
	int64_t x100 = INT64_MIN;

	t24 = (((x97&x98)-x99)^x100);

	if (t24 != -9223372032559808924LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x103 = INT16_MIN;
	int16_t x104 = INT16_MIN;
	int64_t t25 = -1LL;

	t25 = (((x101&x102)-x103)^x104);

	if (t25 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 3;
	static int32_t x106 = 25384;
	int16_t x107 = 14029;
	uint64_t x108 = 12675277418396538LLU;
	uint64_t t26 = 184226351LLU;

	t26 = (((x105&x106)-x107)^x108);

	if (t26 != 18434068796291166793LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	volatile uint64_t x110 = 8306912698586LLU;
	uint8_t x111 = 4U;
	int64_t x112 = INT64_MIN;
	static volatile uint64_t t27 = 74LLU;

	t27 = (((x109&x110)-x111)^x112);

	if (t27 != 9223380343321526268LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x114 = 23170579U;
	int64_t x116 = 2162898236750552683LL;
	int64_t t28 = 5846413854LL;

	t28 = (((x113&x114)-x115)^x116);

	if (t28 != 2162898235715903080LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x117 = 2591U;
	uint64_t x118 = UINT64_MAX;
	int16_t x119 = 7;
	int8_t x120 = -1;
	uint64_t t29 = 121778819784089279LLU;

	t29 = (((x117&x118)-x119)^x120);

	if (t29 != 18446744073709549031LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x123 = INT32_MIN;
	uint8_t x124 = 3U;
	static uint64_t t30 = 102602163367034LLU;

	t30 = (((x121&x122)-x123)^x124);

	if (t30 != 11645004382201LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -1;
	static volatile int32_t x126 = INT32_MIN;
	static uint8_t x127 = 0U;

	t31 = (((x125&x126)-x127)^x128);

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	static int16_t x130 = INT16_MAX;
	uint64_t x131 = 783LLU;
	int16_t x132 = INT16_MAX;
	static uint64_t t32 = 7896060463156015LLU;

	t32 = (((x129&x130)-x131)^x132);

	if (t32 != 18446744073709519630LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 333U;
	int32_t x134 = INT32_MAX;
	uint16_t x135 = 3225U;
	static volatile int32_t x136 = -1;

	t33 = (((x133&x134)-x135)^x136);

	if (t33 != 2891) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x139 = 19;
	volatile int64_t x140 = INT64_MIN;
	uint64_t t34 = 8115880547284LLU;

	t34 = (((x137&x138)-x139)^x140);

	if (t34 != 9223372036854775789LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = 735492245022LL;
	volatile uint16_t x142 = UINT16_MAX;
	int32_t x143 = -921164;

	t35 = (((x141&x142)-x143)^x144);

	if (t35 != 9223372036853853077LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x145 = -1;
	volatile uint64_t x146 = 10393374043LLU;
	int64_t x147 = 13LL;
	int16_t x148 = INT16_MIN;
	volatile uint64_t t36 = 245745918LLU;

	t36 = (((x145&x146)-x147)^x148);

	if (t36 != 18446744063316184398LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x149 = 8U;
	uint64_t x150 = 291LLU;
	volatile int16_t x151 = -1;

	t37 = (((x149&x150)-x151)^x152);

	if (t37 != 19LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x153 = 12U;
	volatile int8_t x155 = -1;
	int32_t t38 = 0;

	t38 = (((x153&x154)-x155)^x156);

	if (t38 != 13) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x158 = UINT64_MAX;
	int8_t x159 = -1;
	static uint64_t x160 = 41384763LLU;
	static volatile uint64_t t39 = 512756722957441850LLU;

	t39 = (((x157&x158)-x159)^x160);

	if (t39 != 41384891LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x161 = INT32_MIN;
	int16_t x163 = INT16_MIN;
	int16_t x164 = INT16_MIN;
	volatile int64_t t40 = -7992477500381272LL;

	t40 = (((x161&x162)-x163)^x164);

	if (t40 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x171 = INT8_MIN;
	volatile int64_t x172 = -9579229LL;
	volatile int64_t t41 = -4964414LL;

	t41 = (((x169&x170)-x171)^x172);

	if (t41 != -9579101LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = INT8_MAX;
	static int32_t x175 = -2628;
	int64_t x176 = 40931LL;
	static volatile int64_t t42 = 1483799184LL;

	t42 = (((x173&x174)-x175)^x176);

	if (t42 != 38176LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x181 = 25186029412923LLU;
	int16_t x182 = -7;
	int32_t x183 = INT32_MIN;
	int8_t x184 = -7;

	t43 = (((x181&x182)-x183)^x184);

	if (t43 != 18446718885532655040LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = INT16_MIN;
	static uint16_t x186 = UINT16_MAX;
	volatile int8_t x188 = -1;

	t44 = (((x185&x186)-x187)^x188);

	if (t44 != -32897) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = INT32_MIN;
	uint8_t x190 = 1U;
	int16_t x191 = 0;
	volatile int32_t t45 = 3;

	t45 = (((x189&x190)-x191)^x192);

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x193 = -1;
	volatile uint32_t x196 = 132U;
	uint32_t t46 = 149033U;

	t46 = (((x193&x194)-x195)^x196);

	if (t46 != 4294432149U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = -1;
	int32_t x199 = -3535937;
	uint32_t x200 = UINT32_MAX;
	volatile int64_t t47 = 62275LL;

	t47 = (((x197&x198)-x199)^x200);

	if (t47 != -3393864047883660LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = 0;
	uint8_t x202 = 14U;
	volatile int8_t x203 = INT8_MIN;
	volatile uint16_t x204 = 9106U;
	int32_t t48 = 260366;

	t48 = (((x201&x202)-x203)^x204);

	if (t48 != 8978) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x205 = UINT16_MAX;
	int16_t x206 = INT16_MAX;
	int8_t x208 = 0;

	t49 = (((x205&x206)-x207)^x208);

	if (t49 != 32768) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x209 = INT8_MAX;
	volatile uint32_t x210 = 6U;
	int32_t x211 = INT32_MIN;
	int32_t x212 = -1;
	static volatile uint32_t t50 = 1832315U;

	t50 = (((x209&x210)-x211)^x212);

	if (t50 != 2147483641U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x213 = -3;
	volatile int32_t x214 = 3;
	static int16_t x215 = 18;
	int64_t x216 = 5255737LL;
	volatile int64_t t51 = -2980321944169358LL;

	t51 = (((x213&x214)-x215)^x216);

	if (t51 != -5255722LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = INT32_MIN;
	int32_t x218 = -1;
	int16_t x219 = -1;
	int32_t x220 = INT32_MAX;
	volatile int32_t t52 = -149876531;

	t52 = (((x217&x218)-x219)^x220);

	if (t52 != -2) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x221 = UINT16_MAX;
	uint16_t x222 = UINT16_MAX;
	int64_t x223 = -1LL;
	uint8_t x224 = UINT8_MAX;
	int64_t t53 = -1474948580LL;

	t53 = (((x221&x222)-x223)^x224);

	if (t53 != 65791LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = INT8_MIN;
	static int8_t x226 = INT8_MIN;
	int64_t x227 = 349337395994536266LL;
	int32_t x228 = -1;
	int64_t t54 = 0LL;

	t54 = (((x225&x226)-x227)^x228);

	if (t54 != 349337395994536393LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = 1;
	volatile int8_t x230 = -40;
	static volatile int16_t x231 = INT16_MIN;
	volatile int32_t x232 = -412301990;
	int32_t t55 = -8;

	t55 = (((x229&x230)-x231)^x232);

	if (t55 != -412334758) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x233 = 1;
	int16_t x234 = -229;
	int64_t x235 = INT64_MAX;
	uint32_t x236 = UINT32_MAX;

	t56 = (((x233&x234)-x235)^x236);

	if (t56 != -9223372032559808515LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x237 = UINT64_MAX;
	uint32_t x238 = 1324142626U;
	int32_t x239 = INT32_MAX;
	uint64_t t57 = 133656829695LLU;

	t57 = (((x237&x238)-x239)^x240);

	if (t57 != 18446744072886202332LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x241 = UINT16_MAX;
	uint8_t x243 = 0U;
	volatile int16_t x244 = INT16_MIN;
	int32_t t58 = -34;

	t58 = (((x241&x242)-x243)^x244);

	if (t58 != -47215) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x245 = INT32_MAX;
	int32_t x246 = -1;
	uint64_t x247 = 2499709844911455378LLU;
	int8_t x248 = -5;

	t59 = (((x245&x246)-x247)^x248);

	if (t59 != 2499709842763971734LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x249 = INT16_MIN;
	static volatile uint32_t x251 = 63114U;
	static volatile int8_t x252 = INT8_MIN;
	volatile uint64_t t60 = 80LLU;

	t60 = (((x249&x250)-x251)^x252);

	if (t60 != 95990LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = 725051567;
	uint32_t x254 = UINT32_MAX;
	int32_t x255 = INT32_MIN;
	static int32_t x256 = INT32_MAX;
	volatile uint32_t t61 = 2U;

	t61 = (((x253&x254)-x255)^x256);

	if (t61 != 3569915728U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = INT8_MIN;
	volatile uint8_t x258 = 8U;
	int8_t x259 = -1;
	volatile uint8_t x260 = 13U;
	static volatile int32_t t62 = 201058;

	t62 = (((x257&x258)-x259)^x260);

	if (t62 != 12) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x261 = INT64_MIN;
	uint8_t x262 = 3U;
	int16_t x263 = -1;
	volatile int64_t x264 = 5063LL;
	int64_t t63 = -11365643340372908LL;

	t63 = (((x261&x262)-x263)^x264);

	if (t63 != 5062LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x265 = UINT16_MAX;
	volatile int64_t x267 = -1LL;
	static int16_t x268 = INT16_MIN;

	t64 = (((x265&x266)-x267)^x268);

	if (t64 != -33534LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x269 = 615U;
	int64_t x270 = -1LL;
	uint32_t x271 = UINT32_MAX;
	int8_t x272 = 2;
	int64_t t65 = -4072545621LL;

	t65 = (((x269&x270)-x271)^x272);

	if (t65 != -4294966678LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x273 = INT64_MIN;
	uint64_t x274 = UINT64_MAX;
	int8_t x275 = 17;
	int8_t x276 = 1;
	static uint64_t t66 = 23075LLU;

	t66 = (((x273&x274)-x275)^x276);

	if (t66 != 9223372036854775790LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x277 = INT32_MIN;
	uint16_t x278 = 1U;
	int8_t x280 = INT8_MAX;

	t67 = (((x277&x278)-x279)^x280);

	if (t67 != 32895) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x281 = -7;
	int8_t x282 = 8;
	volatile uint64_t x283 = UINT64_MAX;
	uint64_t x284 = UINT64_MAX;

	t68 = (((x281&x282)-x283)^x284);

	if (t68 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x285 = UINT64_MAX;
	int16_t x286 = 1;
	uint8_t x288 = 37U;
	volatile uint64_t t69 = 3841885472LLU;

	t69 = (((x285&x286)-x287)^x288);

	if (t69 != 39LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = INT8_MIN;
	static volatile int32_t x291 = INT32_MIN;
	int32_t t70 = 70;

	t70 = (((x289&x290)-x291)^x292);

	if (t70 != 2147483529) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x293 = 48;
	volatile int64_t x294 = INT64_MIN;
	volatile int8_t x295 = 12;
	int16_t x296 = INT16_MIN;
	int64_t t71 = 129951455LL;

	t71 = (((x293&x294)-x295)^x296);

	if (t71 != 32756LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x297 = UINT64_MAX;
	uint32_t x298 = 6311U;
	volatile int32_t x300 = -1;
	volatile uint64_t t72 = 19517657690950067LLU;

	t72 = (((x297&x298)-x299)^x300);

	if (t72 != 9223372036854769496LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x301 = -1LL;
	int16_t x302 = INT16_MAX;
	int16_t x303 = INT16_MIN;
	uint32_t x304 = 18U;
	volatile int64_t t73 = 7LL;

	t73 = (((x301&x302)-x303)^x304);

	if (t73 != 65517LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x305 = UINT8_MAX;
	volatile int64_t x307 = -25030939LL;
	int64_t t74 = -16689LL;

	t74 = (((x305&x306)-x307)^x308);

	if (t74 != -25031068LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x309 = 329;
	int16_t x310 = INT16_MAX;
	int16_t x311 = INT16_MIN;
	static volatile int64_t x312 = INT64_MIN;

	t75 = (((x309&x310)-x311)^x312);

	if (t75 != -9223372036854742711LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x313 = 6391LLU;
	int16_t x314 = -1;
	int16_t x315 = -12241;
	uint32_t x316 = UINT32_MAX;
	volatile uint64_t t76 = 202130LLU;

	t76 = (((x313&x314)-x315)^x316);

	if (t76 != 4294948663LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x317 = INT8_MIN;
	static int16_t x318 = INT16_MAX;
	volatile uint8_t x320 = UINT8_MAX;

	t77 = (((x317&x318)-x319)^x320);

	if (t77 != 32638LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x321 = -2;
	int8_t x322 = 0;
	static uint8_t x323 = 48U;
	volatile int64_t t78 = -17809861LL;

	t78 = (((x321&x322)-x323)^x324);

	if (t78 != -2515955188LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x325 = 1935LL;
	uint8_t x328 = 6U;
	static int64_t t79 = 503LL;

	t79 = (((x325&x326)-x327)^x328);

	if (t79 != 134LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x329 = -1;
	static volatile uint8_t x330 = 1U;
	static int32_t x332 = -1;
	int32_t t80 = -83;

	t80 = (((x329&x330)-x331)^x332);

	if (t80 != 253) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x333 = -1;
	int8_t x336 = -1;

	t81 = (((x333&x334)-x335)^x336);

	if (t81 != 4293272272U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x338 = 15215666872413369LLU;
	uint32_t x339 = 1883U;
	int64_t x340 = -1LL;

	t82 = (((x337&x338)-x339)^x340);

	if (t82 != 18431528406886647642LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x345 = 16862U;
	static int16_t x346 = 23;
	int16_t x347 = INT16_MIN;
	uint16_t x348 = 2U;
	int32_t t83 = 132119597;

	t83 = (((x345&x346)-x347)^x348);

	if (t83 != 32788) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x349 = INT8_MIN;
	static volatile uint32_t x350 = 19U;
	int8_t x351 = INT8_MIN;
	volatile uint32_t x352 = 3U;
	uint32_t t84 = 4557U;

	t84 = (((x349&x350)-x351)^x352);

	if (t84 != 131U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x355 = INT16_MIN;
	int16_t x356 = INT16_MIN;
	static volatile uint64_t t85 = 29LLU;

	t85 = (((x353&x354)-x355)^x356);

	if (t85 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x357 = 1;
	volatile uint64_t x358 = UINT64_MAX;
	int64_t x359 = -3517391369813LL;
	static int64_t x360 = -1LL;
	uint64_t t86 = 4592983868605LLU;

	t86 = (((x357&x358)-x359)^x360);

	if (t86 != 18446740556318181801LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x361 = 6076850228429650081LLU;
	static uint8_t x363 = UINT8_MAX;
	int64_t x364 = -219549LL;

	t87 = (((x361&x362)-x363)^x364);

	if (t87 != 12369893845279723969LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x365 = 1864LL;
	volatile int32_t x366 = INT32_MIN;
	uint32_t x367 = 4785U;
	static int64_t t88 = -932318716026070963LL;

	t88 = (((x365&x366)-x367)^x368);

	if (t88 != -2147478864LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x369 = 5869230756560591LL;
	uint64_t x370 = 179LLU;
	int8_t x371 = -4;
	int32_t x372 = INT32_MAX;
	static uint64_t t89 = 4976105933876LLU;

	t89 = (((x369&x370)-x371)^x372);

	if (t89 != 2147483512LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x373 = INT32_MIN;
	int64_t x374 = INT64_MIN;
	int64_t x375 = -1LL;
	int16_t x376 = INT16_MIN;

	t90 = (((x373&x374)-x375)^x376);

	if (t90 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x378 = -683;
	int64_t x379 = INT64_MIN;
	int8_t x380 = -1;
	int64_t t91 = 66036571352LL;

	t91 = (((x377&x378)-x379)^x380);

	if (t91 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x381 = -1228598;
	uint32_t x382 = 45765862U;
	int32_t x383 = INT32_MIN;
	int8_t x384 = INT8_MIN;
	static uint32_t t92 = 523U;

	t92 = (((x381&x382)-x383)^x384);

	if (t92 != 2102902594U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x390 = 3U;
	uint32_t x391 = 30U;
	volatile int64_t x392 = -802828040285079LL;
	static int64_t t93 = -288204547675529719LL;

	t93 = (((x389&x390)-x391)^x392);

	if (t93 != 802828040285067LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x393 = INT64_MAX;
	static uint16_t x394 = UINT16_MAX;
	volatile uint64_t x395 = 988252535063129LLU;

	t94 = (((x393&x394)-x395)^x396);

	if (t94 != 18445755821174554026LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x397 = -156086008422203LL;
	uint8_t x398 = UINT8_MAX;
	static uint32_t x399 = 1051U;
	volatile int8_t x400 = INT8_MIN;
	int64_t t95 = -5452816020053061LL;

	t95 = (((x397&x398)-x399)^x400);

	if (t95 != 810LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x401 = -1LL;
	uint64_t x402 = 6156123381702601952LLU;
	int32_t x403 = INT32_MAX;

	t96 = (((x401&x402)-x403)^x404);

	if (t96 != 12290620694154433310LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x405 = INT16_MAX;
	int16_t x406 = INT16_MAX;
	int8_t x408 = -1;
	int32_t t97 = 810733589;

	t97 = (((x405&x406)-x407)^x408);

	if (t97 != -32769) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x409 = 3937;
	static uint64_t x410 = 475LLU;
	static uint32_t x411 = UINT32_MAX;
	int64_t x412 = INT64_MIN;
	uint64_t t98 = 3632LLU;

	t98 = (((x409&x410)-x411)^x412);

	if (t98 != 9223372032559808834LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x413 = -1LL;
	volatile int64_t x414 = -13069714760LL;
	int32_t x415 = -1;
	int32_t x416 = INT32_MIN;
	volatile int64_t t99 = 13596766158771835LL;

	t99 = (((x413&x414)-x415)^x416);

	if (t99 != 14847572665LL) { NG(); } else { ; }
	
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

