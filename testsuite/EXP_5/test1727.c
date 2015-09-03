#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x15 = 29U;
static int8_t x16 = -1;
int64_t t1 = -28LL;
static int8_t x17 = INT8_MIN;
static int16_t x21 = INT16_MAX;
static int32_t x24 = INT32_MIN;
int16_t x27 = -1;
volatile uint8_t x28 = UINT8_MAX;
static volatile int32_t t4 = -58;
int32_t x29 = 182664077;
uint8_t x30 = 119U;
volatile int32_t t5 = -107;
static int32_t x41 = -1;
int32_t x57 = -1;
uint8_t x71 = UINT8_MAX;
uint16_t x73 = 30826U;
int64_t x79 = 12778139LL;
int16_t x82 = -1;
uint8_t x83 = 1U;
static uint8_t x97 = UINT8_MAX;
int16_t x98 = 0;
uint64_t t19 = 668LLU;
uint64_t x105 = 4074574107034286666LLU;
static uint64_t x106 = 36787942954652LLU;
int16_t x111 = -5976;
int64_t x116 = -224875LL;
int64_t t28 = 1362901343882LL;
volatile int16_t x142 = INT16_MIN;
volatile int8_t x144 = 37;
volatile int32_t t30 = 27;
uint64_t t31 = 26LLU;
volatile uint32_t x168 = 13099U;
uint16_t x169 = UINT16_MAX;
uint64_t t33 = 743LLU;
uint64_t x174 = UINT64_MAX;
int16_t x178 = -1;
int16_t x182 = 8393;
uint32_t x188 = 33018U;
uint64_t x193 = UINT64_MAX;
int64_t x201 = -1LL;
static volatile int64_t t41 = -22375LL;
uint64_t x208 = UINT64_MAX;
volatile uint8_t x217 = 11U;
int8_t x224 = -2;
uint64_t t50 = 375264LLU;
int16_t x280 = -1;
uint64_t t54 = 4940LLU;
static int8_t x285 = INT8_MIN;
int32_t x292 = INT32_MIN;
uint32_t t56 = 1933980613U;
int32_t x293 = -1;
int8_t x294 = INT8_MIN;
int64_t x302 = INT64_MAX;
volatile uint64_t t59 = 294263035588633624LLU;
static uint16_t x314 = 10416U;
int32_t x323 = INT32_MIN;
static int64_t x325 = -1LL;
int16_t x326 = INT16_MAX;
int64_t x336 = INT64_MIN;
uint64_t x337 = 89920185579757191LLU;
int8_t x338 = 0;
uint64_t t68 = 4054190LLU;
static int64_t x346 = INT64_MAX;
volatile int8_t x347 = 10;
int16_t x353 = -15447;
int16_t x359 = -1;
static volatile int64_t t73 = -5LL;
volatile uint8_t x385 = UINT8_MAX;
volatile uint16_t x387 = 53U;
int16_t x392 = 2641;
static uint8_t x396 = 6U;
uint8_t x403 = 51U;
static uint16_t x409 = 1682U;
int32_t x412 = INT32_MIN;
static int16_t x430 = INT16_MIN;
int32_t t87 = -14370389;
static volatile uint8_t x435 = 38U;
static int16_t x439 = -80;
uint64_t x456 = 2935078682068LLU;
static int16_t x460 = INT16_MAX;
static int64_t x464 = INT64_MAX;
int64_t x473 = -49LL;
int16_t x475 = -936;


