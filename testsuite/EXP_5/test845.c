#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = 78;
int32_t t2 = -205943169;
static uint64_t x14 = UINT64_MAX;
volatile int8_t x22 = INT8_MAX;
int32_t x24 = 672084725;
volatile int16_t x32 = -1408;
uint8_t x33 = 24U;
int64_t t8 = 2022LL;
int64_t x38 = 23370783735934LL;
int64_t t9 = 42LL;
int64_t x44 = -819578LL;
uint64_t t10 = 30243585LLU;
int32_t x45 = INT32_MIN;
uint32_t x48 = UINT32_MAX;
static uint64_t x51 = 219874028LLU;
volatile uint32_t t14 = 1678589041U;
int64_t x62 = INT64_MAX;
uint16_t x69 = UINT16_MAX;
int8_t x73 = 0;
uint16_t x80 = UINT16_MAX;
int32_t t19 = -291905;
static int16_t x81 = INT16_MIN;
static uint16_t x82 = UINT16_MAX;
int64_t t20 = 858465891LL;
static uint64_t t22 = 7155917748328LLU;
uint64_t t23 = 830238754LLU;
volatile uint64_t t24 = 242224LLU;
static volatile uint64_t t25 = 56LLU;
uint16_t x111 = 3556U;
int64_t t26 = -1837982573101875LL;
int64_t x121 = 81LL;
uint32_t x125 = 3408763U;
int64_t t31 = 337528LL;
int16_t x133 = -55;
volatile int64_t x135 = INT64_MAX;
uint32_t t33 = 158U;
uint32_t x141 = UINT32_MAX;
volatile int16_t x150 = INT16_MIN;
static int32_t x154 = -4125431;
volatile uint16_t x156 = UINT16_MAX;
uint64_t x160 = 5175010LLU;
int8_t x161 = INT8_MIN;
int16_t x162 = -1443;
volatile int32_t t38 = 4273;
int16_t x169 = INT16_MIN;
int64_t x170 = -1LL;
int8_t x174 = -1;
int32_t x180 = -1;
uint16_t x182 = 25U;
static volatile int32_t x191 = -1;
static uint16_t x196 = 11U;
int16_t x201 = INT16_MIN;
uint64_t x202 = 1112330540288479LLU;
int64_t x208 = -1LL;
volatile uint16_t x213 = 1U;
int64_t t52 = -188LL;
uint64_t x222 = 133713214182057705LLU;
int32_t x223 = INT32_MIN;
int32_t x227 = 3396;
uint64_t t54 = 42424815079LLU;
int8_t x235 = INT8_MIN;
volatile int16_t x237 = 14;
volatile uint64_t t57 = 11373LLU;
uint32_t x242 = 30U;
int32_t t59 = -1;
static volatile int64_t x259 = 54730967804331032LL;
int64_t x261 = INT64_MIN;
uint8_t x266 = 40U;
uint16_t x270 = 5U;
int16_t x277 = -135;
static uint64_t t66 = 763078335202200LLU;
volatile int16_t x284 = INT16_MAX;
uint16_t x287 = 1U;
static uint64_t x293 = UINT64_MAX;
volatile int16_t x296 = 3;
int64_t x297 = -3375955LL;
int64_t x299 = -14LL;
int64_t x307 = INT64_MIN;
static int64_t x312 = -2093LL;
int8_t x318 = -1;
int16_t x322 = -1;
int64_t x325 = -1LL;
static int8_t x326 = INT8_MIN;
static uint64_t t79 = 3125335093975LLU;
uint64_t x337 = 241LLU;
static int32_t x340 = 26278;
uint64_t t81 = 2162021867LLU;
int16_t x342 = INT16_MIN;
volatile uint64_t x343 = 4077174668657840120LLU;
uint32_t x344 = UINT32_MAX;
int64_t x351 = INT64_MAX;
int16_t x353 = 9;
static volatile uint8_t x360 = 8U;
static uint64_t x362 = 0LLU;
int64_t x375 = 107465LL;
uint32_t t92 = 989946340U;
int32_t x389 = INT32_MAX;
volatile int32_t x396 = -20;
uint32_t t97 = 185U;
uint8_t x407 = 75U;
int8_t x411 = INT8_MIN;
volatile uint32_t t99 = 1111363742U;


