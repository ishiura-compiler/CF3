#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = 12U;
int32_t t1 = 0;
int32_t x20 = INT32_MAX;
int8_t x25 = INT8_MAX;
volatile int64_t x28 = -1LL;
int64_t t5 = -7940336LL;
int16_t x31 = -103;
uint8_t x32 = 22U;
int32_t x33 = -1;
int64_t x34 = -1LL;
int32_t x46 = INT32_MIN;
int8_t x49 = INT8_MIN;
uint64_t x50 = UINT64_MAX;
static volatile int64_t t11 = 73LL;
static uint64_t x61 = 4378872583678LLU;
int8_t x64 = INT8_MAX;
int64_t t14 = 986705091828041025LL;
volatile int32_t x70 = INT32_MIN;
static uint32_t x77 = UINT32_MAX;
int16_t x79 = 0;
int64_t x85 = INT64_MIN;
volatile int64_t t20 = -4381755995LL;
uint16_t x98 = 946U;
int16_t x99 = -1;
int64_t t22 = 21107988985562776LL;
volatile uint32_t x102 = 545936U;
static int64_t x105 = INT64_MAX;
int32_t x108 = INT32_MIN;
static int16_t x136 = INT16_MAX;
int16_t x140 = -19;
volatile int32_t t30 = -43938550;
int32_t x146 = -1;
int8_t x149 = INT8_MIN;
uint8_t x152 = UINT8_MAX;
uint64_t x155 = 1417LLU;
uint32_t x157 = 401U;
int64_t x165 = 1LL;
uint64_t x167 = UINT64_MAX;
int16_t x179 = -15506;
uint64_t x181 = 37414LLU;
uint64_t t41 = 83795958510LLU;
uint64_t t42 = 936777885719544699LLU;
static int8_t x191 = 0;
volatile uint64_t t43 = 7116001721LLU;
int8_t x193 = 1;
static int32_t x205 = -1940861;
static uint8_t x209 = 11U;
int16_t x210 = -1;
int64_t x231 = INT64_MAX;
int8_t x234 = 25;
volatile int16_t x239 = 183;
int32_t t54 = 1380;
volatile int32_t x248 = -51819357;
int16_t x249 = -1;
uint32_t x250 = UINT32_MAX;
static int8_t x251 = 1;
static int8_t x252 = INT8_MIN;
uint8_t x253 = 1U;
static volatile int16_t x258 = 6;
uint16_t x265 = 1U;
int16_t x268 = -23;
int64_t t61 = 197629969140LL;
volatile int64_t t62 = 329LL;
static int8_t x275 = INT8_MIN;
uint16_t x278 = 5043U;
int32_t x282 = -1;
static int16_t x286 = INT16_MAX;
int8_t x287 = -9;
volatile int8_t x289 = INT8_MIN;
int64_t t68 = -769LL;
volatile uint64_t t69 = 114LLU;
int8_t x301 = 27;
uint64_t t71 = 1026873277LLU;
uint64_t t72 = 807740584657098131LLU;
uint16_t x317 = UINT16_MAX;
int32_t t74 = 584617;
int32_t x323 = -19670260;
int8_t x326 = INT8_MIN;
int32_t x327 = INT32_MIN;
volatile uint32_t x328 = 17318U;
volatile int8_t x330 = -1;
uint8_t x333 = UINT8_MAX;
volatile int8_t x335 = INT8_MIN;
volatile uint32_t t78 = 101238U;
int32_t x343 = 1;
uint32_t t79 = 11272451U;
uint64_t t82 = 16102272451570476LLU;
static int8_t x360 = -33;
static volatile int16_t x361 = INT16_MIN;
int8_t x363 = INT8_MIN;
static uint64_t t85 = 15LLU;
int32_t x372 = -1;
int64_t t87 = 3788094715LL;
static int64_t t88 = 359828LL;
volatile uint8_t x394 = UINT8_MAX;
uint16_t x396 = UINT16_MAX;
volatile int64_t t93 = 330209377676561932LL;
int8_t x401 = 33;
int64_t x407 = INT64_MIN;
uint8_t x408 = UINT8_MAX;
uint64_t t96 = 211462559773663LLU;
static int32_t x421 = INT32_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int16_t x2 = -1;
	int16_t x3 = -1;
	static int64_t x4 = -1LL;
	volatile int64_t t0 = 3077967364099LL;

	t0 = (((x1^x2)|x3)-x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x6 = INT32_MIN;
	uint8_t x7 = 120U;
	int32_t x8 = INT32_MIN;

	t1 = (((x5^x6)|x7)-x8);

	if (t1 != 124) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	volatile uint16_t x10 = UINT16_MAX;
	static uint32_t x11 = 13482222U;
	uint8_t x12 = 19U;
	uint32_t t2 = 397U;

	t2 = (((x9^x10)|x11)-x12);

	if (t2 != 4294967276U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	uint32_t x14 = UINT32_MAX;
	uint32_t x15 = UINT32_MAX;
	int8_t x16 = -58;
	volatile uint32_t t3 = 11U;

	t3 = (((x13^x14)|x15)-x16);

	if (t3 != 57U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -952;
	int32_t x18 = -1;
	volatile int64_t x19 = 92202849032087LL;
	volatile int64_t t4 = 0LL;

	t4 = (((x17^x18)|x19)-x20);

	if (t4 != 92200701548472LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x26 = -1;
	int16_t x27 = 3137;

	t5 = (((x25^x26)|x27)-x28);

	if (t5 != -62LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x29 = INT32_MIN;
	int32_t x30 = -1;
	int32_t t6 = -2980;

	t6 = (((x29^x30)|x31)-x32);

	if (t6 != -23) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x35 = -4865LL;
	int64_t x36 = -427188106199493LL;
	volatile int64_t t7 = -242919155LL;

	t7 = (((x33^x34)|x35)-x36);

	if (t7 != 427188106194628LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x41 = -30;
	volatile uint32_t x42 = 104105986U;
	int8_t x43 = -7;
	uint32_t x44 = UINT32_MAX;
	uint32_t t8 = 4353U;

	t8 = (((x41^x42)|x43)-x44);

	if (t8 != 4294967290U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = -1LL;
	int64_t x47 = 2100216548386LL;
	int16_t x48 = -1;
	volatile int64_t t9 = -455506LL;

	t9 = (((x45^x46)|x47)-x48);

	if (t9 != 2100239007744LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x51 = 9U;
	int32_t x52 = -1;
	static volatile uint64_t t10 = 123915458192LLU;

	t10 = (((x49^x50)|x51)-x52);

	if (t10 != 128LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x53 = INT16_MIN;
	static uint8_t x54 = 1U;
	uint32_t x55 = 0U;
	volatile int64_t x56 = -1LL;

	t11 = (((x53^x54)|x55)-x56);

	if (t11 != 4294934530LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = -1LL;
	int32_t x58 = -3;
	int64_t x59 = INT64_MAX;
	volatile int8_t x60 = INT8_MAX;
	int64_t t12 = -1408463007LL;

	t12 = (((x57^x58)|x59)-x60);

	if (t12 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x62 = INT8_MIN;
	uint32_t x63 = UINT32_MAX;
	volatile uint64_t t13 = 174450810072347693LLU;

	t13 = (((x61^x62)|x63)-x64);

	if (t13 != 18446739697137876864LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x65 = 38U;
	static uint32_t x66 = 2051818U;
	int64_t x67 = -482879041344798LL;
	uint16_t x68 = UINT16_MAX;

	t14 = (((x65^x66)|x67)-x68);

	if (t14 != -482879039705361LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = 593U;
	volatile int8_t x71 = INT8_MIN;
	volatile int64_t x72 = INT64_MIN;
	static int64_t t15 = 2573LL;

	t15 = (((x69^x70)|x71)-x72);

	if (t15 != 9223372036854775761LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = -1LL;
	static uint16_t x74 = 0U;
	volatile uint32_t x75 = 112299U;
	int8_t x76 = 3;
	int64_t t16 = -3069500LL;

	t16 = (((x73^x74)|x75)-x76);

	if (t16 != -4LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x78 = INT16_MAX;
	uint16_t x80 = UINT16_MAX;
	static uint32_t t17 = 1U;

	t17 = (((x77^x78)|x79)-x80);

	if (t17 != 4294868993U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x81 = 57094U;
	int64_t x82 = INT64_MAX;
	volatile int16_t x83 = -1;
	static int32_t x84 = -1;
	volatile int64_t t18 = -554390092553959LL;

	t18 = (((x81^x82)|x83)-x84);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x86 = 156891027987LL;
	uint32_t x87 = 2278757U;
	volatile int32_t x88 = INT32_MAX;
	int64_t t19 = -58485438691848057LL;

	t19 = (((x85^x86)|x87)-x88);

	if (t19 != -9223371882111180936LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = INT64_MIN;
	static int16_t x90 = -1;
	volatile int8_t x91 = -1;
	int16_t x92 = 3;

	t20 = (((x89^x90)|x91)-x92);

	if (t20 != -4LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x93 = 574U;
	volatile uint16_t x94 = UINT16_MAX;
	int16_t x95 = INT16_MIN;
	int32_t x96 = -47460;
	volatile int32_t t21 = 18322912;

	t21 = (((x93^x94)|x95)-x96);

	if (t21 != 46885) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x97 = INT64_MIN;
	static uint8_t x100 = UINT8_MAX;

	t22 = (((x97^x98)|x99)-x100);

	if (t22 != -256LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x101 = 15332429201LLU;
	int64_t x103 = 1LL;
	static uint64_t x104 = 24369449159297LLU;
	uint64_t t23 = 1814817463LLU;

	t23 = (((x101^x102)|x103)-x104);

	if (t23 != 18446719719593332352LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x106 = -1;
	int8_t x107 = INT8_MIN;
	int64_t t24 = 0LL;

	t24 = (((x105^x106)|x107)-x108);

	if (t24 != 2147483520LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = INT16_MIN;
	uint32_t x110 = 11U;
	uint8_t x111 = UINT8_MAX;
	uint8_t x112 = 0U;
	volatile uint32_t t25 = 410U;

	t25 = (((x109^x110)|x111)-x112);

	if (t25 != 4294934783U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = INT64_MIN;
	static volatile int64_t x114 = -1LL;
	uint32_t x115 = 576955839U;
	uint8_t x116 = 5U;
	volatile int64_t t26 = -1932504288462132874LL;

	t26 = (((x113^x114)|x115)-x116);

	if (t26 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x117 = 2008033292U;
	int16_t x118 = INT16_MAX;
	uint64_t x119 = 3LLU;
	uint32_t x120 = 1667U;
	static uint64_t t27 = 337043229282964LLU;

	t27 = (((x117^x118)|x119)-x120);

	if (t27 != 2008043888LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = -1;
	static volatile int16_t x130 = -1;
	int8_t x131 = INT8_MAX;
	static int8_t x132 = INT8_MIN;
	volatile int32_t t28 = -4;

	t28 = (((x129^x130)|x131)-x132);

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x133 = 22U;
	uint8_t x134 = 20U;
	int16_t x135 = INT16_MAX;
	volatile int32_t t29 = 4;

	t29 = (((x133^x134)|x135)-x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x137 = 34;
	uint16_t x138 = UINT16_MAX;
	int8_t x139 = INT8_MIN;

	t30 = (((x137^x138)|x139)-x140);

	if (t30 != -16) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x141 = INT8_MIN;
	int32_t x142 = -1;
	static volatile int16_t x143 = -5;
	int8_t x144 = INT8_MIN;
	int32_t t31 = -1259;

	t31 = (((x141^x142)|x143)-x144);

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = INT8_MIN;
	uint32_t x147 = UINT32_MAX;
	int64_t x148 = 97019009448105539LL;
	volatile int64_t t32 = 478392572747607LL;

	t32 = (((x145^x146)|x147)-x148);

	if (t32 != -97019005153138244LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x150 = 2;
	int32_t x151 = -1;
	volatile int32_t t33 = -2;

	t33 = (((x149^x150)|x151)-x152);

	if (t33 != -256) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = -1LL;
	volatile int32_t x154 = 2918075;
	volatile int64_t x156 = INT64_MAX;
	volatile uint64_t t34 = 4LLU;

	t34 = (((x153^x154)|x155)-x156);

	if (t34 != 9223372036851858894LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x158 = 1899054044U;
	int8_t x159 = -1;
	int8_t x160 = INT8_MIN;
	uint32_t t35 = 27U;

	t35 = (((x157^x158)|x159)-x160);

	if (t35 != 127U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = -5;
	static int16_t x162 = -15126;
	static int16_t x163 = INT16_MAX;
	static volatile int16_t x164 = INT16_MIN;
	static int32_t t36 = 794;

	t36 = (((x161^x162)|x163)-x164);

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x166 = UINT32_MAX;
	int16_t x168 = -1;
	volatile uint64_t t37 = 1171578LLU;

	t37 = (((x165^x166)|x167)-x168);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x169 = INT64_MIN;
	int16_t x170 = 1;
	volatile uint64_t x171 = 81LLU;
	volatile int16_t x172 = INT16_MAX;
	volatile uint64_t t38 = 7154732691778LLU;

	t38 = (((x169^x170)|x171)-x172);

	if (t38 != 9223372036854743122LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x173 = 49U;
	volatile uint32_t x174 = UINT32_MAX;
	int32_t x175 = 18138385;
	int8_t x176 = 2;
	uint32_t t39 = 2U;

	t39 = (((x173^x174)|x175)-x176);

	if (t39 != 4294967261U) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x177 = INT32_MAX;
	uint8_t x178 = 3U;
	int32_t x180 = 25544;
	int32_t t40 = 1;

	t40 = (((x177^x178)|x179)-x180);

	if (t40 != -25546) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x182 = INT16_MIN;
	static int64_t x183 = -254LL;
	static uint64_t x184 = UINT64_MAX;

	t41 = (((x181^x182)|x183)-x184);

	if (t41 != 18446744073709551399LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x185 = -1;
	int8_t x186 = -1;
	static uint64_t x187 = UINT64_MAX;
	uint32_t x188 = UINT32_MAX;

	t42 = (((x185^x186)|x187)-x188);

	if (t42 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x189 = 1;
	static uint64_t x190 = UINT64_MAX;
	static volatile uint64_t x192 = 0LLU;

	t43 = (((x189^x190)|x191)-x192);

	if (t43 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x194 = 1621;
	int32_t x195 = INT32_MIN;
	int64_t x196 = -19675435023097519LL;
	int64_t t44 = -1702914501LL;

	t44 = (((x193^x194)|x195)-x196);

	if (t44 != 19675432875615491LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x197 = 22;
	int64_t x198 = INT64_MIN;
	int8_t x199 = 4;
	volatile int8_t x200 = 1;
	volatile int64_t t45 = -1754530068994016612LL;

	t45 = (((x197^x198)|x199)-x200);

	if (t45 != -9223372036854775787LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x201 = 10;
	int64_t x202 = 439093093289155LL;
	int64_t x203 = -1LL;
	uint8_t x204 = 3U;
	int64_t t46 = 1404505520883LL;

	t46 = (((x201^x202)|x203)-x204);

	if (t46 != -4LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x206 = 421U;
	uint16_t x207 = 27707U;
	int32_t x208 = INT32_MIN;
	volatile int32_t t47 = 9;

	t47 = (((x205^x206)|x207)-x208);

	if (t47 != 2145546047) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x211 = -26;
	static int16_t x212 = INT16_MIN;
	int32_t t48 = 1;

	t48 = (((x209^x210)|x211)-x212);

	if (t48 != 32758) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x213 = INT8_MIN;
	volatile int64_t x214 = -1690826007147LL;
	static int16_t x215 = INT16_MAX;
	int32_t x216 = 18653;
	volatile int64_t t49 = 2LL;

	t49 = (((x213^x214)|x215)-x216);

	if (t49 != 1690825996066LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x217 = -150789600605127045LL;
	int16_t x218 = INT16_MIN;
	uint32_t x219 = 8235U;
	int64_t x220 = INT64_MAX;
	int64_t t50 = 207847466651228756LL;

	t50 = (((x217^x218)|x219)-x220);

	if (t50 != -9072582436249649540LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x225 = INT16_MAX;
	int64_t x226 = 951594110LL;
	static volatile int32_t x227 = INT32_MAX;
	static uint16_t x228 = UINT16_MAX;
	int64_t t51 = 62239287LL;

	t51 = (((x225^x226)|x227)-x228);

	if (t51 != 2147418112LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x229 = 115U;
	static volatile int64_t x230 = -27135LL;
	uint32_t x232 = 60546U;
	int64_t t52 = -337396LL;

	t52 = (((x229^x230)|x231)-x232);

	if (t52 != -60547LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x233 = UINT32_MAX;
	volatile int64_t x235 = -15700LL;
	uint16_t x236 = 11633U;
	int64_t t53 = 27205387LL;

	t53 = (((x233^x234)|x235)-x236);

	if (t53 != -11651LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x237 = 31U;
	int8_t x238 = -3;
	uint16_t x240 = 57U;

	t54 = (((x237^x238)|x239)-x240);

	if (t54 != -66) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x241 = UINT8_MAX;
	uint8_t x242 = UINT8_MAX;
	int8_t x243 = INT8_MIN;
	static int64_t x244 = INT64_MIN;
	static int64_t t55 = -43214330148976450LL;

	t55 = (((x241^x242)|x243)-x244);

	if (t55 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x245 = 4007U;
	int64_t x246 = INT64_MAX;
	int64_t x247 = -1387209997263311786LL;
	int64_t t56 = 123511870LL;

	t56 = (((x245^x246)|x247)-x248);

	if (t56 != 51818427LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t t57 = 13326160U;

	t57 = (((x249^x250)|x251)-x252);

	if (t57 != 129U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x254 = INT8_MAX;
	static int8_t x255 = -1;
	int16_t x256 = -1;
	int32_t t58 = 8162504;

	t58 = (((x253^x254)|x255)-x256);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x257 = INT32_MAX;
	volatile int64_t x259 = 5036LL;
	int16_t x260 = -3528;
	static int64_t t59 = 1072745049883203LL;

	t59 = (((x257^x258)|x259)-x260);

	if (t59 != 2147487173LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x261 = INT8_MIN;
	volatile uint64_t x262 = 423823071353438LLU;
	uint8_t x263 = 3U;
	int64_t x264 = -5925537237435198LL;
	volatile uint64_t t60 = 174619208106304LLU;

	t60 = (((x261^x262)|x263)-x264);

	if (t60 != 5501714166081821LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x266 = 3152408053LL;
	volatile int8_t x267 = -1;

	t61 = (((x265^x266)|x267)-x268);

	if (t61 != 22LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x269 = INT16_MAX;
	volatile int64_t x270 = INT64_MAX;
	int32_t x271 = -1;
	int16_t x272 = INT16_MAX;

	t62 = (((x269^x270)|x271)-x272);

	if (t62 != -32768LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x273 = 2;
	uint32_t x274 = 15900U;
	volatile uint32_t x276 = UINT32_MAX;
	volatile uint32_t t63 = 7466027U;

	t63 = (((x273^x274)|x275)-x276);

	if (t63 != 4294967199U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x277 = INT16_MIN;
	static uint8_t x279 = 0U;
	static volatile int16_t x280 = -65;
	int32_t t64 = 1;

	t64 = (((x277^x278)|x279)-x280);

	if (t64 != -27660) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x281 = INT8_MIN;
	volatile int16_t x283 = INT16_MIN;
	volatile int16_t x284 = INT16_MAX;
	static int32_t t65 = -828;

	t65 = (((x281^x282)|x283)-x284);

	if (t65 != -65408) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x285 = 6883LLU;
	static int64_t x288 = -1LL;
	uint64_t t66 = 162965501040999139LLU;

	t66 = (((x285^x286)|x287)-x288);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x290 = -1LL;
	int16_t x291 = 668;
	uint32_t x292 = 115835995U;
	volatile int64_t t67 = 597130288154LL;

	t67 = (((x289^x290)|x291)-x292);

	if (t67 != -115835228LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x293 = INT64_MAX;
	uint8_t x294 = 71U;
	volatile int8_t x295 = -1;
	int64_t x296 = 82246684365212LL;

	t68 = (((x293^x294)|x295)-x296);

	if (t68 != -82246684365213LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x297 = 487801802511342LLU;
	static uint64_t x298 = UINT64_MAX;
	int32_t x299 = 2792151;
	static int8_t x300 = -1;

	t69 = (((x297^x298)|x299)-x300);

	if (t69 != 18446256271909699288LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x302 = -1;
	int64_t x303 = 0LL;
	static uint8_t x304 = UINT8_MAX;
	int64_t t70 = -8137098108542LL;

	t70 = (((x301^x302)|x303)-x304);

	if (t70 != -283LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x305 = UINT64_MAX;
	static int16_t x306 = INT16_MAX;
	static uint32_t x307 = 335744540U;
	volatile int8_t x308 = INT8_MIN;

	t71 = (((x305^x306)|x307)-x308);

	if (t71 != 18446744073709522588LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x309 = -12;
	uint64_t x310 = 162030593016LLU;
	static int8_t x311 = 0;
	int64_t x312 = INT64_MAX;

	t72 = (((x309^x310)|x311)-x312);

	if (t72 != 9223371874824182797LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x313 = 387U;
	int16_t x314 = INT16_MIN;
	volatile int8_t x315 = INT8_MIN;
	static uint32_t x316 = 45U;
	volatile uint32_t t73 = 887U;

	t73 = (((x313^x314)|x315)-x316);

	if (t73 != 4294967126U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x318 = INT8_MAX;
	volatile int32_t x319 = -64869;
	volatile int8_t x320 = INT8_MIN;

	t74 = (((x317^x318)|x319)-x320);

	if (t74 != 27) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x321 = 1U;
	int16_t x322 = 1;
	int32_t x324 = -1;
	volatile int32_t t75 = 1028506;

	t75 = (((x321^x322)|x323)-x324);

	if (t75 != -19670259) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x325 = -29;
	volatile uint32_t t76 = 1747186131U;

	t76 = (((x325^x326)|x327)-x328);

	if (t76 != 2147466429U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x329 = -1;
	volatile int32_t x331 = INT32_MIN;
	static uint32_t x332 = 76906U;
	static uint32_t t77 = 92U;

	t77 = (((x329^x330)|x331)-x332);

	if (t77 != 2147406742U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x334 = -1;
	uint32_t x336 = UINT32_MAX;

	t78 = (((x333^x334)|x335)-x336);

	if (t78 != 4294967169U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x341 = 0U;
	volatile int16_t x342 = 141;
	uint32_t x344 = 0U;

	t79 = (((x341^x342)|x343)-x344);

	if (t79 != 141U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x345 = 151U;
	static volatile int16_t x346 = INT16_MIN;
	volatile uint32_t x347 = UINT32_MAX;
	static volatile int16_t x348 = INT16_MIN;
	volatile uint32_t t80 = 56542076U;

	t80 = (((x345^x346)|x347)-x348);

	if (t80 != 32767U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x349 = 9U;
	static int64_t x350 = -154LL;
	int8_t x351 = 4;
	int16_t x352 = -1;
	int64_t t81 = 1882329727LL;

	t81 = (((x349^x350)|x351)-x352);

	if (t81 != -144LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x353 = UINT16_MAX;
	uint64_t x354 = UINT64_MAX;
	static int64_t x355 = 161242112733186LL;
	int64_t x356 = -204LL;

	t82 = (((x353^x354)|x355)-x356);

	if (t82 != 18446744073709498574LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x357 = 7629U;
	int64_t x358 = INT64_MAX;
	int8_t x359 = -1;
	int64_t t83 = -79973490653691127LL;

	t83 = (((x357^x358)|x359)-x360);

	if (t83 != 32LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x362 = 0;
	volatile int16_t x364 = -1;
	volatile int32_t t84 = 5457658;

	t84 = (((x361^x362)|x363)-x364);

	if (t84 != -127) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x365 = UINT64_MAX;
	static uint32_t x366 = 458276811U;
	static volatile int64_t x367 = INT64_MIN;
	static int32_t x368 = INT32_MIN;

	t85 = (((x365^x366)|x367)-x368);

	if (t85 != 1689206836LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x369 = -1;
	int16_t x370 = -1;
	static int32_t x371 = -1;
	volatile int32_t t86 = -110;

	t86 = (((x369^x370)|x371)-x372);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x373 = 68U;
	int64_t x374 = INT64_MIN;
	int8_t x375 = INT8_MIN;
	int64_t x376 = -730803241LL;

	t87 = (((x373^x374)|x375)-x376);

	if (t87 != 730803181LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x377 = UINT32_MAX;
	uint8_t x378 = UINT8_MAX;
	uint8_t x379 = 48U;
	int64_t x380 = -1LL;

	t88 = (((x377^x378)|x379)-x380);

	if (t88 != 4294967089LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x381 = 62U;
	int16_t x382 = -81;
	int32_t x383 = INT32_MIN;
	uint8_t x384 = 52U;
	volatile int32_t t89 = 91643;

	t89 = (((x381^x382)|x383)-x384);

	if (t89 != -163) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x385 = 20U;
	static int8_t x386 = INT8_MAX;
	uint16_t x387 = 1U;
	int32_t x388 = 2;
	static volatile int32_t t90 = 21066272;

	t90 = (((x385^x386)|x387)-x388);

	if (t90 != 105) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x389 = INT16_MAX;
	static int64_t x390 = -1LL;
	volatile uint8_t x391 = 1U;
	int32_t x392 = -1316;
	static volatile int64_t t91 = 242LL;

	t91 = (((x389^x390)|x391)-x392);

	if (t91 != -31451LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x393 = -1;
	uint8_t x395 = 29U;
	int32_t t92 = 433954;

	t92 = (((x393^x394)|x395)-x396);

	if (t92 != -65762) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x397 = 15;
	static volatile int16_t x398 = INT16_MIN;
	uint8_t x399 = 18U;
	int64_t x400 = 92295876027LL;

	t93 = (((x397^x398)|x399)-x400);

	if (t93 != -92295908764LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x402 = INT8_MIN;
	int16_t x403 = INT16_MIN;
	volatile int64_t x404 = -1LL;
	int64_t t94 = 3937976728281219LL;

	t94 = (((x401^x402)|x403)-x404);

	if (t94 != -94LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x405 = -1;
	int16_t x406 = 16;
	volatile int64_t t95 = 1818931163666LL;

	t95 = (((x405^x406)|x407)-x408);

	if (t95 != -272LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x409 = 16151960523641LL;
	volatile uint64_t x410 = UINT64_MAX;
	int16_t x411 = 1018;
	int32_t x412 = INT32_MIN;

	t96 = (((x409^x410)|x411)-x412);

	if (t96 != 18446727923896512510LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x413 = 7U;
	int16_t x414 = INT16_MAX;
	uint8_t x415 = 3U;
	uint32_t x416 = 1276U;
	uint32_t t97 = 20867325U;

	t97 = (((x413^x414)|x415)-x416);

	if (t97 != 31487U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x417 = INT16_MIN;
	volatile int32_t x418 = -1;
	static int16_t x419 = -1;
	static int32_t x420 = INT32_MIN;
	static volatile int32_t t98 = INT32_MAX;

	t98 = (((x417^x418)|x419)-x420);

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x422 = INT32_MIN;
	volatile int64_t x423 = INT64_MIN;
	static int64_t x424 = -563602079432993LL;
	volatile int64_t t99 = 15LL;

	t99 = (((x421^x422)|x423)-x424);

	if (t99 != -9222808434775342815LL) { NG(); } else { ; }
	
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

