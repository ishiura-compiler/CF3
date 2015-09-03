#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x9 = UINT8_MAX;
int16_t x10 = -507;
uint8_t x11 = 13U;
int64_t t1 = -2122195404611LL;
volatile uint64_t x18 = 13581061015216LLU;
volatile uint64_t t2 = 4837206009LLU;
int8_t x21 = -1;
volatile uint64_t x29 = 313737764689LLU;
int16_t x30 = 173;
volatile uint64_t t5 = 2039352813781477LLU;
volatile uint64_t t6 = 108547LLU;
static int16_t x43 = INT16_MIN;
int8_t x54 = INT8_MIN;
int32_t t11 = 322;
static int64_t x65 = INT64_MAX;
uint64_t t15 = 1116065517083245LLU;
int16_t x81 = INT16_MIN;
int16_t x82 = INT16_MIN;
int64_t t19 = -34316990LL;
int8_t x92 = -7;
int16_t x98 = INT16_MAX;
uint64_t x100 = 530939294473LLU;
volatile int16_t x106 = 457;
uint16_t x120 = 10906U;
volatile int32_t t25 = 5097;
int64_t t26 = 329740728004690225LL;
volatile uint32_t x127 = 105933216U;
volatile int32_t x146 = INT32_MIN;
int32_t x153 = INT32_MIN;
volatile uint32_t t32 = 47459U;
uint32_t x163 = 1406U;
static volatile uint32_t t33 = 1504U;
static uint32_t t35 = 165U;
int32_t x178 = INT32_MIN;
volatile int8_t x180 = -8;
volatile uint64_t t36 = 11382823093LLU;
int8_t x189 = -1;
int8_t x191 = INT8_MAX;
volatile int32_t t39 = 26156;
volatile int32_t x195 = 322385;
uint8_t x212 = UINT8_MAX;
int32_t x215 = -2;
uint8_t x223 = 5U;
int8_t x228 = INT8_MIN;
volatile int32_t t46 = 4381987;
static int32_t x230 = INT32_MIN;
uint64_t t47 = 3LLU;
uint64_t x240 = 2455172222LLU;
volatile uint64_t t48 = 434LLU;
int8_t x242 = -1;
int32_t x246 = INT32_MIN;
int32_t x251 = INT32_MAX;
volatile uint8_t x252 = 2U;
volatile uint32_t t51 = 147687445U;
int64_t t52 = 2169746301LL;
int32_t x262 = -3;
int8_t x263 = -3;
int64_t t54 = 28958114374LL;
static uint8_t x269 = 12U;
uint8_t x274 = 12U;
static uint64_t x288 = 449060058928LLU;
uint64_t t59 = 2818284584LLU;
uint64_t t60 = 4LLU;
uint8_t x299 = 12U;
uint16_t x315 = 7015U;
static uint32_t x318 = UINT32_MAX;
static uint16_t x333 = UINT16_MAX;
int64_t x334 = INT64_MIN;
uint64_t x338 = 3489047003LLU;
int16_t x351 = 31;
int64_t x357 = -88007984421LL;
static int16_t x359 = 327;
int64_t x369 = -27708666041679473LL;
static int16_t x373 = -1;
int8_t x375 = 5;
uint8_t x385 = 2U;
uint16_t x392 = UINT16_MAX;
uint8_t x393 = 58U;
uint32_t x394 = 1U;
static volatile int8_t x399 = INT8_MIN;
volatile int8_t x420 = INT8_MIN;
uint16_t x424 = 68U;
volatile uint16_t x426 = 52U;
static uint8_t x435 = UINT8_MAX;
static int32_t x448 = INT32_MIN;
static uint64_t x455 = 1870955898289551LLU;
uint16_t x456 = UINT16_MAX;
volatile int16_t x466 = INT16_MIN;
int8_t x468 = INT8_MAX;
static int16_t x470 = 2452;
uint64_t t99 = 105779522852LLU;