void f0(void) {
	static uint64_t x1 = 1946387240LLU;
	volatile uint64_t x3 = UINT64_MAX;
	int8_t x4 = INT8_MAX;
	uint64_t t0 = 906LLU;

	t0 = (x1^((x2%x3)^x4));

	if (t0 != 1946387225LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	volatile int32_t x6 = 45764004;
	int8_t x7 = 61;
	int8_t x8 = INT8_MIN;
	int64_t t1 = -22234LL;

	t1 = (x5^((x6%x7)^x8));

	if (t1 != 9223372036854775715LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	int8_t x10 = -63;
	volatile uint8_t x11 = 46U;
	int16_t x12 = -16;

	t2 = (x9^((x10%x11)^x12));

	if (t2 != 65504) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = -11;
	int16_t x15 = -1;
	static uint64_t x16 = 1720189LLU;
	uint64_t t3 = 327LLU;

	t3 = (x13^((x14%x15)^x16));

	if (t3 != 18446744073707831432LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 19579U;
	volatile uint64_t x18 = UINT64_MAX;
	int8_t x19 = INT8_MAX;
	uint16_t x20 = UINT16_MAX;
	static uint64_t t4 = 8106763899331LLU;

	t4 = (x17^((x18%x19)^x20));

	if (t4 != 45957LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 27U;
	volatile uint32_t x23 = UINT32_MAX;
	volatile uint32_t t5 = 13285U;

	t5 = (x21^((x22%x23)^x24));

	if (t5 != 672084625U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x25 = 132018603547309121LLU;
	static int8_t x26 = -1;
	static uint16_t x27 = UINT16_MAX;
	uint8_t x28 = 2U;
	volatile uint64_t t6 = 488844217082LLU;

	t6 = (x25^((x26%x27)^x28));

	if (t6 != 18314725470162242492LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x29 = 38653U;
	uint8_t x30 = UINT8_MAX;
	volatile int16_t x31 = INT16_MAX;
	static volatile uint32_t t7 = 1181248805U;

	t7 = (x29^((x30%x31)^x32));

	if (t7 != 4294929538U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = -1LL;
	int16_t x35 = 93;
	volatile int64_t x36 = -1LL;

	t8 = (x33^((x34%x35)^x36));

	if (t8 != 24LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 118U;
	int32_t x39 = INT32_MIN;
	int64_t x40 = -1LL;

	t9 = (x37^((x38%x39)^x40));

	if (t9 != -1866678281LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	int64_t x42 = INT64_MAX;
	int8_t x43 = INT8_MAX;

	t10 = (x41^((x42%x43)^x44));

	if (t10 != 819577LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = 12;
	volatile int32_t x47 = -1;
	volatile uint32_t t11 = 5U;

	t11 = (x45^((x46%x47)^x48));

	if (t11 != 2147483647U) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x49 = 1;
	int16_t x50 = -3;
	uint32_t x52 = 237359688U;
	volatile uint64_t t12 = 17272046264853LLU;

	t12 = (x49^((x50%x51)^x52));

	if (t12 != 100314136LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = INT64_MIN;
	volatile int32_t x54 = INT32_MAX;
	int8_t x55 = -1;
	static int32_t x56 = -1;
	volatile int64_t t13 = INT64_MAX;

	t13 = (x53^((x54%x55)^x56));

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 26963U;
	uint32_t x58 = 1241933699U;
	uint16_t x59 = 6U;
	uint16_t x60 = 0U;

	t14 = (x57^((x58%x59)^x60));

	if (t14 != 26966U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	static volatile uint16_t x63 = UINT16_MAX;
	volatile int8_t x64 = -1;
	int64_t t15 = -958LL;

	t15 = (x61^((x62%x63)^x64));

	if (t15 != 2147450880LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = INT32_MIN;
	int8_t x66 = INT8_MIN;
	int64_t x67 = INT64_MAX;
	static uint8_t x68 = UINT8_MAX;
	int64_t t16 = -1707859163LL;

	t16 = (x65^((x66%x67)^x68));

	if (t16 != 2147483519LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x70 = UINT16_MAX;
	static int32_t x71 = INT32_MIN;
	static uint16_t x72 = 1165U;
	int32_t t17 = 5855;

	t17 = (x69^((x70%x71)^x72));

	if (t17 != 1165) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = INT8_MAX;
	int8_t x75 = INT8_MAX;
	int16_t x76 = -1;
	int32_t t18 = 32633;

	t18 = (x73^((x74%x75)^x76));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	int16_t x78 = -1;
	int8_t x79 = INT8_MIN;

	t19 = (x77^((x78%x79)^x80));

	if (t19 != 65408) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x83 = -239;
	int64_t x84 = -1LL;

	t20 = (x81^((x82%x83)^x84));

	if (t20 != 32718LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = UINT16_MAX;
	int32_t x86 = -1;
	uint64_t x87 = 1295416963554LLU;
	static volatile uint16_t x88 = 21U;
	volatile uint64_t t21 = 238524LLU;

	t21 = (x85^((x86%x87)^x88));

	if (t21 != 35615763327LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = INT64_MAX;
	uint64_t x90 = 2LLU;
	int32_t x91 = -1;
	uint8_t x92 = 6U;

	t22 = (x89^((x90%x91)^x92));

	if (t22 != 9223372036854775803LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 23539500738LLU;
	volatile int8_t x94 = -1;
	int16_t x95 = INT16_MIN;
	int32_t x96 = INT32_MIN;

	t23 = (x93^((x94%x95)^x96));

	if (t23 != 21557655869LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = 1LLU;
	int16_t x102 = INT16_MIN;
	static int8_t x103 = INT8_MIN;
	int8_t x104 = -20;

	t24 = (x101^((x102%x103)^x104));

	if (t24 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x105 = -1LL;
	static uint32_t x106 = 12555338U;
	uint64_t x107 = 840LLU;
	int64_t x108 = INT64_MAX;

	t25 = (x105^((x106%x107)^x108));

	if (t25 != 9223372036854776506LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x109 = INT64_MAX;
	uint16_t x110 = 980U;
	volatile int8_t x112 = INT8_MIN;

	t26 = (x109^((x110%x111)^x112));

	if (t26 != -9223372036854774869LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = UINT16_MAX;
	volatile int64_t x114 = 139294589839949574LL;
	static uint32_t x115 = 73U;
	int64_t x116 = INT64_MAX;
	static int64_t t27 = -1566734100663286919LL;

	t27 = (x113^((x114%x115)^x116));

	if (t27 != 9223372036854710279LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x117 = 1LLU;
	static uint32_t x118 = 0U;
	int64_t x119 = -80348LL;
	int64_t x120 = -1LL;
	volatile uint64_t t28 = 74975264LLU;

	t28 = (x117^((x118%x119)^x120));

	if (t28 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x122 = UINT8_MAX;
	uint64_t x123 = 121LLU;
	uint32_t x124 = 11251U;
	volatile uint64_t t29 = 55938910LLU;

	t29 = (x121^((x122%x123)^x124));

	if (t29 != 11183LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x126 = -1LL;
	static int16_t x127 = 22;
	volatile int64_t x128 = INT64_MIN;
	volatile int64_t t30 = -864195860LL;

	t30 = (x125^((x126%x127)^x128));

	if (t30 != 9223372036851367044LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x129 = 462U;
	uint16_t x130 = 131U;
	static int64_t x131 = -853611163442LL;
	static int8_t x132 = 0;

	t31 = (x129^((x130%x131)^x132));

	if (t31 != 333LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x134 = -111505587;
	int64_t x136 = 2143LL;
	volatile int64_t t32 = 2548987024563754255LL;

	t32 = (x133^((x134%x135)^x136));

	if (t32 != 111507675LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x137 = UINT16_MAX;
	uint16_t x138 = 21554U;
	uint32_t x139 = 870211984U;
	int8_t x140 = 30;

	t33 = (x137^((x138%x139)^x140));

	if (t33 != 43987U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x142 = -1LL;
	uint32_t x143 = 54927313U;
	int32_t x144 = INT32_MIN;
	volatile int64_t t34 = 60085700LL;

	t34 = (x141^((x142%x143)^x144));

	if (t34 != 2147483648LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x149 = UINT8_MAX;
	int32_t x151 = 53925559;
	int16_t x152 = INT16_MAX;
	int32_t t35 = 2075;

	t35 = (x149^((x150%x151)^x152));

	if (t35 != -256) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x153 = INT16_MAX;
	int8_t x155 = -1;
	volatile int32_t t36 = 759;

	t36 = (x153^((x154%x155)^x156));

	if (t36 != 32768) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = -1;
	int32_t x158 = 0;
	int8_t x159 = 3;
	static uint64_t t37 = 564019714869936LLU;

	t37 = (x157^((x158%x159)^x160));

	if (t37 != 18446744073704376605LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x163 = 12;
	volatile int32_t x164 = -1;

	t38 = (x161^((x162%x163)^x164));

	if (t38 != -126) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = 358LL;
	int64_t x166 = -1LL;
	int8_t x167 = INT8_MIN;
	static uint64_t x168 = 247940LLU;
	volatile uint64_t t39 = 1948LLU;

	t39 = (x165^((x166%x167)^x168));

	if (t39 != 18446744073709303325LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x171 = 301241;
	uint64_t x172 = 1626760081LLU;
	volatile uint64_t t40 = 37535849768110LLU;

	t40 = (x169^((x170%x171)^x172));

	if (t40 != 1626741870LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x173 = UINT32_MAX;
	volatile uint64_t x175 = 26486LLU;
	static volatile int64_t x176 = 22666849LL;
	static volatile uint64_t t41 = 0LLU;

	t41 = (x173^((x174%x175)^x176));

	if (t41 != 4272305903LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x177 = INT64_MIN;
	int64_t x178 = INT64_MIN;
	int16_t x179 = INT16_MAX;
	volatile int64_t t42 = -7532LL;

	t42 = (x177^((x178%x179)^x180));

	if (t42 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x181 = 62176286340760LLU;
	static volatile uint8_t x183 = UINT8_MAX;
	int16_t x184 = INT16_MIN;
	volatile uint64_t t43 = 2LLU;

	t43 = (x181^((x182%x183)^x184));

	if (t43 != 18446681897423238785LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = -1;
	int8_t x186 = -1;
	int16_t x187 = 1;
	int32_t x188 = INT32_MIN;
	int32_t t44 = INT32_MAX;

	t44 = (x185^((x186%x187)^x188));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x189 = INT16_MIN;
	int8_t x190 = INT8_MAX;
	int64_t x192 = INT64_MIN;
	int64_t t45 = 60986388931560LL;

	t45 = (x189^((x190%x191)^x192));

	if (t45 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x193 = INT64_MIN;
	int64_t x194 = INT64_MIN;
	uint64_t x195 = 1164259177LLU;
	static volatile uint64_t t46 = 208LLU;

	t46 = (x193^((x194%x195)^x196));

	if (t46 != 9223372037206160386LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x197 = UINT16_MAX;
	uint32_t x198 = 81524U;
	uint32_t x199 = UINT32_MAX;
	static int16_t x200 = INT16_MIN;
	uint32_t t47 = 21U;

	t47 = (x197^((x198%x199)^x200));

	if (t47 != 4294853003U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x203 = INT16_MIN;
	static int16_t x204 = 0;
	static volatile uint64_t t48 = 32LLU;

	t48 = (x201^((x202%x203)^x204));

	if (t48 != 18445631743169235423LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = INT16_MAX;
	int8_t x206 = INT8_MAX;
	static int8_t x207 = 35;
	int64_t t49 = -73588LL;

	t49 = (x205^((x206%x207)^x208));

	if (t49 != -32746LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = 530436LL;
	int64_t x210 = -1LL;
	int32_t x211 = -1;
	uint32_t x212 = 527U;
	volatile int64_t t50 = 61345532LL;

	t50 = (x209^((x210%x211)^x212));

	if (t50 != 530955LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x214 = 1930U;
	int32_t x215 = -1;
	int8_t x216 = -1;
	volatile int32_t t51 = 6;

	t51 = (x213^((x214%x215)^x216));

	if (t51 != -2) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x217 = UINT32_MAX;
	int16_t x218 = 14828;
	int64_t x219 = 68LL;
	static volatile int32_t x220 = INT32_MIN;

	t52 = (x217^((x218%x219)^x220));

	if (t52 != -2147483653LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x221 = 99167250U;
	static uint8_t x224 = 1U;
	volatile uint64_t t53 = 2001LLU;

	t53 = (x221^((x222%x223)^x224));

	if (t53 != 133713214246603514LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x225 = -1LL;
	uint64_t x226 = 6851693389362453LLU;
	int8_t x228 = INT8_MAX;

	t54 = (x225^((x226%x227)^x228));

	if (t54 != 18446744073709551249LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x229 = INT32_MAX;
	int16_t x230 = -1;
	int64_t x231 = INT64_MIN;
	int32_t x232 = 708;
	volatile int64_t t55 = -124030645LL;

	t55 = (x229^((x230%x231)^x232));

	if (t55 != -2147482940LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x233 = INT16_MIN;
	uint64_t x234 = 121669302024LLU;
	int8_t x236 = -1;
	uint64_t t56 = 43037060920LLU;

	t56 = (x233^((x234%x235)^x236));

	if (t56 != 121669306615LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x238 = 93394535U;
	uint16_t x239 = UINT16_MAX;
	uint64_t x240 = UINT64_MAX;

	t57 = (x237^((x238%x239)^x240));

	if (t57 != 18446744073709544457LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x241 = 98477511;
	int8_t x243 = INT8_MIN;
	static uint64_t x244 = 5272368LLU;
	uint64_t t58 = 492900LLU;

	t58 = (x241^((x242%x243)^x244));

	if (t58 != 93247209LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x245 = -1;
	int16_t x246 = INT16_MAX;
	int32_t x247 = INT32_MIN;
	uint16_t x248 = 1190U;

	t59 = (x245^((x246%x247)^x248));

	if (t59 != -31578) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x249 = INT8_MAX;
	static int8_t x250 = -8;
	static uint32_t x251 = UINT32_MAX;
	volatile int8_t x252 = -1;
	static uint32_t t60 = 0U;

	t60 = (x249^((x250%x251)^x252));

	if (t60 != 120U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x253 = 98LLU;
	int16_t x254 = -1;
	volatile int8_t x255 = INT8_MIN;
	static int64_t x256 = INT64_MIN;
	volatile uint64_t t61 = 413787299LLU;

	t61 = (x253^((x254%x255)^x256));

	if (t61 != 9223372036854775709LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x257 = INT64_MAX;
	int8_t x258 = 38;
	int32_t x260 = INT32_MIN;
	static int64_t t62 = -8LL;

	t62 = (x257^((x258%x259)^x260));

	if (t62 != -9223372034707292199LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x262 = -1;
	int8_t x263 = -12;
	volatile int32_t x264 = -1;
	int64_t t63 = INT64_MIN;

	t63 = (x261^((x262%x263)^x264));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x265 = UINT8_MAX;
	int64_t x267 = -5604209LL;
	volatile int8_t x268 = INT8_MAX;
	volatile int64_t t64 = 222761599839LL;

	t64 = (x265^((x266%x267)^x268));

	if (t64 != 168LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x269 = INT32_MIN;
	int8_t x271 = INT8_MIN;
	volatile uint64_t x272 = 959979994370LLU;
	uint64_t t65 = 943873851000447LLU;

	t65 = (x269^((x270%x271)^x272));

	if (t65 != 18446743111691681031LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x278 = INT8_MIN;
	int64_t x279 = -31LL;
	uint64_t x280 = 10444LLU;

	t66 = (x277^((x278%x279)^x280));

	if (t66 != 10313LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x281 = UINT64_MAX;
	static volatile uint64_t x282 = UINT64_MAX;
	int64_t x283 = -1LL;
	volatile uint64_t t67 = 2600595372054840565LLU;

	t67 = (x281^((x282%x283)^x284));

	if (t67 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x285 = 93U;
	int16_t x286 = INT16_MIN;
	volatile uint8_t x288 = 30U;
	volatile int32_t t68 = -69;

	t68 = (x285^((x286%x287)^x288));

	if (t68 != 67) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x289 = UINT8_MAX;
	volatile int8_t x290 = INT8_MIN;
	int16_t x291 = -7;
	int32_t x292 = INT32_MIN;
	int32_t t69 = 0;

	t69 = (x289^((x290%x291)^x292));

	if (t69 != 2147483393) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x294 = INT8_MAX;
	static int64_t x295 = INT64_MIN;
	volatile uint64_t t70 = 4093906LLU;

	t70 = (x293^((x294%x295)^x296));

	if (t70 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x298 = UINT32_MAX;
	int32_t x300 = INT32_MIN;
	volatile int64_t t71 = -529054098743871511LL;

	t71 = (x297^((x298%x299)^x300));

	if (t71 != 2144107694LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x301 = 446;
	volatile uint16_t x302 = 14201U;
	uint64_t x303 = UINT64_MAX;
	volatile int16_t x304 = INT16_MAX;
	volatile uint64_t t72 = 10619934244351358LLU;

	t72 = (x301^((x302%x303)^x304));

	if (t72 != 18744LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x305 = UINT16_MAX;
	int64_t x306 = INT64_MIN;
	int8_t x308 = INT8_MAX;
	int64_t t73 = 0LL;

	t73 = (x305^((x306%x307)^x308));

	if (t73 != 65408LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x309 = INT16_MAX;
	static volatile int64_t x310 = INT64_MIN;
	static volatile int32_t x311 = -1;
	volatile int64_t t74 = -321870LL;

	t74 = (x309^((x310%x311)^x312));

	if (t74 != -30676LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x313 = 28;
	static int32_t x314 = INT32_MIN;
	int8_t x315 = -1;
	int64_t x316 = -1LL;
	volatile int64_t t75 = 21445153859635213LL;

	t75 = (x313^((x314%x315)^x316));

	if (t75 != -29LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x317 = 176U;
	int16_t x319 = INT16_MIN;
	int16_t x320 = INT16_MIN;
	volatile uint32_t t76 = 846119U;

	t76 = (x317^((x318%x319)^x320));

	if (t76 != 32591U) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x321 = -26;
	uint64_t x323 = 282LLU;
	uint32_t x324 = UINT32_MAX;
	volatile uint64_t t77 = 5LLU;

	t77 = (x321^((x322%x323)^x324));

	if (t77 != 18446744069414584508LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x327 = 9418612767818639LL;
	int16_t x328 = -497;
	volatile int64_t t78 = 104052964655436LL;

	t78 = (x325^((x326%x327)^x328));

	if (t78 != -400LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x329 = -190055279947517LL;
	static volatile uint64_t x330 = UINT64_MAX;
	int8_t x331 = INT8_MAX;
	int8_t x332 = INT8_MAX;

	t79 = (x329^((x330%x331)^x332));

	if (t79 != 18446554018429604221LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x333 = 23U;
	volatile int64_t x334 = INT64_MAX;
	int64_t x335 = INT64_MIN;
	volatile int32_t x336 = 18;
	static int64_t t80 = 16478355937134LL;

	t80 = (x333^((x334%x335)^x336));

	if (t80 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x338 = INT32_MIN;
	uint64_t x339 = 523210748LLU;

	t81 = (x337^((x338%x339)^x340));

	if (t81 != 482659959LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x341 = -5;
	volatile uint64_t t82 = 100LLU;

	t82 = (x341^((x342%x343)^x344));

	if (t82 != 16308698674017746980LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x345 = INT64_MAX;
	static volatile int64_t x346 = INT64_MAX;
	uint8_t x347 = UINT8_MAX;
	volatile uint32_t x348 = UINT32_MAX;
	static int64_t t83 = 351308LL;

	t83 = (x345^((x346%x347)^x348));

	if (t83 != 9223372032559808639LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x349 = 1LL;
	uint8_t x350 = UINT8_MAX;
	static uint64_t x352 = 722LLU;
	static uint64_t t84 = 2283447597LLU;

	t84 = (x349^((x350%x351)^x352));

	if (t84 != 556LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x354 = INT32_MIN;
	static int16_t x355 = INT16_MIN;
	uint8_t x356 = 7U;
	volatile int32_t t85 = 481;

	t85 = (x353^((x354%x355)^x356));

	if (t85 != 14) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x357 = 3513229135046641622LLU;
	static volatile int8_t x358 = -51;
	volatile int64_t x359 = -206479626211LL;
	static volatile uint64_t t86 = 31329920130506LLU;

	t86 = (x357^((x358%x359)^x360));

	if (t86 != 14933514938662909971LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x361 = INT32_MIN;
	int16_t x363 = -102;
	uint16_t x364 = 23U;
	volatile uint64_t t87 = 87LLU;

	t87 = (x361^((x362%x363)^x364));

	if (t87 != 18446744071562067991LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x365 = -1;
	int8_t x366 = INT8_MAX;
	int8_t x367 = -1;
	int16_t x368 = INT16_MAX;
	static int32_t t88 = -154330343;

	t88 = (x365^((x366%x367)^x368));

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x369 = INT32_MAX;
	static uint8_t x370 = 3U;
	static int64_t x371 = INT64_MIN;
	int64_t x372 = INT64_MIN;
	int64_t t89 = -5198649LL;

	t89 = (x369^((x370%x371)^x372));

	if (t89 != -9223372034707292164LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x373 = -33473;
	volatile int16_t x374 = -51;
	int16_t x376 = 3;
	static int64_t t90 = -48607526202209LL;

	t90 = (x373^((x374%x375)^x376));

	if (t90 != 33521LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x377 = 60U;
	int8_t x378 = INT8_MIN;
	int16_t x379 = -1;
	int32_t x380 = INT32_MAX;
	int32_t t91 = -143916579;

	t91 = (x377^((x378%x379)^x380));

	if (t91 != 2147483587) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x381 = INT32_MAX;
	static volatile int32_t x382 = -1;
	uint32_t x383 = 1305772537U;
	int16_t x384 = 6;

	t92 = (x381^((x382%x383)^x384));

	if (t92 != 1769833965U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x385 = 199664313LLU;
	int16_t x386 = INT16_MIN;
	static int8_t x387 = INT8_MIN;
	volatile uint16_t x388 = 5964U;
	volatile uint64_t t93 = 39101LLU;

	t93 = (x385^((x386%x387)^x388));

	if (t93 != 199669237LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x390 = INT16_MIN;
	uint16_t x391 = 2679U;
	volatile int64_t x392 = -764577474842208874LL;
	volatile int64_t t94 = -30110527LL;

	t94 = (x389^((x390%x391)^x392));

	if (t94 != 764577476210055165LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x393 = 1;
	int64_t x394 = INT64_MAX;
	uint8_t x395 = 44U;
	int64_t t95 = 206837497499078LL;

	t95 = (x393^((x394%x395)^x396));

	if (t95 != -22LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x397 = 58507096U;
	uint32_t x398 = 2U;
	int32_t x399 = -1;
	static int16_t x400 = 21;
	volatile uint32_t t96 = 193U;

	t96 = (x397^((x398%x399)^x400));

	if (t96 != 58507087U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x401 = INT16_MIN;
	static uint32_t x402 = 442771617U;
	static int16_t x403 = INT16_MAX;
	int32_t x404 = INT32_MIN;

	t97 = (x401^((x402%x403)^x404));

	if (t97 != 2147474793U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x405 = -221144LL;
	int16_t x406 = -42;
	static int8_t x408 = -2;
	volatile int64_t t98 = 3154357731623LL;

	t98 = (x405^((x406%x407)^x408));

	if (t98 != -221184LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x409 = INT8_MAX;
	int32_t x410 = INT32_MAX;
	uint32_t x412 = 6642U;

	t99 = (x409^((x410%x411)^x412));

	if (t99 != 6642U) { NG(); } else { ; }
	
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

