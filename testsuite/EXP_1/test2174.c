#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x5 = 2U;
int8_t x7 = INT8_MIN;
uint32_t t1 = 21244U;
int32_t x15 = -63;
int8_t x21 = INT8_MIN;
int32_t x32 = INT32_MAX;
int64_t x40 = -573650943LL;
static int8_t x42 = INT8_MIN;
int32_t x47 = INT32_MIN;
uint16_t x48 = 3181U;
uint8_t x55 = UINT8_MAX;
int64_t x56 = -611LL;
static uint16_t x61 = UINT16_MAX;
int32_t x62 = -3;
static volatile uint32_t x69 = UINT32_MAX;
uint64_t x70 = UINT64_MAX;
uint8_t x76 = UINT8_MAX;
uint16_t x78 = 5400U;
int64_t x81 = INT64_MIN;
volatile int16_t x82 = INT16_MIN;
static uint32_t x85 = 39083042U;
int8_t x86 = INT8_MAX;
uint64_t x88 = 520175184LLU;
uint32_t x90 = 4U;
int8_t x95 = 3;
static int64_t x97 = INT64_MAX;
int8_t x105 = INT8_MIN;
int16_t x111 = INT16_MIN;
volatile uint64_t t25 = 570LLU;
int64_t x114 = -1LL;
static volatile int32_t t27 = -785748138;
uint16_t x133 = 250U;
uint64_t x134 = 245396LLU;
uint32_t x140 = 2016U;
static int8_t x141 = INT8_MIN;
volatile int16_t x149 = INT16_MAX;
uint16_t x150 = UINT16_MAX;
static uint32_t x151 = 1011986U;
static int64_t t35 = -3091194915LL;
int16_t x170 = INT16_MIN;
volatile int64_t x177 = -1LL;
static int8_t x180 = INT8_MAX;
int64_t t38 = -1818745532LL;
int16_t x183 = -1;
int32_t x191 = -1;
volatile int64_t t41 = 793048LL;
uint64_t t43 = 8586524951003852LLU;
uint32_t x214 = 15U;
volatile int64_t x215 = -15501221204307752LL;
uint8_t x216 = 12U;
static int32_t x217 = -1;
uint8_t x225 = 32U;
uint64_t t50 = 720228431LLU;
int32_t x235 = -1;
int16_t x240 = -1;
volatile int32_t x242 = -1;
int16_t x243 = INT16_MAX;
uint8_t x245 = 107U;
static int8_t x246 = -1;
int64_t x249 = INT64_MAX;
int8_t x264 = 1;
int16_t x265 = INT16_MIN;
int32_t x275 = 8142;
int16_t x277 = INT16_MAX;
int16_t x292 = -1;
uint64_t x296 = 7842246LLU;
static volatile uint32_t x299 = UINT32_MAX;
volatile uint32_t t66 = 614165596U;
static volatile uint64_t t68 = 2978232866LLU;
uint64_t x325 = 7416595654LLU;
uint64_t t71 = 59082126LLU;
uint64_t x329 = 111191632LLU;
int16_t x330 = -84;
static int64_t x339 = INT64_MAX;
volatile int64_t t74 = 2962291964722LL;
static int16_t x344 = INT16_MIN;
uint32_t x346 = 515U;
uint32_t x348 = 831035537U;
uint64_t x357 = 29056LLU;
int64_t x360 = -1LL;
static int64_t x367 = INT64_MIN;
uint64_t t80 = 5646108952939618124LLU;
static int32_t x376 = -39;
uint16_t x377 = UINT16_MAX;
uint64_t x391 = UINT64_MAX;
uint16_t x392 = 90U;
uint64_t t84 = 255419879441294123LLU;
static volatile int64_t t86 = 1163LL;
volatile int8_t x421 = -1;
uint64_t x428 = 4577654462LLU;
uint64_t x434 = 718380780367LLU;
int32_t x435 = INT32_MIN;
volatile int64_t x445 = 125166LL;
volatile uint64_t t95 = 6644911175388LLU;
int64_t x450 = -1LL;
int64_t x457 = 3319352165060931645LL;