void f0(void) {
	int8_t x12 = -1;
	volatile int32_t t0 = 74836272;

	t0 = ((x9^(x10%x11))*x12);

	if (t0 != -255) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = INT8_MAX;
	int64_t x14 = INT64_MAX;
	int32_t x15 = INT32_MIN;
	int32_t x16 = 61627626;

	t1 = ((x13^(x14%x15))*x16);

	if (t1 != 132344311211723520LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x17 = INT32_MAX;
	int16_t x19 = INT16_MIN;
	int16_t x20 = 0;

	t2 = ((x17^(x18%x19))*x20);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x22 = INT16_MIN;
	int64_t x23 = INT64_MIN;
	int8_t x24 = INT8_MIN;
	static int64_t t3 = 780975623186558LL;

	t3 = ((x21^(x22%x23))*x24);

	if (t3 != -4194176LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = -1;
	static int32_t x26 = -1;
	int16_t x27 = INT16_MIN;
	uint8_t x28 = 0U;
	static int32_t t4 = 12;

	t4 = ((x25^(x26%x27))*x28);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x31 = 1753561;
	int16_t x32 = INT16_MIN;

	t5 = ((x29^(x30%x31))*x32);

	if (t5 != 18436463514630619136LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = -1LL;
	int8_t x34 = INT8_MAX;
	uint32_t x35 = 362813U;
	uint64_t x36 = UINT64_MAX;

	t6 = ((x33^(x34%x35))*x36);

	if (t6 != 128LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x37 = 4770928714431306005LLU;
	uint8_t x38 = 1U;
	volatile uint16_t x39 = 79U;
	int16_t x40 = INT16_MAX;
	static uint64_t t7 = 927316891LLU;

	t7 = ((x37^(x38%x39))*x40);

	if (t7 != 11311905155863439084LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x41 = 1;
	volatile uint8_t x42 = UINT8_MAX;
	uint8_t x44 = 24U;
	volatile int32_t t8 = 188062;

	t8 = ((x41^(x42%x43))*x44);

	if (t8 != 6096) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = INT16_MAX;
	uint32_t x46 = 89302728U;
	int8_t x47 = INT8_MAX;
	static volatile int32_t x48 = -61673235;
	uint32_t t9 = 14121319U;

	t9 = ((x45^(x46%x47))*x48);

	if (t9 != 2761110756U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = 371LL;
	uint8_t x50 = 0U;
	uint64_t x51 = 1566643106LLU;
	int64_t x52 = 1011196210LL;
	uint64_t t10 = 119359779984906LLU;

	t10 = ((x49^(x50%x51))*x52);

	if (t10 != 375153793910LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x53 = UINT16_MAX;
	int8_t x55 = INT8_MIN;
	static int32_t x56 = -27;

	t11 = ((x53^(x54%x55))*x56);

	if (t11 != -1769445) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = INT16_MIN;
	int32_t x58 = -1754277;
	uint16_t x59 = UINT16_MAX;
	uint8_t x60 = UINT8_MAX;
	int32_t t12 = -2;

	t12 = ((x57^(x58%x59))*x60);

	if (t12 != 12223935) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x61 = 2041881U;
	static uint16_t x62 = 5U;
	int8_t x63 = INT8_MIN;
	int8_t x64 = -1;
	volatile uint32_t t13 = 124569U;

	t13 = ((x61^(x62%x63))*x64);

	if (t13 != 4292925412U) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x66 = INT8_MIN;
	int64_t x67 = -1LL;
	static uint64_t x68 = 1150790938420913LLU;
	volatile uint64_t t14 = 1526835LLU;

	t14 = ((x65^(x66%x67))*x68);

	if (t14 != 9222221245916354895LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x69 = UINT32_MAX;
	int16_t x70 = INT16_MIN;
	uint64_t x71 = 6818LLU;
	static uint64_t x72 = 278418034499139593LLU;

	t15 = ((x69^(x70%x71))*x72);

	if (t15 != 14583464661087828149LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x73 = UINT16_MAX;
	int8_t x74 = -7;
	static volatile uint16_t x75 = 71U;
	int32_t x76 = -1;
	static int32_t t16 = -25183583;

	t16 = ((x73^(x74%x75))*x76);

	if (t16 != 65530) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = INT64_MAX;
	int16_t x78 = INT16_MIN;
	uint64_t x79 = 63LLU;
	int32_t x80 = -20395;
	static volatile uint64_t t17 = 113469482899167LLU;

	t17 = ((x77^(x78%x79))*x80);

	if (t17 != 9223372036854959363LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x83 = -21271111271LL;
	int8_t x84 = INT8_MIN;
	volatile int64_t t18 = -34467084656526LL;

	t18 = ((x81^(x82%x83))*x84);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = 8;
	static int64_t x86 = INT64_MIN;
	static volatile int16_t x87 = INT16_MAX;
	volatile uint16_t x88 = 77U;

	t19 = ((x85^(x86%x87))*x88);

	if (t19 != -1232LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x89 = 156;
	volatile int16_t x90 = INT16_MIN;
	int16_t x91 = INT16_MIN;
	volatile int32_t t20 = 3615;

	t20 = ((x89^(x90%x91))*x92);

	if (t20 != -1092) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = INT8_MIN;
	volatile int64_t x99 = 2161588LL;
	volatile uint64_t t21 = 2142474579368091725LLU;

	t21 = ((x97^(x98%x99))*x100);

	if (t21 != 18429413684198658423LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = -1;
	int16_t x102 = INT16_MIN;
	int16_t x103 = INT16_MAX;
	int8_t x104 = INT8_MIN;
	static volatile int32_t t22 = 866312741;

	t22 = ((x101^(x102%x103))*x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x105 = 4833U;
	volatile uint16_t x107 = UINT16_MAX;
	volatile int64_t x108 = -1LL;
	static volatile int64_t t23 = 487510LL;

	t23 = ((x105^(x106%x107))*x108);

	if (t23 != -4904LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x113 = UINT16_MAX;
	int8_t x114 = -1;
	volatile int16_t x115 = -1088;
	int8_t x116 = 0;
	int32_t t24 = 2453021;

	t24 = ((x113^(x114%x115))*x116);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x117 = INT8_MIN;
	uint16_t x118 = 0U;
	static int8_t x119 = INT8_MIN;

	t25 = ((x117^(x118%x119))*x120);

	if (t25 != -1395968) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x121 = 82U;
	int64_t x122 = INT64_MIN;
	int32_t x123 = 4;
	int8_t x124 = -8;

	t26 = ((x121^(x122%x123))*x124);

	if (t26 != -656LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x125 = 1U;
	uint32_t x126 = 565U;
	volatile uint8_t x128 = 60U;
	static volatile uint32_t t27 = 20U;

	t27 = ((x125^(x126%x127))*x128);

	if (t27 != 33840U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = 21;
	static int32_t x130 = 1264026;
	int16_t x131 = -2741;
	int8_t x132 = 25;
	static int32_t t28 = -15514;

	t28 = ((x129^(x130%x131))*x132);

	if (t28 != 11100) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint64_t x137 = 1062337849472LLU;
	volatile uint8_t x138 = 97U;
	int32_t x139 = INT32_MIN;
	static int16_t x140 = INT16_MIN;
	static uint64_t t29 = 25786773823LLU;

	t29 = ((x137^(x138%x139))*x140);

	if (t29 != 18411933387054874624LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x145 = -4;
	int8_t x147 = -7;
	static volatile int32_t x148 = -4108369;
	volatile int32_t t30 = 5767578;

	t30 = ((x145^(x146%x147))*x148);

	if (t30 != -8216738) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x149 = INT32_MIN;
	int16_t x150 = 2;
	uint64_t x151 = UINT64_MAX;
	int8_t x152 = INT8_MIN;
	volatile uint64_t t31 = 118039181977622688LLU;

	t31 = ((x149^(x150%x151))*x152);

	if (t31 != 274877906688LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x154 = UINT16_MAX;
	int32_t x155 = -265785311;
	uint32_t x156 = UINT32_MAX;

	t32 = ((x153^(x154%x155))*x156);

	if (t32 != 2147418113U) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x161 = INT32_MAX;
	volatile int16_t x162 = INT16_MIN;
	volatile int32_t x164 = -95533294;

	t33 = ((x161^(x162%x163))*x164);

	if (t33 != 3050212662U) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x165 = -1LL;
	static int64_t x166 = -1LL;
	static uint8_t x167 = UINT8_MAX;
	volatile uint64_t x168 = UINT64_MAX;
	volatile uint64_t t34 = 96LLU;

	t34 = ((x165^(x166%x167))*x168);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x169 = 116742U;
	volatile int32_t x170 = -1;
	uint32_t x171 = UINT32_MAX;
	volatile int8_t x172 = -18;

	t35 = ((x169^(x170%x171))*x172);

	if (t35 != 4292865940U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x177 = 0LLU;
	int64_t x179 = -1LL;

	t36 = ((x177^(x178%x179))*x180);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x181 = 4U;
	int64_t x182 = -1LL;
	uint64_t x183 = 2LLU;
	uint64_t x184 = 12LLU;
	uint64_t t37 = 457997298465920553LLU;

	t37 = ((x181^(x182%x183))*x184);

	if (t37 != 60LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x185 = INT32_MIN;
	uint64_t x186 = UINT64_MAX;
	static uint8_t x187 = UINT8_MAX;
	volatile int8_t x188 = INT8_MIN;
	static uint64_t t38 = 7439456562428770733LLU;

	t38 = ((x185^(x186%x187))*x188);

	if (t38 != 274877906944LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x190 = -1;
	int16_t x192 = INT16_MIN;

	t39 = ((x189^(x190%x191))*x192);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x193 = 117U;
	static uint8_t x194 = 44U;
	volatile uint64_t x196 = 3201285LLU;
	volatile uint64_t t40 = 4565122357LLU;

	t40 = ((x193^(x194%x195))*x196);

	if (t40 != 284914365LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x197 = 1547532075411LLU;
	volatile uint8_t x198 = 10U;
	uint64_t x199 = 3337746788LLU;
	int64_t x200 = INT64_MIN;
	volatile uint64_t t41 = 15376274792723LLU;

	t41 = ((x197^(x198%x199))*x200);

	if (t41 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x201 = -1;
	int64_t x202 = 168394LL;
	uint64_t x203 = 34724699134963LLU;
	int16_t x204 = INT16_MIN;
	static volatile uint64_t t42 = 44915801570424LLU;

	t42 = ((x201^(x202%x203))*x204);

	if (t42 != 5517967360LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x209 = UINT64_MAX;
	uint16_t x210 = 442U;
	int16_t x211 = -1;
	volatile uint64_t t43 = 10927LLU;

	t43 = ((x209^(x210%x211))*x212);

	if (t43 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x213 = -1;
	int16_t x214 = INT16_MIN;
	static int8_t x216 = INT8_MAX;
	int32_t t44 = 1;

	t44 = ((x213^(x214%x215))*x216);

	if (t44 != -127) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x221 = INT32_MAX;
	volatile int64_t x222 = -902017697146019LL;
	uint8_t x224 = 16U;
	volatile int64_t t45 = -13122494046935973LL;

	t45 = ((x221^(x222%x223))*x224);

	if (t45 != -34359738320LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x225 = 3U;
	uint8_t x226 = 18U;
	int8_t x227 = 1;

	t46 = ((x225^(x226%x227))*x228);

	if (t46 != -384) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x229 = 465562716U;
	uint64_t x231 = 2LLU;
	uint8_t x232 = 41U;

	t47 = ((x229^(x230%x231))*x232);

	if (t47 != 19088071356LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x237 = 0U;
	uint16_t x238 = UINT16_MAX;
	int32_t x239 = INT32_MIN;

	t48 = ((x237^(x238%x239))*x240);

	if (t48 != 160899711568770LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x241 = 899216599682444632LLU;
	int16_t x243 = 54;
	int16_t x244 = INT16_MIN;
	volatile uint64_t t49 = 42635258293LLU;

	t49 = ((x241^(x242%x243))*x244);

	if (t49 != 6079252680191803392LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x245 = 0;
	static int8_t x247 = 46;
	static uint32_t x248 = 10685U;
	static volatile uint32_t t50 = 302371U;

	t50 = ((x245^(x246%x247))*x248);

	if (t50 != 4294903186U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x249 = INT8_MIN;
	uint32_t x250 = 73U;

	t51 = ((x249^(x250%x251))*x252);

	if (t51 != 4294967186U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x253 = INT8_MIN;
	volatile int64_t x254 = 25260681LL;
	static int8_t x255 = INT8_MIN;
	uint16_t x256 = 15719U;

	t52 = ((x253^(x254%x255))*x256);

	if (t52 != -1870561LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x257 = UINT32_MAX;
	volatile int16_t x258 = -1;
	int32_t x259 = -4514;
	volatile int8_t x260 = INT8_MIN;
	volatile uint32_t t53 = 2U;

	t53 = ((x257^(x258%x259))*x260);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x261 = INT64_MAX;
	int8_t x264 = -1;

	t54 = ((x261^(x262%x263))*x264);

	if (t54 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x270 = 657;
	static int16_t x271 = INT16_MIN;
	uint32_t x272 = UINT32_MAX;
	uint32_t t55 = 1U;

	t55 = ((x269^(x270%x271))*x272);

	if (t55 != 4294966627U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x273 = UINT64_MAX;
	int64_t x275 = -25196656582LL;
	uint8_t x276 = UINT8_MAX;
	volatile uint64_t t56 = 167657332171629LLU;

	t56 = ((x273^(x274%x275))*x276);

	if (t56 != 18446744073709548301LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x277 = INT8_MIN;
	int16_t x278 = -1;
	int64_t x279 = INT64_MIN;
	int16_t x280 = INT16_MAX;
	int64_t t57 = 8312792234698LL;

	t57 = ((x277^(x278%x279))*x280);

	if (t57 != 4161409LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x281 = UINT8_MAX;
	int8_t x282 = 7;
	uint8_t x283 = 18U;
	int16_t x284 = 1;
	int32_t t58 = -7;

	t58 = ((x281^(x282%x283))*x284);

	if (t58 != 248) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x285 = INT64_MIN;
	static volatile uint16_t x286 = 1757U;
	static uint32_t x287 = UINT32_MAX;

	t59 = ((x285^(x286%x287))*x288);

	if (t59 != 788998523536496LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x289 = UINT64_MAX;
	int16_t x290 = -1781;
	uint8_t x291 = 109U;
	int8_t x292 = -5;

	t60 = ((x289^(x290%x291))*x292);

	if (t60 != 18446744073709551436LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x297 = 309U;
	uint16_t x298 = 1U;
	uint64_t x300 = 1690200667LLU;
	uint64_t t61 = 21825001854689564LLU;

	t61 = ((x297^(x298%x299))*x300);

	if (t61 != 520581805436LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x301 = 3231U;
	int8_t x302 = 0;
	int32_t x303 = -1;
	uint16_t x304 = UINT16_MAX;
	int32_t t62 = -5419;

	t62 = ((x301^(x302%x303))*x304);

	if (t62 != 211743585) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x305 = 10008;
	uint32_t x306 = 6649806U;
	int64_t x307 = 6657107LL;
	int32_t x308 = -1;
	volatile int64_t t63 = -499LL;

	t63 = ((x305^(x306%x307))*x308);

	if (t63 != -6639830LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x313 = 714U;
	int8_t x314 = INT8_MIN;
	static uint32_t x316 = UINT32_MAX;
	static uint32_t t64 = 23U;

	t64 = ((x313^(x314%x315))*x316);

	if (t64 != 694U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x317 = 6692310;
	static volatile int64_t x319 = INT64_MIN;
	int16_t x320 = INT16_MIN;
	int64_t t65 = 4LL;

	t65 = ((x317^(x318%x319))*x320);

	if (t65 != -140518194708480LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x321 = INT16_MIN;
	int64_t x322 = INT64_MIN;
	static uint16_t x323 = 12U;
	uint32_t x324 = UINT32_MAX;
	int64_t t66 = -490964398368267608LL;

	t66 = ((x321^(x322%x323))*x324);

	if (t66 != 140703128584200LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x325 = INT8_MIN;
	uint8_t x326 = UINT8_MAX;
	int64_t x327 = INT64_MIN;
	int16_t x328 = INT16_MAX;
	int64_t t67 = 1160LL;

	t67 = ((x325^(x326%x327))*x328);

	if (t67 != -4226943LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x329 = INT64_MIN;
	volatile uint64_t x330 = 291970305452739LLU;
	int64_t x331 = INT64_MIN;
	volatile int16_t x332 = INT16_MAX;
	volatile uint64_t t68 = 311771LLU;

	t68 = ((x329^(x330%x331))*x332);

	if (t68 != 343618961915123005LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x335 = 44116LLU;
	uint8_t x336 = 1U;
	volatile uint64_t t69 = 3036166664030264208LLU;

	t69 = ((x333^(x334%x335))*x336);

	if (t69 != 48963LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x337 = INT64_MAX;
	static int64_t x339 = -4343389899285146533LL;
	static int8_t x340 = -1;
	uint64_t t70 = 27438LLU;

	t70 = ((x337^(x338%x339))*x340);

	if (t70 != 9223372040343822812LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x349 = INT16_MAX;
	static int16_t x350 = 2744;
	int8_t x352 = -1;
	int32_t t71 = -25520646;

	t71 = ((x349^(x350%x351))*x352);

	if (t71 != -32751) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x358 = -9589667093523613LL;
	int32_t x360 = 36828;
	int64_t t72 = 1290962LL;

	t72 = ((x357^(x358%x359))*x360);

	if (t72 != 3241158051656052LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x361 = -1;
	uint64_t x362 = 1210948374876421476LLU;
	volatile uint64_t x363 = UINT64_MAX;
	int8_t x364 = -1;
	volatile uint64_t t73 = 235897863614LLU;

	t73 = ((x361^(x362%x363))*x364);

	if (t73 != 1210948374876421477LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x365 = INT32_MIN;
	int8_t x366 = -7;
	int16_t x367 = INT16_MIN;
	volatile int64_t x368 = 3139LL;
	volatile int64_t t74 = -6426014663392266LL;

	t74 = ((x365^(x366%x367))*x368);

	if (t74 != 6740951149099LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x370 = 74U;
	int64_t x371 = INT64_MAX;
	int16_t x372 = 0;
	int64_t t75 = -46LL;

	t75 = ((x369^(x370%x371))*x372);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x374 = 6U;
	int8_t x376 = INT8_MIN;
	volatile uint32_t t76 = 12690272U;

	t76 = ((x373^(x374%x375))*x376);

	if (t76 != 256U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x377 = UINT64_MAX;
	volatile uint16_t x378 = 24U;
	int64_t x379 = -1LL;
	volatile uint32_t x380 = UINT32_MAX;
	static uint64_t t77 = 25179LLU;

	t77 = ((x377^(x378%x379))*x380);

	if (t77 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x381 = 27U;
	static int64_t x382 = -54LL;
	int8_t x383 = -1;
	int16_t x384 = INT16_MAX;
	int64_t t78 = 553910969051904LL;

	t78 = ((x381^(x382%x383))*x384);

	if (t78 != 884709LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x386 = 23U;
	int32_t x387 = 76582;
	uint16_t x388 = UINT16_MAX;
	uint32_t t79 = 0U;

	t79 = ((x385^(x386%x387))*x388);

	if (t79 != 1376235U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x389 = INT32_MIN;
	int32_t x390 = INT32_MIN;
	volatile int64_t x391 = -24691035460515997LL;
	volatile int64_t t80 = 60238397LL;

	t80 = ((x389^(x390%x391))*x392);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x395 = 1890;
	uint32_t x396 = UINT32_MAX;
	volatile uint32_t t81 = 62709U;

	t81 = ((x393^(x394%x395))*x396);

	if (t81 != 4294967237U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x397 = INT8_MIN;
	int64_t x398 = -22216510430LL;
	static int32_t x400 = -1;
	int64_t t82 = -1LL;

	t82 = ((x397^(x398%x399))*x400);

	if (t82 != -34LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x401 = -1;
	int16_t x402 = -1;
	volatile uint16_t x403 = 2036U;
	static volatile int32_t x404 = -1;
	int32_t t83 = -95360829;

	t83 = ((x401^(x402%x403))*x404);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x405 = -1;
	uint32_t x406 = 141205U;
	static int16_t x407 = -100;
	int32_t x408 = INT32_MAX;
	static volatile uint32_t t84 = 59335U;

	t84 = ((x405^(x406%x407))*x408);

	if (t84 != 141206U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x409 = -1;
	int8_t x410 = 14;
	volatile int8_t x411 = 24;
	volatile int16_t x412 = INT16_MAX;
	int32_t t85 = -491156094;

	t85 = ((x409^(x410%x411))*x412);

	if (t85 != -491505) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x413 = -1;
	int64_t x414 = INT64_MAX;
	int32_t x415 = INT32_MIN;
	int16_t x416 = 89;
	volatile int64_t t86 = 22396647152952LL;

	t86 = ((x413^(x414%x415))*x416);

	if (t86 != -191126044672LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint8_t x417 = 2U;
	int32_t x418 = -1;
	volatile int32_t x419 = INT32_MIN;
	volatile int32_t t87 = -58;

	t87 = ((x417^(x418%x419))*x420);

	if (t87 != 384) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x421 = 153715654LLU;
	uint64_t x422 = UINT64_MAX;
	int64_t x423 = INT64_MIN;
	static uint64_t t88 = 1011LLU;

	t88 = ((x421^(x422%x423))*x424);

	if (t88 != 18446744063256887076LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x425 = 1U;
	uint64_t x427 = 330487063LLU;
	int64_t x428 = INT64_MIN;
	volatile uint64_t t89 = 795LLU;

	t89 = ((x425^(x426%x427))*x428);

	if (t89 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x433 = -1;
	uint32_t x434 = 15648708U;
	volatile uint16_t x436 = 24767U;
	uint32_t t90 = 16907224U;

	t90 = ((x433^(x434%x435))*x436);

	if (t90 != 4291896188U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x437 = INT64_MIN;
	int16_t x438 = -1;
	int8_t x439 = INT8_MAX;
	volatile uint64_t x440 = UINT64_MAX;
	static volatile uint64_t t91 = 16413760535000803LLU;

	t91 = ((x437^(x438%x439))*x440);

	if (t91 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x441 = 245U;
	static int64_t x442 = 3913329167396352274LL;
	volatile int16_t x443 = 12;
	static uint64_t x444 = 419521676646013LLU;
	static uint64_t t92 = 2291343145LLU;

	t92 = ((x441^(x442%x443))*x444);

	if (t92 != 106978027544733315LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x445 = UINT8_MAX;
	volatile int64_t x446 = INT64_MAX;
	uint8_t x447 = 6U;
	int64_t t93 = -211476097696LL;

	t93 = ((x445^(x446%x447))*x448);

	if (t93 != -545460846592LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x449 = INT32_MIN;
	uint16_t x450 = 5060U;
	int8_t x451 = INT8_MIN;
	static volatile uint32_t x452 = 53822U;
	volatile uint32_t t94 = 175U;

	t94 = ((x449^(x450%x451))*x452);

	if (t94 != 3659896U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x453 = 3905LLU;
	uint64_t x454 = 8310049191482268LLU;
	volatile uint64_t t95 = 2976144LLU;

	t95 = ((x453^(x454%x455))*x456);

	if (t95 != 17253206438559755743LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x457 = INT8_MIN;
	int16_t x458 = -2;
	volatile int32_t x459 = -60567633;
	volatile int8_t x460 = -1;
	static volatile int32_t t96 = 215725;

	t96 = ((x457^(x458%x459))*x460);

	if (t96 != -126) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x465 = 449;
	volatile int32_t x467 = INT32_MAX;
	volatile int32_t t97 = 1653605;

	t97 = ((x465^(x466%x467))*x468);

	if (t97 != -4104513) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x469 = -7;
	int64_t x471 = -1LL;
	static int16_t x472 = INT16_MAX;
	int64_t t98 = 13LL;

	t98 = ((x469^(x470%x471))*x472);

	if (t98 != -229369LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x473 = -3;
	uint8_t x474 = 18U;
	static uint64_t x475 = 976492954224250LLU;
	int64_t x476 = INT64_MAX;

	t99 = ((x473^(x474%x475))*x476);

	if (t99 != 9223372036854775825LLU) { NG(); } else { ; }
	
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