void f0(void) {
	int32_t x5 = 2669;
	int32_t x6 = -1;
	int64_t x7 = 58324012606LL;
	int16_t x8 = 0;
	volatile int64_t t0 = -92618363174LL;

	t0 = (x5&((x6&x7)*x8));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x13 = INT16_MAX;
	int64_t x14 = INT64_MIN;

	t1 = (x13&((x14&x15)*x16));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x18 = INT64_MIN;
	uint64_t x19 = 6212794518035498LLU;
	int32_t x20 = INT32_MIN;
	uint64_t t2 = 15395624LLU;

	t2 = (x17&((x18&x19)*x20));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x22 = -1720598730172134897LL;
	volatile int64_t x23 = 108090155951260519LL;
	int64_t t3 = -302LL;

	t3 = (x21&((x22&x23)*x24));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = INT8_MIN;
	int16_t x26 = INT16_MIN;

	t4 = (x25&((x26&x27)*x28));

	if (t4 != -8355840) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x31 = INT8_MAX;
	volatile uint16_t x32 = 0U;

	t5 = (x29&((x30&x31)*x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x33 = INT16_MIN;
	static int32_t x34 = INT32_MIN;
	uint8_t x35 = 27U;
	uint64_t x36 = 68899LLU;
	volatile uint64_t t6 = 629824346265060550LLU;

	t6 = (x33&((x34&x35)*x36));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = -1;
	volatile int64_t x38 = INT64_MIN;
	static int32_t x39 = 34402483;
	int64_t x40 = -1023315843LL;
	int64_t t7 = -93771723789978037LL;

	t7 = (x37&((x38&x39)*x40));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x42 = -1;
	int16_t x43 = INT16_MAX;
	int64_t x44 = 51350LL;
	int64_t t8 = -3LL;

	t8 = (x41&((x42&x43)*x44));

	if (t8 != 1682585450LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = INT8_MAX;
	static uint16_t x50 = 11U;
	static int16_t x51 = -10538;
	uint32_t x52 = 13904U;
	volatile uint32_t t9 = 1U;

	t9 = (x49&((x50&x51)*x52));

	if (t9 != 32U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = INT8_MIN;
	int32_t x54 = -1;
	int64_t x55 = INT64_MIN;
	volatile uint8_t x56 = 0U;
	volatile int64_t t10 = 4230379106989156LL;

	t10 = (x53&((x54&x55)*x56));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x58 = 12U;
	int32_t x59 = -1;
	volatile uint16_t x60 = 6484U;
	volatile int32_t t11 = 19960;

	t11 = (x57&((x58&x59)*x60));

	if (t11 != 77808) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = INT16_MAX;
	static int16_t x62 = INT16_MIN;
	volatile uint8_t x63 = 21U;
	static volatile int64_t x64 = 11947LL;
	int64_t t12 = 68059545183LL;

	t12 = (x61&((x62&x63)*x64));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x65 = UINT32_MAX;
	volatile int32_t x66 = INT32_MIN;
	int16_t x67 = 2844;
	static uint64_t x68 = 345862842649LLU;
	volatile uint64_t t13 = 6246655723962LLU;

	t13 = (x65&((x66&x67)*x68));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MIN;
	int8_t x70 = -1;
	int8_t x72 = -1;
	static volatile int32_t t14 = -28;

	t14 = (x69&((x70&x71)*x72));

	if (t14 != -256) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x74 = UINT8_MAX;
	int32_t x75 = 14062;
	volatile uint16_t x76 = 11U;
	volatile int32_t t15 = 139083108;

	t15 = (x73&((x74&x75)*x76));

	if (t15 != 2090) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x77 = 2993U;
	uint64_t x78 = 4548LLU;
	static int16_t x80 = -1;
	volatile uint64_t t16 = 213198894380209337LLU;

	t16 = (x77&((x78&x79)*x80));

	if (t16 != 2944LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = INT32_MIN;
	uint64_t x84 = 0LLU;
	volatile uint64_t t17 = 3134047137LLU;

	t17 = (x81&((x82&x83)*x84));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x93 = INT64_MAX;
	volatile int16_t x94 = INT16_MAX;
	int32_t x95 = 59887;
	volatile uint32_t x96 = UINT32_MAX;
	static volatile int64_t t18 = -70751842856121LL;

	t18 = (x93&((x94&x95)*x96));

	if (t18 != 4294940177LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x99 = UINT64_MAX;
	int64_t x100 = -3848667289294LL;

	t19 = (x97&((x98&x99)*x100));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x107 = -1;
	int32_t x108 = -22;
	static volatile uint64_t t20 = 3570LLU;

	t20 = (x105&((x106&x107)*x108));

	if (t20 != 4073800025535154696LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x109 = INT16_MAX;
	int16_t x110 = INT16_MIN;
	static uint16_t x112 = 1886U;
	int32_t t21 = -38339119;

	t21 = (x109&((x110&x111)*x112));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x113 = 77560584LL;
	int16_t x114 = INT16_MAX;
	int8_t x115 = INT8_MIN;
	volatile int64_t t22 = -191669587LL;

	t22 = (x113&((x114&x115)*x116));

	if (t22 != 8466688LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x117 = INT32_MIN;
	static int64_t x118 = -1LL;
	uint8_t x119 = 0U;
	int32_t x120 = INT32_MIN;
	volatile int64_t t23 = -431793LL;

	t23 = (x117&((x118&x119)*x120));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x121 = INT64_MIN;
	int16_t x122 = INT16_MIN;
	int8_t x123 = INT8_MIN;
	static int16_t x124 = 357;
	volatile int64_t t24 = INT64_MIN;

	t24 = (x121&((x122&x123)*x124));

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x125 = INT8_MIN;
	int32_t x126 = INT32_MIN;
	int64_t x127 = 1LL;
	int16_t x128 = 5107;
	volatile int64_t t25 = 162735LL;

	t25 = (x125&((x126&x127)*x128));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x129 = UINT64_MAX;
	static int32_t x130 = INT32_MIN;
	static int64_t x131 = 114132926LL;
	uint32_t x132 = 13U;
	uint64_t t26 = 3323945395LLU;

	t26 = (x129&((x130&x131)*x132));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x133 = 87U;
	volatile int16_t x134 = -8;
	uint64_t x135 = 1550LLU;
	uint64_t x136 = 187759356312485410LLU;
	volatile uint64_t t27 = 38473LLU;

	t27 = (x133&((x134&x135)*x136));

	if (t27 != 16LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x137 = UINT32_MAX;
	int64_t x138 = INT64_MAX;
	int8_t x139 = INT8_MAX;
	int64_t x140 = 5553666449624LL;

	t28 = (x137&((x138&x139)*x140));

	if (t28 != 404720424LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x141 = 189;
	int8_t x143 = INT8_MIN;
	int32_t t29 = 20377804;

	t29 = (x141&((x142&x143)*x144));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x149 = -1;
	int32_t x150 = INT32_MAX;
	volatile int32_t x151 = 19363420;
	uint8_t x152 = 104U;

	t30 = (x149&((x150&x151)*x152));

	if (t30 != 2013795680) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x161 = INT16_MIN;
	volatile int16_t x162 = -9;
	static int64_t x163 = 3903646814520913338LL;
	static uint64_t x164 = UINT64_MAX;

	t31 = (x161&((x162&x163)*x164));

	if (t31 != 14543097259188617216LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x165 = 243665412U;
	int32_t x166 = INT32_MAX;
	int32_t x167 = -1;
	volatile uint32_t t32 = 65U;

	t32 = (x165&((x166&x167)*x168));

	if (t32 != 243664900U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x170 = INT64_MIN;
	uint64_t x171 = 109162LLU;
	static volatile int64_t x172 = INT64_MIN;

	t33 = (x169&((x170&x171)*x172));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x173 = INT64_MIN;
	volatile uint32_t x175 = 1394116551U;
	uint16_t x176 = UINT16_MAX;
	volatile uint64_t t34 = 1776377850LLU;

	t34 = (x173&((x174&x175)*x176));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x177 = INT16_MIN;
	uint16_t x179 = 14437U;
	uint16_t x180 = UINT16_MAX;
	static volatile int32_t t35 = 308649293;

	t35 = (x177&((x178&x179)*x180));

	if (t35 != 946110464) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x181 = 409LLU;
	int16_t x183 = -1;
	int64_t x184 = -1LL;
	static volatile uint64_t t36 = 962983501175884LLU;

	t36 = (x181&((x182&x183)*x184));

	if (t36 != 273LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x185 = -2;
	volatile int16_t x186 = -1;
	volatile uint8_t x187 = UINT8_MAX;
	volatile uint32_t t37 = 1474670695U;

	t37 = (x185&((x186&x187)*x188));

	if (t37 != 8419590U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x189 = 105U;
	volatile int16_t x190 = INT16_MIN;
	int16_t x191 = 0;
	int32_t x192 = -17749756;
	int32_t t38 = -28680;

	t38 = (x189&((x190&x191)*x192));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x194 = UINT32_MAX;
	int16_t x195 = INT16_MAX;
	int16_t x196 = INT16_MIN;
	static uint64_t t39 = 691519553447641367LLU;

	t39 = (x193&((x194&x195)*x196));

	if (t39 != 3221258240LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x197 = 140915522U;
	int8_t x198 = INT8_MIN;
	uint8_t x199 = UINT8_MAX;
	volatile int8_t x200 = INT8_MIN;
	volatile uint32_t t40 = 21126944U;

	t40 = (x197&((x198&x199)*x200));

	if (t40 != 140902400U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x202 = INT8_MIN;
	volatile int8_t x203 = -7;
	volatile uint16_t x204 = UINT16_MAX;

	t41 = (x201&((x202&x203)*x204));

	if (t41 != -8388480LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x205 = 3U;
	volatile uint8_t x206 = 10U;
	volatile int64_t x207 = 127457051712684278LL;
	uint64_t t42 = 14529406210LLU;

	t42 = (x205&((x206&x207)*x208));

	if (t42 != 2LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x209 = INT64_MAX;
	volatile uint32_t x210 = UINT32_MAX;
	static int8_t x211 = -47;
	uint32_t x212 = 678785U;
	volatile int64_t t43 = -519930953970LL;

	t43 = (x209&((x210&x211)*x212));

	if (t43 != 4263064401LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x213 = INT32_MAX;
	volatile int32_t x214 = -736;
	int16_t x215 = -125;
	uint64_t x216 = UINT64_MAX;
	volatile uint64_t t44 = 211529742969822LLU;

	t44 = (x213&((x214&x215)*x216));

	if (t44 != 768LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x218 = UINT32_MAX;
	int8_t x219 = -1;
	static int8_t x220 = INT8_MIN;
	uint32_t t45 = 61U;

	t45 = (x217&((x218&x219)*x220));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x221 = INT64_MIN;
	int64_t x222 = -1LL;
	int8_t x223 = INT8_MIN;
	int64_t t46 = -15058265922564LL;

	t46 = (x221&((x222&x223)*x224));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x225 = 107U;
	uint32_t x226 = UINT32_MAX;
	volatile int16_t x227 = INT16_MIN;
	int32_t x228 = INT32_MIN;
	volatile uint32_t t47 = 65420U;

	t47 = (x225&((x226&x227)*x228));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x245 = 2U;
	int64_t x246 = INT64_MAX;
	uint32_t x247 = UINT32_MAX;
	uint8_t x248 = 74U;
	volatile int64_t t48 = 386LL;

	t48 = (x245&((x246&x247)*x248));

	if (t48 != 2LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x249 = -15;
	int32_t x250 = INT32_MIN;
	uint16_t x251 = 1834U;
	int32_t x252 = -492457849;
	int32_t t49 = 3600961;

	t49 = (x249&((x250&x251)*x252));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x257 = INT64_MAX;
	uint8_t x258 = 49U;
	static volatile int16_t x259 = -1;
	volatile uint64_t x260 = 1244LLU;

	t50 = (x257&((x258&x259)*x260));

	if (t50 != 60956LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x261 = INT64_MIN;
	uint32_t x262 = UINT32_MAX;
	static volatile uint8_t x263 = UINT8_MAX;
	static uint16_t x264 = UINT16_MAX;
	int64_t t51 = 606553608738686561LL;

	t51 = (x261&((x262&x263)*x264));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x265 = -1;
	volatile int32_t x266 = -54008509;
	uint64_t x267 = 24053783LLU;
	static int32_t x268 = -1;
	volatile uint64_t t52 = 231663LLU;

	t52 = (x265&((x266&x267)*x268));

	if (t52 != 18446744073704898557LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x273 = INT8_MAX;
	static int64_t x274 = 987LL;
	volatile uint32_t x275 = 191533U;
	int32_t x276 = INT32_MAX;
	int64_t t53 = -4803372619921693LL;

	t53 = (x273&((x274&x275)*x276));

	if (t53 != 119LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x277 = UINT64_MAX;
	volatile int16_t x278 = -1;
	uint16_t x279 = UINT16_MAX;

	t54 = (x277&((x278&x279)*x280));

	if (t54 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x286 = -1LL;
	int8_t x287 = INT8_MAX;
	static uint16_t x288 = UINT16_MAX;
	static volatile int64_t t55 = 1071853581969321LL;

	t55 = (x285&((x286&x287)*x288));

	if (t55 != 8322944LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x289 = INT8_MIN;
	static int8_t x290 = INT8_MAX;
	volatile uint32_t x291 = 299U;

	t56 = (x289&((x290&x291)*x292));

	if (t56 != 2147483648U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x295 = -1;
	uint64_t x296 = 33LLU;
	uint64_t t57 = 74LLU;

	t57 = (x293&((x294&x295)*x296));

	if (t57 != 18446744073709547392LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x297 = 592045688LL;
	uint32_t x298 = 892711856U;
	int64_t x299 = INT64_MIN;
	uint32_t x300 = UINT32_MAX;
	volatile int64_t t58 = -12668386697029LL;

	t58 = (x297&((x298&x299)*x300));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x301 = INT16_MIN;
	uint16_t x303 = 6174U;
	volatile uint64_t x304 = 3248145477687833394LLU;

	t59 = (x301&((x302&x303)*x304));

	if (t59 != 2439371122400755712LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x305 = 4;
	int64_t x306 = -1LL;
	int64_t x307 = 16034364462599LL;
	int8_t x308 = INT8_MIN;
	int64_t t60 = 116LL;

	t60 = (x305&((x306&x307)*x308));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x309 = INT16_MIN;
	int32_t x310 = INT32_MIN;
	int16_t x311 = 233;
	static int16_t x312 = 306;
	volatile int32_t t61 = -572067124;

	t61 = (x309&((x310&x311)*x312));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x313 = INT8_MIN;
	int8_t x315 = 0;
	static uint64_t x316 = 3LLU;
	volatile uint64_t t62 = 565495749836736LLU;

	t62 = (x313&((x314&x315)*x316));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x317 = INT32_MIN;
	int32_t x318 = -1;
	static int16_t x319 = -1;
	uint8_t x320 = 98U;
	volatile int32_t t63 = INT32_MIN;

	t63 = (x317&((x318&x319)*x320));

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x321 = -3;
	uint64_t x322 = UINT64_MAX;
	int64_t x324 = 2321LL;
	volatile uint64_t t64 = 558954388LLU;

	t64 = (x321&((x322&x323)*x324));

	if (t64 != 18446739089400004608LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x327 = 1646089538128567604LLU;
	volatile int16_t x328 = INT16_MAX;
	volatile uint64_t t65 = 67459552555LLU;

	t65 = (x325&((x326&x327)*x328));

	if (t65 != 781820620LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x329 = -11251485828908LL;
	int64_t x330 = INT64_MAX;
	int32_t x331 = INT32_MAX;
	volatile uint8_t x332 = 0U;
	int64_t t66 = 111193LL;

	t66 = (x329&((x330&x331)*x332));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x333 = 3;
	volatile int8_t x334 = 1;
	uint8_t x335 = 12U;
	volatile int64_t t67 = -471756373595378LL;

	t67 = (x333&((x334&x335)*x336));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x339 = 2039LL;
	int16_t x340 = INT16_MAX;

	t68 = (x337&((x338&x339)*x340));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x341 = -1LL;
	int8_t x342 = -14;
	int16_t x343 = -1;
	static uint32_t x344 = 15469U;
	static volatile int64_t t69 = 0LL;

	t69 = (x341&((x342&x343)*x344));

	if (t69 != 4294750730LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x345 = 67U;
	static int16_t x348 = INT16_MAX;
	volatile int64_t t70 = 499270031LL;

	t70 = (x345&((x346&x347)*x348));

	if (t70 != 66LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x349 = INT64_MAX;
	uint32_t x350 = UINT32_MAX;
	uint16_t x351 = 241U;
	static uint64_t x352 = UINT64_MAX;
	volatile uint64_t t71 = 0LLU;

	t71 = (x349&((x350&x351)*x352));

	if (t71 != 9223372036854775567LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x354 = INT64_MAX;
	int8_t x355 = INT8_MIN;
	volatile int8_t x356 = -1;
	volatile int64_t t72 = 2263677LL;

	t72 = (x353&((x354&x355)*x356));

	if (t72 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x357 = INT16_MIN;
	int8_t x358 = 0;
	int64_t x360 = 41610610562179LL;

	t73 = (x357&((x358&x359)*x360));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x361 = UINT32_MAX;
	int8_t x362 = 1;
	volatile int32_t x363 = INT32_MAX;
	static int8_t x364 = 0;
	volatile uint32_t t74 = 4447693U;

	t74 = (x361&((x362&x363)*x364));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x373 = INT16_MIN;
	uint32_t x374 = 424672968U;
	static int16_t x375 = INT16_MAX;
	static int8_t x376 = INT8_MIN;
	volatile uint32_t t75 = 2U;

	t75 = (x373&((x374&x375)*x376));

	if (t75 != 4290805760U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x377 = INT16_MAX;
	uint16_t x378 = UINT16_MAX;
	static uint8_t x379 = UINT8_MAX;
	int16_t x380 = 45;
	int32_t t76 = 1230;

	t76 = (x377&((x378&x379)*x380));

	if (t76 != 11475) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x381 = UINT8_MAX;
	int8_t x382 = -1;
	int16_t x383 = 701;
	volatile int16_t x384 = INT16_MAX;
	int32_t t77 = 3372925;

	t77 = (x381&((x382&x383)*x384));

	if (t77 != 67) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x386 = INT64_MIN;
	uint8_t x388 = UINT8_MAX;
	volatile int64_t t78 = -5LL;

	t78 = (x385&((x386&x387)*x388));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x389 = UINT16_MAX;
	uint64_t x390 = UINT64_MAX;
	uint8_t x391 = 43U;
	uint64_t t79 = 33081571872LLU;

	t79 = (x389&((x390&x391)*x392));

	if (t79 != 48027LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x393 = -1;
	int32_t x394 = 4117;
	static int64_t x395 = INT64_MIN;
	static volatile int64_t t80 = -328695941852LL;

	t80 = (x393&((x394&x395)*x396));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x397 = 7;
	int8_t x398 = INT8_MIN;
	volatile int8_t x399 = INT8_MAX;
	int32_t x400 = INT32_MIN;
	volatile int32_t t81 = -64030;

	t81 = (x397&((x398&x399)*x400));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x401 = INT8_MAX;
	uint16_t x402 = 8023U;
	int16_t x404 = 15;
	int32_t t82 = 1541071;

	t82 = (x401&((x402&x403)*x404));

	if (t82 != 29) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x405 = -43;
	int8_t x406 = 15;
	uint8_t x407 = 8U;
	volatile int16_t x408 = INT16_MIN;
	int32_t t83 = 1;

	t83 = (x405&((x406&x407)*x408));

	if (t83 != -262144) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x410 = INT64_MIN;
	int32_t x411 = 105429;
	int64_t t84 = 1618895350264LL;

	t84 = (x409&((x410&x411)*x412));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x417 = UINT16_MAX;
	int8_t x418 = -1;
	int64_t x419 = -11856767282LL;
	uint64_t x420 = UINT64_MAX;
	uint64_t t85 = 730122667495119LLU;

	t85 = (x417&((x418&x419)*x420));

	if (t85 != 59698LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x421 = -1;
	int16_t x422 = INT16_MIN;
	static uint8_t x423 = UINT8_MAX;
	static volatile int32_t x424 = -1;
	static int32_t t86 = 7757115;

	t86 = (x421&((x422&x423)*x424));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x429 = 104U;
	uint8_t x431 = UINT8_MAX;
	int16_t x432 = 13;

	t87 = (x429&((x430&x431)*x432));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x433 = 511471592U;
	static int32_t x434 = -1;
	int32_t x436 = -1;
	volatile uint32_t t88 = 1529U;

	t88 = (x433&((x434&x435)*x436));

	if (t88 != 511471560U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x437 = -1;
	volatile int8_t x438 = INT8_MIN;
	uint64_t x440 = 5508588868320383LLU;
	volatile uint64_t t89 = 3175LLU;

	t89 = (x437&((x438&x439)*x440));

	if (t89 != 17741644698564542592LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x441 = -1;
	int16_t x442 = INT16_MIN;
	static uint32_t x443 = 3258945U;
	int16_t x444 = INT16_MIN;
	uint32_t t90 = 154U;

	t90 = (x441&((x442&x443)*x444));

	if (t90 != 1073741824U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x445 = 8162;
	int16_t x446 = -1;
	volatile uint8_t x447 = UINT8_MAX;
	static uint64_t x448 = 45LLU;
	volatile uint64_t t91 = 703LLU;

	t91 = (x445&((x446&x447)*x448));

	if (t91 != 3266LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint64_t x449 = 86539995038228822LLU;
	int8_t x450 = -1;
	volatile int64_t x451 = -9714657LL;
	static int8_t x452 = INT8_MIN;
	uint64_t t92 = 361495LLU;

	t92 = (x449&((x450&x451)*x452));

	if (t92 != 169615360LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x453 = UINT8_MAX;
	volatile int32_t x454 = INT32_MAX;
	int8_t x455 = -1;
	uint64_t t93 = 5LLU;

	t93 = (x453&((x454&x455)*x456));

	if (t93 != 44LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x457 = UINT8_MAX;
	int16_t x458 = 6;
	volatile int32_t x459 = INT32_MAX;
	volatile int32_t t94 = -102;

	t94 = (x457&((x458&x459)*x460));

	if (t94 != 250) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x461 = 170237532713403LLU;
	uint8_t x462 = 3U;
	uint64_t x463 = UINT64_MAX;
	uint64_t t95 = 14123428943LLU;

	t95 = (x461&((x462&x463)*x464));

	if (t95 != 170237532713401LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x465 = 1936;
	uint16_t x466 = 22U;
	int16_t x467 = -1;
	static int8_t x468 = INT8_MAX;
	volatile int32_t t96 = -10;

	t96 = (x465&((x466&x467)*x468));

	if (t96 != 640) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x469 = 2;
	int32_t x470 = INT32_MIN;
	volatile uint64_t x471 = 13825276514423840LLU;
	int8_t x472 = INT8_MIN;
	static volatile uint64_t t97 = 2859473855LLU;

	t97 = (x469&((x470&x471)*x472));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x474 = -14;
	int8_t x476 = -1;
	volatile int64_t t98 = -14LL;

	t98 = (x473&((x474&x475)*x476));

	if (t98 != 896LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x489 = UINT32_MAX;
	int32_t x490 = INT32_MIN;
	volatile uint8_t x491 = 6U;
	int32_t x492 = -21;
	uint32_t t99 = 467877892U;

	t99 = (x489&((x490&x491)*x492));

	if (t99 != 0U) { NG(); } else { ; }
	
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