void f0(void) {
	int32_t x1 = 908702;
	static int16_t x2 = -1542;
	int64_t x3 = INT64_MAX;
	volatile int16_t x4 = INT16_MIN;
	volatile int64_t t0 = -15LL;

	t0 = (((x1^x2)|x3)*x4);

	if (t0 != 32768LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x6 = INT16_MIN;
	int32_t x8 = -1003520391;

	t1 = (((x5^x6)|x7)*x8);

	if (t1 != 1889517682U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = -1;
	int8_t x10 = -1;
	uint32_t x11 = 345U;
	volatile int32_t x12 = INT32_MIN;
	uint32_t t2 = 10333539U;

	t2 = (((x9^x10)|x11)*x12);

	if (t2 != 2147483648U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = -1;
	uint32_t x14 = 1U;
	int32_t x16 = INT32_MIN;
	uint32_t t3 = 34126U;

	t3 = (((x13^x14)|x15)*x16);

	if (t3 != 2147483648U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 136302167;
	static int16_t x18 = INT16_MIN;
	int64_t x19 = INT64_MIN;
	int32_t x20 = INT32_MIN;
	int64_t t4 = 470456LL;

	t4 = (((x17^x18)|x19)*x20);

	if (t4 != 292690907994521600LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x22 = 100228250LLU;
	uint64_t x23 = 49267496LLU;
	uint32_t x24 = 119235203U;
	uint64_t t5 = 484530193820LLU;

	t5 = (((x21^x22)|x23)*x24);

	if (t5 != 18436615994473151150LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 5632U;
	int32_t x26 = -1;
	int8_t x27 = INT8_MAX;
	static int8_t x28 = INT8_MAX;
	int32_t t6 = 20;

	t6 = (((x25^x26)|x27)*x28);

	if (t6 != -715391) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = INT64_MAX;
	volatile uint16_t x30 = 20299U;
	uint64_t x31 = 426267678LLU;
	uint64_t t7 = 1217650184392518503LLU;

	t7 = (((x29^x30)|x31)*x32);

	if (t7 != 9223365847806905154LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 1;
	int8_t x34 = -1;
	volatile int64_t x35 = INT64_MIN;
	int16_t x36 = INT16_MAX;
	volatile int64_t t8 = -406788830LL;

	t8 = (((x33^x34)|x35)*x36);

	if (t8 != -65534LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = -1;
	uint64_t x38 = UINT64_MAX;
	uint16_t x39 = 88U;
	uint64_t t9 = 395LLU;

	t9 = (((x37^x38)|x39)*x40);

	if (t9 != 18446744023228268632LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	int64_t x43 = INT64_MIN;
	uint64_t x44 = UINT64_MAX;
	uint64_t t10 = 9282172372LLU;

	t10 = (((x41^x42)|x43)*x44);

	if (t10 != 9223372036854775681LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = INT8_MAX;
	uint64_t x46 = 10842325909170LLU;
	volatile uint64_t t11 = 11560729588558LLU;

	t11 = (((x45^x46)|x47)*x48);

	if (t11 != 18446743058876537161LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	volatile uint16_t x50 = UINT16_MAX;
	int16_t x51 = INT16_MIN;
	int16_t x52 = -1059;
	static volatile uint32_t t12 = 2151884U;

	t12 = (((x49^x50)|x51)*x52);

	if (t12 != 34701312U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	int64_t x54 = -1LL;
	volatile int64_t t13 = -1704433348409364LL;

	t13 = (((x53^x54)|x55)*x56);

	if (t13 != -155805LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x63 = UINT16_MAX;
	int64_t x64 = -3009782361LL;
	volatile int64_t t14 = -44055642498LL;

	t14 = (((x61^x62)|x63)*x64);

	if (t14 != 3009782361LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = 9U;
	int64_t x66 = INT64_MIN;
	static int16_t x67 = INT16_MIN;
	int64_t x68 = 152713316291LL;
	static volatile int64_t t15 = -4034552068199125LL;

	t15 = (((x65^x66)|x67)*x68);

	if (t15 != -5002735528376869LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x71 = 14LL;
	volatile int32_t x72 = INT32_MIN;
	volatile uint64_t t16 = 23092616LLU;

	t16 = (((x69^x70)|x71)*x72);

	if (t16 != 9223372006790004736LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MIN;
	int8_t x74 = INT8_MIN;
	int32_t x75 = -35122;
	static volatile int32_t t17 = 3020482;

	t17 = (((x73^x74)|x75)*x76);

	if (t17 != -12750) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x77 = 3282U;
	int16_t x79 = 5506;
	uint8_t x80 = 17U;
	int32_t t18 = 921;

	t18 = (((x77^x78)|x79)*x80);

	if (t18 != 129642) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x83 = 7161304718504255LLU;
	volatile int32_t x84 = INT32_MIN;
	uint64_t t19 = 735LLU;

	t19 = (((x81^x82)|x83)*x84);

	if (t19 != 8111045738496LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x87 = UINT64_MAX;
	volatile uint64_t t20 = 81LLU;

	t20 = (((x85^x86)|x87)*x88);

	if (t20 != 18446744073189376432LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x89 = 268035767LLU;
	int64_t x91 = INT64_MIN;
	volatile uint8_t x92 = 5U;
	volatile uint64_t t21 = 27430069941445353LLU;

	t21 = (((x89^x90)|x91)*x92);

	if (t21 != 9223372038194954623LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = -1;
	int64_t x94 = 979LL;
	int16_t x96 = INT16_MIN;
	static volatile int64_t t22 = -7649186107LL;

	t22 = (((x93^x94)|x95)*x96);

	if (t22 != 32014336LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x98 = -15;
	uint32_t x99 = 15U;
	static int8_t x100 = -1;
	static int64_t t23 = -6631921662LL;

	t23 = (((x97^x98)|x99)*x100);

	if (t23 != 9223372036854775793LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x106 = -187270521774LL;
	volatile int64_t x107 = INT64_MIN;
	int64_t x108 = -1LL;
	volatile int64_t t24 = 187811856479131LL;

	t24 = (((x105^x106)|x107)*x108);

	if (t24 != 9223371849584253998LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = INT8_MIN;
	uint32_t x110 = UINT32_MAX;
	static uint64_t x112 = UINT64_MAX;

	t25 = (((x109^x110)|x111)*x112);

	if (t25 != 18446744069414616961LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x113 = INT32_MAX;
	static int64_t x115 = 4402842LL;
	static uint16_t x116 = 196U;
	int64_t t26 = 30811961LL;

	t26 = (((x113^x114)|x115)*x116);

	if (t26 != -420043837976LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x125 = UINT16_MAX;
	volatile int32_t x126 = -6791;
	int32_t x127 = -1;
	int8_t x128 = INT8_MIN;

	t27 = (((x125^x126)|x127)*x128);

	if (t27 != 128) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x129 = 5358U;
	uint16_t x130 = 7791U;
	int64_t x131 = -53LL;
	uint16_t x132 = 3865U;
	int64_t t28 = 11383954LL;

	t28 = (((x129^x130)|x131)*x132);

	if (t28 != -204845LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x135 = 1;
	static int8_t x136 = 1;
	static uint64_t t29 = 319414970LLU;

	t29 = (((x133^x134)|x135)*x136);

	if (t29 != 245359LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x137 = INT64_MIN;
	int8_t x138 = INT8_MIN;
	static int64_t x139 = -695424LL;
	int64_t t30 = -30288844LL;

	t30 = (((x137^x138)|x139)*x140);

	if (t30 != -258048LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x142 = 0;
	static uint8_t x143 = 9U;
	static volatile int32_t x144 = -1031;
	int32_t t31 = 6057;

	t31 = (((x141^x142)|x143)*x144);

	if (t31 != 122689) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x152 = 587;
	volatile uint32_t t32 = 11779U;

	t32 = (((x149^x150)|x151)*x152);

	if (t32 != 613270598U) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x153 = INT32_MIN;
	uint64_t x154 = UINT64_MAX;
	int64_t x155 = -1LL;
	int8_t x156 = 9;
	static volatile uint64_t t33 = 16804925281LLU;

	t33 = (((x153^x154)|x155)*x156);

	if (t33 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x161 = UINT32_MAX;
	static int8_t x162 = -1;
	static int64_t x163 = -1LL;
	int32_t x164 = INT32_MIN;
	volatile int64_t t34 = 70862337976LL;

	t34 = (((x161^x162)|x163)*x164);

	if (t34 != 2147483648LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x165 = 7876733667076LL;
	uint32_t x166 = 176102U;
	uint8_t x167 = UINT8_MAX;
	int16_t x168 = INT16_MAX;

	t35 = (((x165^x166)|x167)*x168);

	if (t35 != 258096935575246593LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x169 = INT64_MIN;
	int8_t x171 = -52;
	uint32_t x172 = UINT32_MAX;
	static int64_t t36 = 6721498LL;

	t36 = (((x169^x170)|x171)*x172);

	if (t36 != -223338299340LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x173 = 1347848378U;
	int8_t x174 = INT8_MIN;
	int32_t x175 = INT32_MIN;
	uint64_t x176 = 90078949323001191LLU;
	volatile uint64_t t37 = 10448013364396LLU;

	t37 = (((x173^x174)|x175)*x176);

	if (t37 != 8724693492103211606LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x178 = 68U;
	int64_t x179 = INT64_MIN;

	t38 = (((x177^x178)|x179)*x180);

	if (t38 != -8763LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x181 = -1;
	int32_t x182 = INT32_MAX;
	uint32_t x184 = 3U;
	volatile uint32_t t39 = 62085U;

	t39 = (((x181^x182)|x183)*x184);

	if (t39 != 4294967293U) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x185 = -1;
	int32_t x186 = INT32_MAX;
	uint32_t x187 = 59078210U;
	int8_t x188 = 1;
	volatile uint32_t t40 = 1326528U;

	t40 = (((x185^x186)|x187)*x188);

	if (t40 != 2206561858U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x189 = INT64_MAX;
	int8_t x190 = 2;
	volatile int8_t x192 = INT8_MIN;

	t41 = (((x189^x190)|x191)*x192);

	if (t41 != 128LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x193 = UINT32_MAX;
	uint64_t x194 = 985717285702062597LLU;
	int8_t x195 = -1;
	int64_t x196 = INT64_MIN;
	volatile uint64_t t42 = 374427704160887626LLU;

	t42 = (((x193^x194)|x195)*x196);

	if (t42 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x197 = 0;
	static int16_t x198 = -30;
	uint64_t x199 = 11LLU;
	int16_t x200 = -1;

	t43 = (((x197^x198)|x199)*x200);

	if (t43 != 21LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x201 = -1;
	uint16_t x202 = UINT16_MAX;
	volatile int8_t x203 = -20;
	volatile int16_t x204 = -1;
	volatile int32_t t44 = -31632478;

	t44 = (((x201^x202)|x203)*x204);

	if (t44 != 20) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x205 = INT32_MIN;
	int64_t x206 = INT64_MIN;
	int32_t x207 = -1;
	volatile int32_t x208 = -1;
	static volatile int64_t t45 = 8657487033176276LL;

	t45 = (((x205^x206)|x207)*x208);

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x209 = 2789U;
	volatile int8_t x210 = INT8_MIN;
	static int32_t x211 = 2209;
	int16_t x212 = -1;
	volatile int32_t t46 = 6197;

	t46 = (((x209^x210)|x211)*x212);

	if (t46 != 539) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x213 = UINT64_MAX;
	uint64_t t47 = 238737005LLU;

	t47 = (((x213^x214)|x215)*x216);

	if (t47 != 18446744073709551520LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x218 = UINT64_MAX;
	static int64_t x219 = INT64_MIN;
	uint64_t x220 = 41913LLU;
	static volatile uint64_t t48 = 110198438561LLU;

	t48 = (((x217^x218)|x219)*x220);

	if (t48 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x221 = INT8_MIN;
	volatile uint16_t x222 = UINT16_MAX;
	static uint32_t x223 = UINT32_MAX;
	static uint16_t x224 = UINT16_MAX;
	volatile uint32_t t49 = 3U;

	t49 = (((x221^x222)|x223)*x224);

	if (t49 != 4294901761U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x226 = 22448LLU;
	int16_t x227 = -25;
	int8_t x228 = -1;

	t50 = (((x225^x226)|x227)*x228);

	if (t50 != 9LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x229 = -1576626366587LL;
	static int16_t x230 = INT16_MIN;
	uint8_t x231 = UINT8_MAX;
	volatile int32_t x232 = -1;
	static volatile int64_t t51 = -4537LL;

	t51 = (((x229^x230)|x231)*x232);

	if (t51 != -1576626378751LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x233 = -26;
	uint8_t x234 = 1U;
	int16_t x236 = INT16_MIN;
	int32_t t52 = -48054429;

	t52 = (((x233^x234)|x235)*x236);

	if (t52 != 32768) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x237 = UINT32_MAX;
	volatile int16_t x238 = 893;
	int8_t x239 = INT8_MIN;
	volatile uint32_t t53 = 40199422U;

	t53 = (((x237^x238)|x239)*x240);

	if (t53 != 126U) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x241 = INT8_MIN;
	uint8_t x244 = 4U;
	volatile int32_t t54 = 260697131;

	t54 = (((x241^x242)|x243)*x244);

	if (t54 != 131068) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x247 = 98;
	volatile int8_t x248 = -1;
	volatile int32_t t55 = -739099923;

	t55 = (((x245^x246)|x247)*x248);

	if (t55 != 10) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x250 = INT8_MAX;
	uint64_t x251 = 3LLU;
	int64_t x252 = INT64_MIN;
	uint64_t t56 = 845658683841315480LLU;

	t56 = (((x249^x250)|x251)*x252);

	if (t56 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x261 = INT32_MIN;
	static volatile int8_t x262 = -1;
	static int64_t x263 = 391819671376LL;
	static volatile int64_t t57 = 55468908LL;

	t57 = (((x261^x262)|x263)*x264);

	if (t57 != 392989507583LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x266 = INT64_MAX;
	uint32_t x267 = 4U;
	volatile uint64_t x268 = 343LLU;
	uint64_t t58 = 5934954206LLU;

	t58 = (((x265^x266)|x267)*x268);

	if (t58 != 9223372036866014889LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x269 = INT16_MIN;
	int32_t x270 = INT32_MIN;
	int64_t x271 = -410165LL;
	uint32_t x272 = UINT32_MAX;
	static volatile int64_t t59 = 546571212LL;

	t59 = (((x269^x270)|x271)*x272);

	if (t59 != -72795400682955LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x273 = -1;
	volatile int8_t x274 = -1;
	int16_t x276 = INT16_MIN;
	int32_t t60 = -147476;

	t60 = (((x273^x274)|x275)*x276);

	if (t60 != -266797056) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x278 = -5;
	int16_t x279 = INT16_MIN;
	volatile uint32_t x280 = 9724U;
	volatile uint32_t t61 = 2778554U;

	t61 = (((x277^x278)|x279)*x280);

	if (t61 != 3976370160U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x281 = -243842;
	static volatile int16_t x282 = -47;
	int32_t x283 = 214;
	int64_t x284 = -1LL;
	int64_t t62 = -1939426681146LL;

	t62 = (((x281^x282)|x283)*x284);

	if (t62 != -243967LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x285 = INT16_MAX;
	int8_t x286 = INT8_MAX;
	int8_t x287 = INT8_MAX;
	static int8_t x288 = INT8_MIN;
	volatile int32_t t63 = -71;

	t63 = (((x285^x286)|x287)*x288);

	if (t63 != -4194176) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x289 = 836U;
	int16_t x290 = 1;
	int32_t x291 = 5;
	int32_t t64 = -389563;

	t64 = (((x289^x290)|x291)*x292);

	if (t64 != -837) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x293 = INT64_MIN;
	static volatile uint32_t x294 = UINT32_MAX;
	static uint32_t x295 = 22U;
	volatile uint64_t t65 = 3644845060589233985LLU;

	t65 = (((x293^x294)|x295)*x296);

	if (t65 != 33682190089344570LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x297 = UINT8_MAX;
	int8_t x298 = INT8_MIN;
	int16_t x300 = INT16_MIN;

	t66 = (((x297^x298)|x299)*x300);

	if (t66 != 32768U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x301 = 5914475983621LL;
	static int8_t x302 = INT8_MIN;
	int16_t x303 = INT16_MAX;
	volatile uint8_t x304 = UINT8_MAX;
	int64_t t67 = -3733LL;

	t67 = (((x301^x302)|x303)*x304);

	if (t67 != -1508191368315135LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x305 = UINT8_MAX;
	int16_t x306 = INT16_MIN;
	volatile int16_t x307 = 164;
	uint64_t x308 = 117642LLU;

	t68 = (((x305^x306)|x307)*x308);

	if (t68 != 18446744069884657270LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x313 = -854;
	int16_t x314 = -409;
	volatile int8_t x315 = 11;
	volatile uint16_t x316 = 2343U;
	static volatile int32_t t69 = -701;

	t69 = (((x313^x314)|x315)*x316);

	if (t69 != 1684617) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x317 = -15204;
	volatile uint64_t x318 = 49LLU;
	int32_t x319 = -1;
	int8_t x320 = INT8_MIN;
	uint64_t t70 = 15809LLU;

	t70 = (((x317^x318)|x319)*x320);

	if (t70 != 128LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x326 = 0U;
	volatile int8_t x327 = 2;
	uint64_t x328 = 1737520122LLU;

	t71 = (((x325^x326)|x327)*x328);

	if (t71 != 12886484185562749788LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x331 = 127;
	int8_t x332 = 3;
	uint64_t t72 = 115894205964007761LLU;

	t72 = (((x329^x330)|x331)*x332);

	if (t72 != 18446744073375976957LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x333 = INT64_MIN;
	static int8_t x334 = 2;
	int32_t x335 = -4;
	static volatile int64_t x336 = -12LL;
	int64_t t73 = -3306LL;

	t73 = (((x333^x334)|x335)*x336);

	if (t73 != 24LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x337 = UINT32_MAX;
	int8_t x338 = 5;
	volatile int8_t x340 = -1;

	t74 = (((x337^x338)|x339)*x340);

	if (t74 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x341 = 129502417LL;
	int64_t x342 = -1LL;
	static int64_t x343 = INT64_MIN;
	volatile int64_t t75 = 296LL;

	t75 = (((x341^x342)|x343)*x344);

	if (t75 != 4243535233024LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x345 = 9U;
	uint16_t x347 = 128U;
	static uint32_t t76 = 34734U;

	t76 = (((x345^x346)|x347)*x348);

	if (t76 != 3302187050U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x349 = INT32_MIN;
	int32_t x350 = INT32_MAX;
	uint32_t x351 = 121U;
	int16_t x352 = INT16_MIN;
	static uint32_t t77 = 2793366U;

	t77 = (((x349^x350)|x351)*x352);

	if (t77 != 32768U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x358 = -16151;
	int64_t x359 = -1LL;
	volatile uint64_t t78 = 173LLU;

	t78 = (((x357^x358)|x359)*x360);

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x361 = 7U;
	int32_t x362 = INT32_MAX;
	int16_t x363 = INT16_MIN;
	uint8_t x364 = 8U;
	int32_t t79 = -95714019;

	t79 = (((x361^x362)|x363)*x364);

	if (t79 != -64) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x365 = UINT64_MAX;
	volatile int64_t x366 = INT64_MAX;
	int64_t x368 = INT64_MIN;

	t80 = (((x365^x366)|x367)*x368);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x373 = -6;
	volatile uint16_t x374 = 7372U;
	int16_t x375 = -1;
	static int32_t t81 = 86;

	t81 = (((x373^x374)|x375)*x376);

	if (t81 != 39) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x378 = INT8_MAX;
	uint64_t x379 = UINT64_MAX;
	uint8_t x380 = 2U;
	uint64_t t82 = 1663707509LLU;

	t82 = (((x377^x378)|x379)*x380);

	if (t82 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x381 = INT16_MIN;
	int32_t x382 = INT32_MAX;
	uint32_t x383 = 98484209U;
	uint8_t x384 = 4U;
	volatile uint32_t t83 = 165243U;

	t83 = (((x381^x382)|x383)*x384);

	if (t83 != 394002428U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x389 = INT16_MIN;
	volatile int16_t x390 = -1;

	t84 = (((x389^x390)|x391)*x392);

	if (t84 != 18446744073709551526LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x393 = INT32_MIN;
	int32_t x394 = INT32_MAX;
	int16_t x395 = INT16_MIN;
	volatile int8_t x396 = -1;
	int32_t t85 = 83;

	t85 = (((x393^x394)|x395)*x396);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x397 = -1558491154LL;
	volatile uint32_t x398 = 318U;
	static uint32_t x399 = UINT32_MAX;
	uint8_t x400 = 0U;

	t86 = (((x397^x398)|x399)*x400);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x405 = -1;
	int8_t x406 = -1;
	uint32_t x407 = 3U;
	uint32_t x408 = 106540U;
	static uint32_t t87 = 1019662U;

	t87 = (((x405^x406)|x407)*x408);

	if (t87 != 319620U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x409 = INT64_MAX;
	int16_t x410 = -1;
	uint32_t x411 = UINT32_MAX;
	int16_t x412 = -1;
	static int64_t t88 = 210779511927LL;

	t88 = (((x409^x410)|x411)*x412);

	if (t88 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x413 = -684748711524LL;
	int16_t x414 = 0;
	int16_t x415 = -1;
	int32_t x416 = -1;
	volatile int64_t t89 = -161685LL;

	t89 = (((x413^x414)|x415)*x416);

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x417 = 6739875969136440LL;
	static uint8_t x418 = 3U;
	int8_t x419 = -1;
	int16_t x420 = -1;
	volatile int64_t t90 = 231LL;

	t90 = (((x417^x418)|x419)*x420);

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x422 = -1;
	int8_t x423 = -1;
	volatile uint32_t x424 = 1363U;
	volatile uint32_t t91 = 0U;

	t91 = (((x421^x422)|x423)*x424);

	if (t91 != 4294965933U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x425 = -1LL;
	int16_t x426 = INT16_MIN;
	int16_t x427 = -28;
	volatile uint64_t t92 = 12917331LLU;

	t92 = (((x425^x426)|x427)*x428);

	if (t92 != 18446744069131897154LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x433 = -5683;
	static int8_t x436 = 0;
	volatile uint64_t t93 = 29LLU;

	t93 = (((x433^x434)|x435)*x436);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x437 = -1;
	int64_t x438 = INT64_MIN;
	uint64_t x439 = 3780LLU;
	int64_t x440 = -1LL;
	uint64_t t94 = 198281817115323675LLU;

	t94 = (((x437^x438)|x439)*x440);

	if (t94 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x446 = INT64_MAX;
	int8_t x447 = -1;
	uint64_t x448 = UINT64_MAX;

	t95 = (((x445^x446)|x447)*x448);

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x449 = INT32_MAX;
	int8_t x451 = INT8_MIN;
	uint16_t x452 = 107U;
	static int64_t t96 = 3375679652559725520LL;

	t96 = (((x449^x450)|x451)*x452);

	if (t96 != -13696LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x453 = UINT16_MAX;
	volatile int64_t x454 = -62983005LL;
	uint32_t x455 = 417397U;
	int32_t x456 = INT32_MAX;
	static volatile int64_t t97 = 104976857466LL;

	t97 = (((x453^x454)|x455)*x456);

	if (t97 != -135336968497028989LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x458 = INT64_MIN;
	int8_t x459 = INT8_MIN;
	volatile uint8_t x460 = 11U;
	static int64_t t98 = 234LL;

	t98 = (((x457^x458)|x459)*x460);

	if (t98 != -737LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x461 = INT16_MIN;
	int16_t x462 = -1;
	int16_t x463 = -1;
	int32_t x464 = INT32_MAX;
	static volatile int32_t t99 = 72;

	t99 = (((x461^x462)|x463)*x464);

	if (t99 != -2147483647) { NG(); } else { ; }
	
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

